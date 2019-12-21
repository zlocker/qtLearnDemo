import QtQuick 2.0
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.3
// 一个矩形把 两个TextField包裹起来
Rectangle {
    id:root
    radius: 4
    width: 195
    height: 60
    border.color: "#bdbdbd"
    border.width: 1
    property alias account1: account1
    property alias password1: password1
    property alias account: account1.text
    property alias password: password1.text


    ColumnLayout{
        spacing: 0
        TextField{
            id:account1
            placeholderText: qsTr("QQ号码/手机/邮箱")
            signal accountChange(string name)
            background: Rectangle{
                implicitWidth: root.width
                implicitHeight: root.height/2 //此时用width 和height 输入有问题？？？
                opacity: 0 //为0 是看不见
            }
            onTextChanged: account1.accountChange(account1.text)
        }
        //中间的横线
        Rectangle{
            width: root.width
            height: 1
            color: root.border.color
        }
        TextField{
            id:password1
            signal passwordChange(string pwd)
            placeholderText: qsTr("密码")
            echoMode: TextInput.Password
            background: Rectangle{
                implicitWidth: root.width
                implicitHeight: root.height/2
                opacity: 0
            }
            onTextChanged: password1.passwordChange(password.text)
        }
    }
}
