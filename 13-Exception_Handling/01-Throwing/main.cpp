#include <QCoreApplication>
#include <iostream>
#include <QDebug>

bool isDiv(int value){
    int div = 0;
    qInfo() << "Enter a number: ";
    std::cin >> div;

    if(div == 1)
        return false;
    if(div == 0){
        qInfo() << "ZERO is entered";
        throw "Cannot divide by zero";
    }
    int result = value / div;
    qInfo() << "Result: " << result;
    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int value = 44;

    do{

    }while(isDiv(value));

    qInfo() << "End of the program";

    return a.exec();
}

/*
Enter a number:
2
Result:  22
Enter a number:
0
ZERO is entered
libc++abi: terminating due to uncaught exception of type char const*
qtc.process_stub: Inferior error:  QProcess::Crashed "Process crashed"

Terminal process exited with code 6.
 */
