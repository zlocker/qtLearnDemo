import QtQuick 2.0
import QtQuick.Layouts 1.3
Rectangle {
    radius: 4
    width: 190
    height: 28
    color: "#00A3FF"
    RowLayout{
        anchors.centerIn: parent
        Image {
            id: name
            source: "qrc:/image/safe.png"
        }
        Text {
            id: text
            text: qsTr("安 全 登 录")
            color: "#ffffff"
            font.pixelSize: 12
        }
    }
}
