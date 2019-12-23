import QtQuick 2.8
import QtQuick.Window 2.2

/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    }
    */


DarkSquare {
    width: 400; height: 200
    GreenSquare {
    id: square
    x:8;y:8

        Text{
            anchors.centerIn: parent
            text:"what"
        }
    }

    focus: true
    Keys.onLeftPressed:
    {
        if(square.x==0)
            return
        square.x -= 8
    }
    Keys.onRightPressed: square.x += 8
    Keys.onUpPressed: square.y -= 8
    Keys.onDownPressed: square.y += 8
    Keys.onPressed: {
        switch(event.key) {
        case Qt.Key_Plus:
        square.scale += 0.2
        break;
        case Qt.Key_Minus:
        square.scale -= 0.2
        break;
        }
    }
}

