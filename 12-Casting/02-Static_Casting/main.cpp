#include <QCoreApplication>
#include "racecar.h"

void testDrive(Car *obj){
    obj->drive();
    obj->stop();
}

void race(RaceCar *obj){
    obj->drive();
    obj->goFast();
    obj->stop();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Car *car1 = new Car(&a);

    RaceCar *car2 = static_cast<RaceCar*>(car1);

    race(car2);


    return a.exec();
}

/*
Driving..
Going Fast.....
Stop!
*/
