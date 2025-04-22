#include <QCoreApplication>
#include <QDebug>
#include "pet.h"

typedef QMap<QString, Pet*> petList;

petList createPets(int max){
    petList map;
    for(int i=0; i<max; i++){
        QString id = QString::number(i);
        Pet* pet = new Pet();
        pet->setAge(i*3);
        pet->setName("PET0" + id);
        map.insert(id, pet);
    }
    return map;
}

void listPets(petList pets){

    foreach (QString key, pets.keys()){
        Pet* pet = pets.value(key);
        qInfo() << key << ": " << pet->age() << " " << pet->name();

    }

}

int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);

    petList pets = createPets(5);
    qInfo() << "Count: " << pets.count();

    listPets(pets);

    qDeleteAll(pets.values());
    pets.clear();
    qInfo() << "Count: " << pets.count();

    return a.exec();
}

/*
Count:  5
"0" :  0   "PET00"
"1" :  3   "PET01"
"2" :  6   "PET02"
"3" :  9   "PET03"
"4" :  12   "PET04"
Count:  0

 */
