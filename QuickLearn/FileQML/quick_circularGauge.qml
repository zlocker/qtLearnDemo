 import QtQuick.Extras 1.4
import QtQuick.Controls.Styles 1.4
import QtQuick.Controls 2.5
import QtQuick 2.12
 Rectangle{
                                width: 140
                                height: 140
                                CircularGauge {
                                    anchors.centerIn: parent
                                    width:140
                                    height: 140
                                    style: CircularGaugeStyle {
                                        function degreesToRadians(degrees) {
                                            return degrees * (Math.PI / 180);
                                        }

                                        background: Canvas {
                                            onPaint: {
                                                var ctx = getContext("2d");
                                                ctx.reset();

                                                ctx.beginPath();
                                                ctx.strokeStyle = "#e34c22";
                                                ctx.lineWidth = outerRadius * 0.02;

                                                ctx.arc(outerRadius, outerRadius, outerRadius - ctx.lineWidth / 2,
                                                    degreesToRadians(valueToAngle(80) - 90), degreesToRadians(valueToAngle(100) - 90));
                                                ctx.stroke();
                                            }
                                        }

                                        //指针
                                        needle: Rectangle {
                                            y: outerRadius * 0.15
                                            implicitWidth: outerRadius * 0.03
                                            implicitHeight: outerRadius * 0.9
                                            antialiasing: true
                                            color: Qt.rgba(0.66, 0.3, 0, 1)
                                        }
                                        //大刻度
                                        tickmark: Rectangle {
        //                                    visible: styleData.value < 80 || styleData.value % 10 == 0
                                            implicitWidth: outerRadius * 0.02
                                            antialiasing: true
                                            implicitHeight: outerRadius * 0.1
                                            color: "#e34c22"
                                        }
                                        //刻度数字
                                        tickmarkLabel:  Text {
                                            font.pixelSize: Math.max(6, outerRadius * 0.1)
                                            text: styleData.value
                                            color: "#e34c22"
                                            antialiasing: true
                                        }
                                        //小刻度
                                        minorTickmark: Rectangle {
                                            visible: true
                                            implicitWidth: outerRadius * 0.01
                                            antialiasing: true
                                            implicitHeight: outerRadius * 0.05
                                            color: "#e34c22"
                                        }
                                        //中间的圆心
                                        foreground: Item {
                                            Rectangle {
                                                width: outerRadius * 0.2
                                                height: width
                                                radius: width / 2
                                                color: "blue"
                                                anchors.centerIn: parent
                                            }
                                        }
                                    }
                                    Text {
                                        id: indexText
                                        text: "Major and minor indices"
                                        anchors.horizontalCenter: parent.horizontalCenter
                                        anchors.bottom: parent.bottom
                                        color: "blue"
                                    }
                                }

                            }
