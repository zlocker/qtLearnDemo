import QtQuick 2.12
import QtQuick.Controls 2.12

ApplicationWindow {
    id: window
    width: 200
    height: 228
    visible: true
    //左侧板
    Drawer {
        id: drawer
        width: 0.66 * window.width
        height: window.height
        //可加入listview
        Label {
            text: "Content goes here!"
            anchors.centerIn: parent
        }
    }

    Label {
        id: content

        text: "Aa"
        font.pixelSize: 96
        anchors.fill: parent
        verticalAlignment: Label.AlignVCenter
        horizontalAlignment: Label.AlignHCenter

        transform: Translate {
            x: drawer.position * content.width * 0.33
        }
    }
}
