import QtQuick 2.7
import QtQuick.Controls 1.4

Rectangle{
    id: tableCell
    property var odd;
    anchors.fill: parent;
    anchors.margins: 3;
    border.color: "blue";
    radius:3;
//    color: styleData.selected ? "transparent" : "#1A4275";
    color: styleData.column%2==0? "black" : "#1A4275";
    Text{
        id: textID;
        text:styleData.value ;
        font.family: "微软雅黑";
        font.pixelSize: 12;
        anchors.fill: parent;
        color: "white";
        elide: Text.ElideRight;
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
    }
}
