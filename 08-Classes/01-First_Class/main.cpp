#include <QCoreApplication>
#include "animal.h"

int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);

    Animal cat;
    Animal dog;

    cat.setObjectName("Kitty");
    dog.setObjectName("Puppy");

    cat.speak("meaow");
    dog.speak("havhav");

    return a.exec();
}
