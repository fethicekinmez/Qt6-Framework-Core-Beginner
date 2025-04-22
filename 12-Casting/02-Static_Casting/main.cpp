#include <QCoreApplication>
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

    Car* car = new Car(&a);
    qInfo() << car;

    RaceCar* racer = static_cast<RaceCar*>(car);
    qInfo() << racer;
    if(racer)
        race(racer);


    return a.exec();
}
