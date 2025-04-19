#include <QCoreApplication>
#include "laptop.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Laptop laptop1;
    laptop1.weight = 2;
    laptop1.name = "MacBook Pro";

    qInfo() << "Weight in kilogram: " << laptop1.asKilo();

    laptop1.print();

    Laptop laptop2(nullptr, "Windows", 3);
    laptop2.print();


    return a.exec();
}

/*
Laptop(0x16da2ef10) is contructed
Weight in kilogram:  0.907185
Laptop(0x16da2ef10)   "MacBook Pro"   2
Laptop(0x16da2ee90) is contructed
Laptop(0x16da2ee90)   "Windows"   3
 */
