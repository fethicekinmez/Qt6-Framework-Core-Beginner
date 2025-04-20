#include <QCoreApplication>
#include "dog.h"
#include "owner.h"

int main(int argc, char *argv[]){

    QCoreApplication a(argc, argv);

    Dog dog;
    Owner owner;

    QObject::connect(&owner, &Owner::treats, &dog, &Dog::treats);

    for(size_t i=0; i<10; i++){
        QObject::connect(&owner, &Owner::treats, &dog, &Dog::treats,Qt::UniqueConnection);
    }
    owner.giveSnaks();

    return a.exec();
}

/*
With Qt::UniqueConnection
SNACK ARE READY??
BARK!!!
*/
/*
Without Qt::UniqueConnection
SNACK ARE READY??
BARK!!!
BARK!!!
BARK!!!
BARK!!!
BARK!!!
BARK!!!
BARK!!!
BARK!!!
BARK!!!
BARK!!!
BARK!!!
*/
