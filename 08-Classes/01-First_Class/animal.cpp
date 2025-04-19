#include "animal.h"

Animal::Animal(QObject *parent) : QObject{parent}{
    qDebug() << this << " is constructed";
}

void Animal::speak(QString message){
    qInfo() << message;
}
