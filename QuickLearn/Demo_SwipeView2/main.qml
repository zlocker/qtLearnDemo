import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.2

//Window {
//    visible: true
//    width: 640
//    height: 480
//    title: qsTr("Hello World")

//    MainForm {
//        anchors.fill: parent
//        mouseArea.onClicked: {
//            console.log(qsTr('Clicked on background. Text: "' + textEdit.text + '"'))
//        }
//    }
//}
ApplicationWindow {
    visible: true
    width: 400
    height: 400

//    header: Label {
//        text: view.currentItem.title
//        horizontalAlignment: Text.AlignHCenter
//    }

    Page {
        anchors.fill:parent
        title: qsTr("Home")
        Page {
            id: page1
            anchors.fill: parent
            title: qsTr("Home")

                SwipeView {
                    id: view
                    anchors.fill: parent

                    Page {
                        title: qsTr("Home1")
                        Rectangle{
                          anchors.fill: parent
                          color: "green"
                          Text {
                              id: name
                              anchors.centerIn: parent
                              text: "Hello World!"
                              font.family: "Helvetica"
                              font.pointSize: 24
                              color: "red"
                          }
                        }
                    }
                    Page {
                        title: qsTr("Home2")
                        Rectangle{
                          anchors.fill: parent
                          color: "blue"
                          Timer {
                              interval: 500; running: true; repeat: true
                              onTriggered: time.text = Date().toString()
                          }

                          Text { id: time
                              anchors.centerIn: parent
                              font.family: "Helvetica"
                              font.pointSize: 12
                              color: "white"
                          }
                        }
                    }
                    Page {
                        title: qsTr("Home3")
                        Rectangle{
                          anchors.fill: parent
                          color: "red"
                        }
                    }
                }
        }
        Page {
            id:page2
            anchors.fill: parent
            title: qsTr("Discover")
            Rectangle{
              anchors.fill: parent
              color: "blue"
            }
            visible: false
        }
        Page {
            id:page3
            anchors.fill: parent
            title: qsTr("Activity")
            Rectangle{
              anchors.fill: parent
              color: "red"
            }
            visible: false

        }
        footer: TabBar{
            id: bar1
            width: parent.width
                TabButton {
                    text: qsTr("Home")
                    onClicked:
                    {
                    page1.visible = true
                    page2.visible = false
                    page3.visible = false
                    }
                }
                TabButton {
                    text: qsTr("Discover")
                    onClicked:
                    {
                    page1.visible = false
                    page2.visible = true
                    page3.visible = false
                    }
                }
                TabButton {
                    text: qsTr("Activity")
                    onClicked:
                    {
                    page1.visible = false
                    page2.visible = false
                    page3.visible = true
                    }
                }
        }

    }


//    SwipeView {
//        id: view
//        anchors.fill: parent

//        Page {
//            title: qsTr("Home")

//        }
//        Page {
//            title: qsTr("Discover")

//        }
//        Page {
//            title: qsTr("Activity")

//        }

//        footer: TabBar{
//            id: bar1
//            width: parent.width
//                TabButton {
//                    text: qsTr("Home")
//                }
//            TabButton {
//                text: qsTr("Discover")
//            }
//                TabButton {
//                    text: qsTr("Activity")
//                }
//        }

//    }
}
