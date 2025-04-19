#include "animal.h"

Animal::Animal(QObject *parent) : QObject{parent}{
    count_object++;
}

Animal::~Animal(){
    count_object--;
}
