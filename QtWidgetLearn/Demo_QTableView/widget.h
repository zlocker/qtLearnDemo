#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QItemSelectionModel>
namespace Ui {
class Widget;
}

class EditableSqlModel : public QSqlQueryModel
{
    Q_OBJECT

public:
    EditableSqlModel(QObject *parent = nullptr);

    Qt::ItemFlags flags(const QModelIndex &index) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role) override;
    bool createItem();
    bool deleteItem();
    bool updateItem(int ID,QString columnName,const QString &data);
    void readItem();
    QList<QString> headerList;
    QMap<QString,QString> headerMap;
    QString createStr1,createStr2,updateStr1,updateStr2,deleteStr1,deleteStr2,readStr;
private:


    bool setCust_name(int personId, const QString &firstName);
    bool setCust_Address(int personId, const QString &lastName);

};



class Widget : public QWidget
{
    Q_OBJECT
    void initDatabase();

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private slots:
    void on_tBtnQuery_clicked();

    void on_tBtnInsert_clicked();

    void on_tBtnAdd_clicked();
    void on_tBtnModify_clicked();

    void on_tBtnDelete_clicked();

private:
    Ui::Widget *ui;
    EditableSqlModel *model;
    QItemSelectionModel *theSelection; //选择模型


};

#endif // WIDGET_H
