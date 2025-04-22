#include <QCoreApplication>
#include "racecar.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Derived class to base class
    RaceCar *car1 = new RaceCar(&a);
    Car *car2 = qobject_cast<Car*>(car1);
    car2->drive();

    //Base class to derived class
    Car *car3 = new Car(&a);
    RaceCar *car4 = qobject_cast<RaceCar*>(car3);
    car4->goFast();

    return a.exec();
}
