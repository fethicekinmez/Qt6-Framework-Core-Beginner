#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    enum Colors {red, green, blue = 90};

    Colors myColor = Colors::red;
    qInfo() << "myColor: " << myColor;

    myColor = Colors::blue;
    qInfo() << "myColor: " << myColor;


    return a.exec();
}

/*

myColor:  0
myColor:  90

*/
