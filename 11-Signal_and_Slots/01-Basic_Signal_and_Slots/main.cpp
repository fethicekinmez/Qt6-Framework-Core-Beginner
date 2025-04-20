#include <QCoreApplication>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test t1;
    Test t2;


    QObject::connect(&t1, &Test::signal, &t2, &Test::slot);

    emit t1.signal();
    t1.testFunc();

    //t2.testFunc();

    return a.exec();
}


/*
Object is created:  Test(0x16fb7af50)
Object is created:  Test(0x16fb7af30)
This is the slot
This is the slot
 */
