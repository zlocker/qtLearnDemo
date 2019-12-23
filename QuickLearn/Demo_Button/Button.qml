import QtQuick 2.0
Rectangle {
    id: root
    // export button properties
    property alias text: label.text
    property alias color: root.color
    signal clicked
    width: 116; height: 26
    color: "lightsteelblue"
    border.color: "slategrey"
        Text {
        id: label
        anchors.centerIn: parent
        text: "Start"
        }

        MouseArea {
        anchors.fill: parent
        onClicked: {
        root.clicked()
        }

    }
}
