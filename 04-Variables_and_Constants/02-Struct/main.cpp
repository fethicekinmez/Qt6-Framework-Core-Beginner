#include <QCoreApplication>
#include <QDebug>

enum Colors {red, green, blue};

struct laptop{
    int weight;
    int value;
    Colors color;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    laptop laptop1;
    laptop1.weight = 2;
    laptop1.value = 5300;
    laptop1.color = Colors::red;

    qInfo() << "Int size: " << sizeof(int);
    qInfo() << "Colors size: " << sizeof(Colors);
    qInfo() << "Size: " << sizeof(laptop);
    qInfo() << "Color: " << laptop1.color << " Value: " << laptop1.value << " Weight: " << laptop1.weight;

    return a.exec();
}

/*
Int size:  4
Colors size:  4
Size:  12
Color:  0  Value:  5300  Weight:  2
*/
