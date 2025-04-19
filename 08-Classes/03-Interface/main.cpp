#include <QCoreApplication>
#include "appliance.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Appliance app1;

    qInfo() << "cook: " << app1.cook();
    qInfo() << "freeze: " << app1.freeze();
    qInfo() << "grill: " << app1.grill();

    return a.exec();
}

/*

Appliance(0x16d386fb8)  is constructed!
cook:  true
freeze:  true
grill:  true

 */
