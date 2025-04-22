#include <QCoreApplication>
#include "car.h"
#include "racecar.h"

void testDrive(Car* obj){
    obj->drive();
    obj->stop();
}

void race(RaceCar* obj){
    obj->drive();
    obj->goFast();
    obj->stop();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    RaceCar* car1 = new RaceCar(&a);
    race(car1);
    qInfo() << "------------";
    testDrive(car1); // Implicit Conversion
    qInfo() << "------------";
    Car* car2 = dynamic_cast<Car*>(car1); //Expklicitly Convert
    testDrive(car2);
    //race(car2); Not allowed

    return a.exec();
}
