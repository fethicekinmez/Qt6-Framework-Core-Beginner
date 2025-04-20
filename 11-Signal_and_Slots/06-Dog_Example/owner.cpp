#include "owner.h"

Owner::Owner(QObject *parent) : QObject{parent}{

}

void Owner::giveSnaks(){
    qInfo() << "SNACK ARE READY??";
    emit treats();

}
