#include <QCoreApplication>
#include "racecar.h"
#include "car.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    RaceCar* racer = new RaceCar(&a);

    Car* car = qobject_cast<Car*>(racer);  //derived class to base class
    car->drive();

    RaceCar* racer2 = qobject_cast<RaceCar*>(car); // base class to derived class;
    racer->goFast();


    return a.exec();
}
