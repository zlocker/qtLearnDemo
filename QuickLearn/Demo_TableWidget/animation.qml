import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


//    Image {
//    source: "assets/background.png"
//    Image {
//    x: 40; y: 80
//    source: "assets/circle_blue.png"
//    NumberAnimation on x {
//    to: 300
//    duration: 4000
//    loops: Animation.Infinite
//    }
//    RotationAnimation on rotation {
//    to: 360
//    duration: 4000
//    loops: Animation.Infinite
//    }
//    }
//    }


      TabWidget {
          id: tabs
          width: 640; height: 480

          Rectangle {
              property string title: "Red"
              anchors.fill: parent
              color: "#e3e3e3"

              Rectangle {
                  anchors.fill: parent; anchors.margins: 20
                  color: "#ff7f7f"
                  Text {
                      width: parent.width - 20
                      anchors.centerIn: parent; horizontalAlignment: Qt.AlignHCenter
                      text: "Roses are red"
                      font.pixelSize: 20
                      wrapMode: Text.WordWrap
                  }
              }
          }

          Rectangle {
              property string title: "Green"
              anchors.fill: parent
              color: "#e3e3e3"

              Rectangle {
                  anchors.fill: parent; anchors.margins: 20
                  color: "#7fff7f"
                  Text {
                      width: parent.width - 20
                      anchors.centerIn: parent; horizontalAlignment: Qt.AlignHCenter
                      text: "Flower stems are green"
                      font.pixelSize: 20
                      wrapMode: Text.WordWrap
                  }
              }
          }

          Rectangle {
              property string title: "Blue"
              anchors.fill: parent; color: "#e3e3e3"

              Rectangle {
                  anchors.fill: parent; anchors.margins: 20
                  color: "#7f7fff"
                  Text {
                      width: parent.width - 20
                      anchors.centerIn: parent; horizontalAlignment: Qt.AlignHCenter
                      text: "Violets are blue"
                      font.pixelSize: 20
                      wrapMode: Text.WordWrap
                  }
              }
          }
          Rectangle {
              property string title: "Green"
              anchors.fill: parent
              color: "#e3e3e3"

              Rectangle {
                  anchors.fill: parent; anchors.margins: 20
                  color: "#7fff7f"
                  Text {
                      width: parent.width - 20
                      anchors.centerIn: parent; horizontalAlignment: Qt.AlignHCenter
                      text: "Flower stems are green"
                      font.pixelSize: 20
                      wrapMode: Text.WordWrap
                  }
              }
          }
      }
}
