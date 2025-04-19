#include <QCoreApplication>
#include <QDebug>

QObject* getObject(QString name){
    QObject* o = new QObject();
    o->setObjectName(name);
    return o;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject* o1 = getObject(QString("Object-1"));

    qInfo() << o1->objectName();
    qInfo() << o1;

    return a.exec();
}
