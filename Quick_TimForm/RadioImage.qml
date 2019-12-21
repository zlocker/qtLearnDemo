import QtQuick 2.0
import QtGraphicalEffects 1.0
//将方形图片处理成圆形
Rectangle {
    id: img
    //属性声明
    property alias source: _image.source

    width: 80
    height: 80
    radius: width/2
    color: "#fff"

    Image {
        id: _image
        smooth: true
        visible: false
        anchors.fill: parent
        sourceSize: Qt.size(parent.size, parent.size)
        antialiasing: true
    }
    Rectangle {
        id: _mask
        color: "black"
        anchors.fill: parent
        radius: width/2
        visible: false
        antialiasing: true
        smooth: true
    }
    //maskSource对 source 进行遮挡显示的 状为 内容为source；形状为maskSource
    OpacityMask {
        id:mask_image
        anchors.fill: _image
        source: _image
        maskSource: _mask
        visible: true
        antialiasing: true
    }
}
