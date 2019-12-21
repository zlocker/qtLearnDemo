import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.3
import QtQuick.Controls.Styles 1.4
/*
*     模仿 tim的登录界面
* 如何把边框搞成圆角矩形？？？？
*/
ApplicationWindow {
    id:mainWindow
    title: qsTr("TIM")
    flags:Qt.FramelessWindowHint //去掉标题栏
    width: 440
    height: 330
    visible: true
    background:Image{
        id:image
        source: "qrc:/image/background.png"
    }
    MouseArea{
        anchors.fill: parent
        acceptedButtons: Qt.LeftButton
        property point cliCkPos: "0,0"
        onPressed: {
            cliCkPos=Qt.point(mouse.x,mouse.y) //得到鼠标的位置
        }

        onPositionChanged: {//鼠标按下后位置改变
            var delta=Qt.point(mouse.x-cliCkPos.x,mouse.y-cliCkPos.y)
            mainWindow.x=(mainWindow.x+delta.x) //mainWindow.x y 恒为0
            mainWindow.y=(mainWindow.y+delta.y)
        }
    } //MouseArea end

    Item {
        id: right
        width: parent.width
        //右侧的下拉， x, -
        RowLayout{
            spacing: 8
            anchors{
                right: right.right
                rightMargin: 10
                top:right.top
                topMargin: 5
            }
            Image{
                id:pulldown
                source: "qrc:/image/pulldown.png"
                MouseArea{
                    anchors.fill: parent
                    onClicked:flip.flipped = !flip.flipped
                }
            } // image end
            Image{
                source: "qrc:/image/minu.png"
            }
            BackColor{
                id:fork
                source: "qrc:/image/fork.png"
                MouseArea{
                    hoverEnabled: true
                    anchors.fill: parent
                    onClicked:{
                        Qt.quit()
                    }
                    onEntered: {
                        fork.color="#ff0000"
                        fork.visibleRec=true
                    }
                    onExited: {
                        fork.visibleRec=false
                    }
                }
            } // BackColor end
        }//RowLayout end
    } //item end

    Flipable{
        id: flip
        width: parent.width
        height: parent.height
        property bool flipped: false
        front:Item{
            id:item
            width: parent.width
            height: parent.height
            ColumnLayout{
                id:layout
                width: parent.width
                spacing: 0
                anchors{
                    bottom: item.bottom
                    bottomMargin: 5
                }
                RowLayout{
                    width: parent.width
                    spacing: 10
                    Layout.leftMargin: 28
                    Layout.topMargin: 10
                    Layout.alignment: Qt.AlignVCenter | Qt.AlignLeft
//                    anchors{
//                        top:layout.top
//                        topMargin: 10
//                        left: parent.left
//                        leftMargin: 38
//                        horizontalCenter: layout.horizontalCenter
//                    }
                    RadioImage{
                        source: "qrc:/image/icon.jpg"
                    }
                    Field{
                        id:field
                    }
                    ColumnLayout{
                        spacing: 18
                        Layout.leftMargin: 15.0
                        Layout.topMargin: 5
//                        anchors{
//                            left:field.right
//                            leftMargin: 15
//                            top:field.top
//                            topMargin: 5
//                        }
                        Item{
                            width: 100
                            height: 20
                            Text {
                                id:register
                                text: qsTr("注册账号")
                                color: "#00A3FF"
                                font.pixelSize: 10
                                MouseArea{
                                    hoverEnabled: true
                                    anchors.fill: parent
                                    onClicked: Qt.openUrlExternally("https://www.baidu.com/")
                                    onEntered: {
                                        register.color="#3CC3F5"
                                    }
                                    onExited: {
                                        register.color="#00A3FF"
                                    }
                                }
                            }
                            Image{
                                id:accountSuccess
                                source: "qrc:/image/true.png"
                                visible: false
                            }
                            Image{
                                id:accountFail
                                source: "qrc:/image/false.png"
                                visible: false
                            }
                        }  //item end
                        Item{
                            width: 100
                            height: 20
                            Text {
                                id:retrievePassword
                                text: qsTr("找回密码")
                                color: "#00A3FF"
                                font.pixelSize: 10
                                MouseArea{
                                    hoverEnabled: true
                                    anchors.fill: parent
                                    onClicked: Qt.openUrlExternally("https://www.baidu.com/")
                                    onEntered: {
                                        retrievePassword.color="#3CC3F5"
                                    }
                                    onExited: {
                                        retrievePassword.color="#00A3FF"
                                    }
                                } //MouseArea end
                            }
                            Image{
                                id:pwdSuccess
                                source: "qrc:/image/true.png"
                                visible: false
                            }
                            Image{
                                id:pwdFail
                                source: "qrc:/image/false.png"
                                visible: false
                            }
                        }  //item end

                    }//ColumnLayout end
                }//RowLayout end

                RowLayout{
                    Layout.alignment: Qt.AlignVCenter | Qt.AlignHCenter
//                    anchors.horizontalCenter: layout.horizontalCenter   //必须给定 layout的宽度
                    CheckBox{
                        id:cb_password
                        text: qsTr("记住密码")
                    }
                    CheckBox{
                        text: qsTr("自动登录")
                    }
                } //RowLayout end
                //登录
                StyleButton{
                    id:button
                    Layout.alignment: Qt.AlignVCenter | Qt.AlignHCenter
//                    anchors.horizontalCenter: layout.horizontalCenter
                    MouseArea{
                        anchors.fill: parent
                        hoverEnabled: true
                        onClicked: {
                            flip.flipped = !flip.flipped
                            console.log(field.account+"\n"+field.password)
                        }
                        onEntered: {
                            button.color="#3CC3F5"
                        }
                        onExited: {
                            button.color="#00A3FF"
                        }
                    }
                }//StyleButton end
            }//ColumnLayout end
            BackColor {
                id: add
                source: "qrc:/image/add.png"
                anchors{
                    left: item.left
                    leftMargin: 5
                    bottom: item.bottom
                    bottomMargin: 3
                }
                MouseArea{
                    anchors.fill: parent
                    hoverEnabled: true
                    onEntered: {
                        add.visibleRec=true
                    }
                    onExited: {
                        add.visibleRec=false
                    }
                }
            } //BackColor end
            BackColor {
                id: qr
                source: "qrc:/image/qr.png"
                anchors{
                    right: item.right
                    rightMargin: 5
                    bottom: item.bottom
                    bottomMargin: 3
                }
                MouseArea{
                    anchors.fill: parent
                    hoverEnabled: true
                    onEntered: {
                        qr.visibleRec=true
                    }
                    onExited: {
                        qr.visibleRec=false
                    }
                }
            } //BackColor end
        }

        //事件处理
        Connections{
            target: field.account1
            onAccountChange:{
                var  account=field.account.length
                // console.log(field.account.length)
                if(account<5&&account>0)
                {
                    accountFail.visible=true
                    register.visible=false
                    accountSuccess.visible=false
                }
                if(account>=5)
                {
                    accountSuccess.visible=true
                    register.visible=false
                    accountFail.visible=false
                }
                if(account==0)
                { accountFail.visible=false
                    register.visible=true
                    accountSuccess.visible=false
                }
            }
        } //Connections end
        Connections{
            target: field.password1
            onPasswordChange:{
                var  password=field.password.length
                if(password<5&&password>0)
                {
                    pwdFail.visible=true
                    retrievePassword.visible=false
                    pwdSuccess.visible=false
                }
                if(password>=5)
                {
                    pwdSuccess.visible=true
                    retrievePassword.visible=false
                    pwdFail.visible=false
                }
                if(password==0)
                {
                    pwdSuccess.visible=false
                    retrievePassword.visible=true
                    pwdFail.visible=false
                }
            } //onPasswordChange end
        }//Connections end
        back:Text {
            id: a
            anchors.centerIn:parent
            text: qsTr("登录成功")
        }
        transform: Rotation{
            id: rotation
            origin.x: flip.width / 2
            origin.y: flip.height / 2
            axis.x: 0
            axis.y: 1
            axis.z: 0
            angle: 0
        }
        states:State{
            PropertyChanges {
                target: rotation
                angle:180
            }
            when:flip.flipped
        }
        transitions: Transition{
            NumberAnimation{
                target:rotation
                properties: "angle"
                duration:500
            }
        }
    }//Flipable end
}
