#include "animal.h"

Animal::Animal(QObject *parent, QString name) : QObject{parent}{

    this->name = name;

    qInfo() << "Animal Param: " << &name << " -> " << name;
    qInfo() << "Animal: " << &this->name << " -> " << this->name;
}
