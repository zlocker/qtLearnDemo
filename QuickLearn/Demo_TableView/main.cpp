#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QAbstractTableModel>

class TableModel : public QAbstractTableModel
  {
      Q_OBJECT

  public:

      int rowCount(const QModelIndex & = QModelIndex()) const override
      {
          return 200;
      }

      int columnCount(const QModelIndex & = QModelIndex()) const override
      {
          return 200;
      }

      QVariant data(const QModelIndex &index, int role) const override
      {
          switch (role) {
              case Qt::DisplayRole:
                  return QString("%1, %2").arg(index.column()).arg(index.row());
              default:
                  break;
          }

          return QVariant();
      }

      QHash<int, QByteArray> roleNames() const override
      {
          return { {Qt::DisplayRole, "display"} };
      }
};

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    qmlRegisterType<TableModel>("TableModel", 0, 1, "TableModel");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}

#include "main.moc"
