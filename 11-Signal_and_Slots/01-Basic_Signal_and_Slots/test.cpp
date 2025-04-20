#include "test.h"

Test::Test(QObject *parent) : QObject{parent}{
    qInfo() << "Object is created: " << this;
}

void Test::testFunc(){
    emit signal();
}

void Test::slot(){
    qInfo() << "This is the slot";

}

Test::~Test(){
    qInfo() << "Object is destroyed: " << this;
}

