import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.5
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "blue"
    Button {
        text: "Open"
        onClicked: dialog.open()
    }
    Dialog {
        id: dialog
        modal: true
        standardButtons: Dialog.Ok
    }
    Popup {
        id: popup
        x: 100
        y: 100
        width: 200
        height: 300
        modal: true                     //是否为模态窗口
        focus: true
        closePolicy: Popup.NoAutoClose  //窗口弹出后无法关闭
    }
}
