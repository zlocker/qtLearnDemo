import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Button { // our Button component
    id: button
    x: 12; y: 12
    text: "Start"

    onClicked: {
    status.text = "Button clicked!"
    button.text = "Yes"
    button.color = "blue"
    }

    }
    Text { // text changes when button was clicked
    id: status
    x: 12; y: 76
    width: 116; height: 26
    text: "waiting ..."
    horizontalAlignment: Text.AlignHCenter
    }
}
