import QtQuick 2.5
import QtQuick.Controls 1.3
import QtQuick.Window 2.2

Rectangle {
    id: window

    width: 360
    height: 360
    property alias touchArea: touchArea
    property alias tux: tux

    MultiPointTouchArea {
        id: touchArea
        anchors.fill: parent
        touchPoints: [
            TouchPoint { id: point1 },
            TouchPoint { id: point2 }
        ]
    }

    Image {
        id: tux
        x: 126
        y: 105
        width: 155
        height: 150
        fillMode: Image.Stretch
        source: "tux.png"
    }
}
