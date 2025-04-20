#include <QCoreApplication>
#include <iostream>
#include <QDebug>

bool isDiv(int value){
    int div = 0;
    try{
        qInfo() << "Enter a number:";
        std::cin >> div;

        if(div == 0) throw QString("Cannot divide by zero");
        int result = value / div;

        qInfo() << "Result: " << result;
    }
    catch(QString e){
        qInfo() << "Catched: " << e;
    }
    catch(...){
        qInfo() << "Catch All";
    }

    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int value = 44;

    do{

    }while(isDiv(value));

    return a.exec();
}

/*
Enter a number:
4
Result:  11
Enter a number:
0
Catched:  "Cannot divide by zero"
Enter a number:
1
Result:  44
 */
