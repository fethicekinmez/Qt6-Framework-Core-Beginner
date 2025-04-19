#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

void test(){
    int number = 4;
    qInfo() << "Scope 3: " << &number << " -> " << number;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int number = 90;
    qInfo() << "Scope 1: " << &number << " -> " << number;

    if(true){
        number = 1; // uses its parent scope decleration
        // int number = 1; //creates different variable
        qInfo() << "Scope 2: " << &number << " -> " << number;
    }

    test();

    qInfo() << "Scope4: " << &number << " -> " << number;

    Animal cat(&a, "Kitty");
    qInfo() << "Animal: " << &cat.name << " -> " << cat.name;


    return a.exec();
}


/*
Scope 1:  0x16ba3300c  ->  90
Scope 2:  0x16ba3300c  ->  1
Scope 3:  0x16ba32e9c  ->  4
Scope4:  0x16ba3300c  ->  1
Animal Param:  0x16ba32f40  ->  "Kitty"
Animal:  0x16ba32f68  ->  "Kitty"
Animal:  0x16ba32f68  ->  "Kitty"
 */
