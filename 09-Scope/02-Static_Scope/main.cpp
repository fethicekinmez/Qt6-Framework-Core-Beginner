#include <QCoreApplication>
#include "animal.h"
#include <QDebug>

int Animal::count_object = 0;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal cat1;
    qInfo() << cat1.count_object;
    Animal cat2;
    Animal cat3;
    Animal cat4;
    qInfo() << Animal::count_object;

    {
        Animal cat5;
        Animal cat6;
        qInfo() << Animal::count_object;
    }
    qInfo() << cat1.count_object;

    return a.exec();
}

/*

1
4
6
4

 */
