import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import an.qt.ColorMaker 1.0
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    function changeAlgorithm(Button, algorithm){
       switch(algorithm)
       {
       case 0:
           Button.text = "RandomRGB";
           break;
       case 1:
           Button.text = "RandomRed";
           break;
       case 2:
           Button.text = "RandomGreen";
           break;
       case 3:
           Button.text = "RandomBlue";
           break;
       case 4:
           Button.text = "LinearIncrease";
           break;
       }
       console.log("这是")
    }
    Rectangle {
        width: 360
        height: 360
        Text {
            id: timeLabel;
            anchors.left: parent.left
            anchors.leftMargin: 4
            anchors.top: parent.top
            anchors.topMargin: 4
            font.pixelSize: 26
        }
        ColorMaker {
            id: colorMaker
            color: Qt.green
        }
        Rectangle {
            id: colorRect
            anchors.centerIn: parent
            width: 200
            height: 200
            color: "blue"
        }
        Button {
            id: start
            text: "start"
            anchors.left: parent.left
            anchors.leftMargin: 4
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 4
            onClicked: {
                colorMaker.start()
            }
        }
        Button {
            id: stop
            text: "stop"
            anchors.left: parent.right
            anchors.leftMargin: 4
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 4
            onClicked: {
                colorMaker.stop()
            }
        }


        Button{
            id: colorAlgorithm;
            text: "RandomRGB"
            anchors.left: stop.right
            anchors.leftMargin: 4
            anchors.bottom: start.bottom

            onClicked: {
                var algorithm = (colorMaker.alogorithm() + 1) % 5;
                changeAlgorithm(colorAlgorithm,algorithm);
                changeAlgorithm(colorAlgorithm,colorMaker.alogorithm())
                colorMaker.setAlogorithm(algorithm)

            }
        }
        Button{
            id:quit
            text: "quit"
            anchors.left: colorAlgorithm.right
            anchors.leftMargin: 4
            anchors.bottom:  start.bottom
            onClicked: {
                Qt.quit()
            }
        }
        Component.onCompleted: {
            colorMaker.color = Qt.rgba(0,180,120,255)
            colorMaker.setAlogorithm(ColorMaker.LinearIncrease)
            changeAlgorithm(colorAlgorithm,colorMaker.alogorithm())
        }
        Connections{
            target: colorMaker
            onCurrentTime:{
                timeLabel.text = strTime;
                timeLabel.color = colorMaker.timeColor
            }
        }
        Connections{
            target: colorMaker
            onColorChanged:{
                colorRect.color = color
            }
        }
    }

}
