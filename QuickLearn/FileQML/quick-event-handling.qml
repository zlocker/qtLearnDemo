import QtQuick 2.0
import QtQuick.Controls 1.0
import QtQuick.Window 2.0

Window {
    id: myWindow
    height: 100
    width: 2 * height

    Button {
        id: myButton
        anchors.fill: parent
        anchors.margins: 20
        text: "Click me!"
        onClicked: console.log("Button clicked!")
    }

    Button {
        id: hiddenButton
        anchors.fill: parent
        anchors.leftMargin: parent.width / 2
        text: "Hidden button"
        opacity: 0
    }
} 