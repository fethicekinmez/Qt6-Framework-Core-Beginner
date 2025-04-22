#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString greetings = "Hello World";
    QByteArray buffer(greetings.toUtf8());

    qInfo() << buffer;

    buffer.append("!!!!");

    qInfo() << buffer;

    qInfo() << buffer.rightJustified(20, '.');
    qInfo() << buffer.at(buffer.length() - 1);

    QString modified(buffer);
    qInfo() << modified;

    return a.exec();
}

/*


"Hello World"
"Hello World!!!!"
".....Hello World!!!!"
!
"Hello World!!!!"


 */
