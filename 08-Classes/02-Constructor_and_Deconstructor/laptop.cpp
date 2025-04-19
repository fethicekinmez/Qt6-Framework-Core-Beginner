#include "laptop.h"

Laptop::Laptop(QObject *parent, QString name, int weight) : QObject{parent}, name(name), weight(weight){
    qDebug() << this << "is contructed";
}

Laptop::~Laptop(){
    qDebug() << this << "is destructed";
}

double Laptop::asKilo(){
    return this->weight * 0.45359237;
}

void Laptop::print(){
    qInfo() << this << " " << this->name << " " << this->weight;
}
