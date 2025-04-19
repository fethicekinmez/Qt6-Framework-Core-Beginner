#include "person.h"

Person::Person(QObject *parent) : QObject{parent}{
    qInfo() << "Person is Constructed";
}

Person::~Person(){
    qInfo() << "Person is Deconstructed";
}
