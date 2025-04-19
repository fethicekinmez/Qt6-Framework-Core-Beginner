#include <QCoreApplication>
#include <QDebug>
#include "agecalc.h"

void print(AgeCalc &calculator){
    qInfo() << calculator.name();
    qInfo() << "Dog Years: " << calculator.dogYears();
    qInfo() << "Cat Years: " << calculator.catYears();

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AgeCalc cal1;
    cal1.setName("Calculator 1");
    cal1.setAge(31);
    print(cal1);

    AgeCalc cal2;
    cal2.setName("Calculator 2");
    cal2.setAge(43);
    print(cal2);

    return a.exec();
}

/*
"Calculator 1"
Dog Years:  217
Cat Years:  279

"Calculator 2"
Dog Years:  301
Cat Years:  387
*/
