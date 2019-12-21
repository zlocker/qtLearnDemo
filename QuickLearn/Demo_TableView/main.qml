import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick 2.12
//import "qrc:/MyComponent"
import "./MyComponent/mycomponents"     //MyRectangle2
import "./MyComponent"                  //MyRectangle
//import ":/../dir"                     //

//:/../dir/MyRectangle3.qml
import "./dir"                          //MyRectangle3
import "./extra"                        //MyRectangle4
//import ":/../dir"
//import "/dir"
//import "qrc:/../dir"
import TableModel 0.1
import QtQuick.Controls 1.4
import Qt.labs.calendar 1.0
import QtCharts 2.3
Window {
    id:root
    property var bankPaySearchTableArray: [["银行卡号","开户行","卡种类型","归属地","止付开始时间","止付结束时间","状态"],
                                           [155,125,110,125,135,135,97],
                                           ["card","bank","type","location","opeStartDate","opeEndDate","cardStatus"]]

    property var bankPaySearchTableArray1: [["银行卡号","开户行","卡种类型","归属地","止付开始时间","止付结束时间"],
                                           [155,125,110,125,135,135],
                                           ["card","bank","type","location","opeStartDate","opeEndDate"]]
    property Component component:null;
    property var table:null;
    function createTable(){
        if(root.component==null){
            root.component = Qt.createComponent("DataShowTable.qml");
        }
        if(root.component.status==Component.Ready){
            table  = root.component.createObject(root,
            {"width":root.width,"height":root.height,"anchors.margins": 18});
        }
    }

    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    MyRectangle2{

    }
    MyRectangle{
        x:200
        y: 200
    }
    MyRectangle2{

    }
    MyRectangle3{
        x:250
        y: 260
    }
    MyRectangle4{
        x:300
        y: 300
    }
//    MyRectangle5{
//        x:350
//        y: 350
//    }
    ListModel{
        id:lmodel
        ListElement{

                    card:"123"
                    bank:"123"
                    type:"123"
                    location:"123"
                    opeStartDate:"123"
                    opeEndDate:"123"
                    cardStatus:"123"
                }
        ListElement{

                    card:"456"
                    bank:"456"
                    type:"456"
                    location:"456"
                    opeStartDate:"456"
                    opeEndDate:"456"
                    cardStatus:"456"
                }


    }
    ListModel{
        id:lmodel_
        ListElement{

                    card:"456"
                    bank:"456"
                    type:"456"
                    location:"456"
                    opeStartDate:"456"
                    opeEndDate:"456"
                }
        ListElement{

                    card:"123"
                    bank:"123"
                    type:"123"
                    location:"123"
                    opeStartDate:"123"
                    opeEndDate:"123"
                    cardStatus:"123"
                }


    }


//    DataShowTable{
//        id: table;
//        anchors.fill: parent
//        anchors.centerIn: parent
//        anchors.margins: 18
//        Component.onCompleted: {
//            table.updateColumn2Table(bankPaySearchTableArray1);    //创建表
//            table .model = lmodel_
//        }
//    }
    Timer{
        interval: 1000
        repeat: true
        triggeredOnStart: true
        running: true
        onTriggered: {
            if(table!=null){
                if(table.model==lmodel){
                    table.destroy()
                    root.createTable();

                    table.updateColumn2Table(bankPaySearchTableArray1)
                    table.model = lmodel_
                }else{
                    table.destroy();
                    root.createTable();
                    table.updateColumn2Table(bankPaySearchTableArray)
                    table.model = lmodel
                }
            }
        }
    }
    Component.onCompleted: {
            root.createTable()
            table.updateColumn2Table(bankPaySearchTableArray1);    //创建表
            table .model = lmodel_

    }
}
