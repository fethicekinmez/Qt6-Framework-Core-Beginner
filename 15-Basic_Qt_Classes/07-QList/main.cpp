#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString string = "Hello World, the end is near!";
    QList<QString> qlst = string.split(" ");

    QString str;
    foreach (str, qlst) {
        qInfo() << str;
    }

    QList<int> intlst({44,32,14,21,78});
    intlst.append(99);
    intlst.remove(1);
    qInfo() << intlst;

    return a.exec();
}

/*

"Hello"
"World,"
"the"
"end"
"is"
"near!"
QList(44, 14, 21, 78, 99)


*/
