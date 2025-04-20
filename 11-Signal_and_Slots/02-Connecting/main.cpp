#include <QCoreApplication>
#include "source.h"
#include "destination.h"

int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);

    Source src1;
    Destination dst1;

    QObject::connect(&src1, &Source::mySignal, &dst1, &Destination::mySlot);

    src1.test();

    emit src1.mySignal("The test 2");

    dst1.mySlot("Like a normal function");



    return a.exec();
}

/*
"Hello, This is a test message!!"
"The test 2"
"Like a normal function"
 */
