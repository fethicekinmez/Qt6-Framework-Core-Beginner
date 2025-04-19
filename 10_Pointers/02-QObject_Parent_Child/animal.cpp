#include "animal.h"

Animal::Animal(QObject *parent) : QObject{parent}{
    qInfo() << "Animal is Constructed";
}

Animal::~Animal(){
    qInfo() << "Animal is Deconstructed";
}
