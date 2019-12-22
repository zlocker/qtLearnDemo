#include "widget.h"
#include "ui_widget.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>


//! [0]
EditableSqlModel::EditableSqlModel(QObject *parent)
    : QSqlQueryModel(parent)
{
}

Qt::ItemFlags EditableSqlModel::flags(
        const QModelIndex &index) const
{
    Qt::ItemFlags flags = QSqlQueryModel::flags(index);
    if (index.column() > 0)     //如果索引项的所在列大于0，则可编辑
        flags |= Qt::ItemIsEditable;
    return flags;
}
//! [0]

//! [1]
bool EditableSqlModel::setData(const QModelIndex &index, const QVariant &value, int /* role */)
{
    if (index.column() < 1)
        return false;

    QModelIndex primaryKeyIndex = QSqlQueryModel::index(index.row(), 0);
    int id = data(primaryKeyIndex).toInt();

    clear();

    bool ok;
    int column = index.column();
    if(column>0){
        ok = updateItem(id,headerList.at(column),value.toString());
    }
    readItem();
    return ok;
}

bool EditableSqlModel::createItem()
{
    QSqlQuery query;
    clear();
    bool ok;
    ok = query.exec(createStr1);
    if(createStr2!="")
    ok = query.exec(createStr2);
    readItem();
    return ok;
}
//! [1]

bool EditableSqlModel::deleteItem(){
    QSqlQuery query;
    clear();
    bool ok;
    ok = query.exec(deleteStr1);
    if(deleteStr2!="")
    ok = query.exec(deleteStr2);
    readItem();
    return ok;
}



bool EditableSqlModel::updateItem(int ID,QString columnName,const QString &data)
{
    QSqlQuery query;
    QString str1,str2;

    this->updateStr1 = "update custnew set %1 = '%2' where cust_id = '%3'";
    str1 = QString(updateStr1).arg(columnName).arg(data).arg(ID);
    bool ok = query.exec(str1);
    if(ok){
       return ok;
    }
    else{
        str2 = QString(updateStr2).arg(columnName).arg(data).arg(ID);
        return query.exec(str2);
    }
}

void EditableSqlModel::readItem()
{
    setQuery(readStr);
    for(int i = 0; i < headerMap.count();++i)
        setHeaderData(i, Qt::Horizontal,headerMap[headerList[i]]);
}


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    initDatabase();
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setAlternatingRowColors(true);
//    connect(model,SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)),this,)

}

Widget::~Widget()
{
    delete ui;
}
void Widget::initDatabase()
{
    //添加MySql数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    //连接数据库
    db.setHostName("localhost"); //数据库服务器IP
    db.setUserName("root"); //数据库用户名
    db.setPassword("132979"); //密码
    db.setDatabaseName("test"); //使用哪个数据库

    //打开数据库
    if( !db.open() ) //数据库打开失败
    {
        QMessageBox::warning(NULL, "错误", db.lastError().text());
        return;
    }
}

void Widget::on_tBtnQuery_clicked()
{
    model = new EditableSqlModel(this);
    model->readStr = "select * from custnew";
    model->updateStr1 = "update custnew set %1 = '%2' where cust_id = '%3'";
    model->createStr1 = "INSERT INTO custnew VALUES(NULL,'AA',NULL,NULL,NULL,NULL,NULL,NULL,NULL)";

    model->headerList<<"cust_id"<<"cust_name"<<"cust_address"<<"cust_city"<<"cust_state"
                     <<"cust_zip"<<"cust_country"<<"cust_contact"<<"cust_email";
    model->headerMap.insert(model->headerList.at(0),"编号");
    model->headerMap.insert(model->headerList.at(1),"姓名");
    model->headerMap.insert(model->headerList.at(2),"地址");
    model->headerMap.insert(model->headerList.at(3),"城市");
    model->headerMap.insert(model->headerList.at(4),"州");
    model->headerMap.insert(model->headerList.at(5),"右边");
    model->headerMap.insert(model->headerList.at(6),"国家");
    model->headerMap.insert(model->headerList.at(7),"联系人");
    model->headerMap.insert(model->headerList.at(8),"邮箱");
    model->setQuery("select * from custnew");
    for(int i = 0; i < model->headerMap.count();++i)
        model->setHeaderData(i, Qt::Horizontal,model->headerMap[model->headerList[i]]);
    if (model->lastError().isValid())
    {
        QMessageBox::information(this, "错误", "数据表查询错误,错误信息\n"+model->lastError().text(),
                                 QMessageBox::Ok,QMessageBox::NoButton);
        return;
    }
    theSelection=new QItemSelectionModel(model);//关联选择模型
////theSelection当前项变化时触发currentChanged信号
//    connect(theSelection,SIGNAL(currentChanged(QModelIndex,QModelIndex)),
//            this,SLOT(on_currentChanged(QModelIndex,QModelIndex)));
////选择行变化时

    ui->tableView->setModel(model);
    ui->tableView->setSelectionModel(theSelection); //设置选择模型

//    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
//    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);



}
//插入---数据库完成插入操作尚未解决
void Widget::on_tBtnInsert_clicked()
{
    model->insertRow(model->rowCount(),QModelIndex()); //在末尾添加一个记录
    ui->tableView->setModel(model);
    QModelIndex curIndex=model->index(theSelection->currentIndex().row(),1);//创建最后一行的ModelIndex
    theSelection->clearSelection();//清空选择项
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);//设置刚插入的行为当前选择行
}
//添加
void Widget::on_tBtnAdd_clicked()
{

    model->createItem();
    QModelIndex curIndex=model->index(model->rowCount()-1,1);//创建最后一行的ModelIndex
    theSelection->clearSelection();//清空选择项
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);//设置刚插入的行为当前选择行
}
//修改---无需此响应
void Widget::on_tBtnModify_clicked()
{
    int column = theSelection->currentIndex().column();
    QString data = theSelection->currentIndex().data().toString();
}
//删除
void Widget::on_tBtnDelete_clicked()
{
    int row = theSelection->currentIndex().row();
    int column = theSelection->currentIndex().column();
    QSqlRecord record =  model->record(row);
    QString keyData = record.value(0).toString();
    QString keyFieled = model->headerList.at(0);
    model->deleteStr1 = QString("delete from custnew where %1 = '%2'").arg(keyFieled).arg(keyData);
    model->deleteItem();
    QModelIndex curIndex=model->index(theSelection->currentIndex().row()-1,1);//创建最后一行的ModelIndex
    theSelection->clearSelection();//清空选择项
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);//设置刚插入的行为当前选择行
}

