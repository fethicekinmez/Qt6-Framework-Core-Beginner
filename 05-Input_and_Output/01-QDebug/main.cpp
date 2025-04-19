#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << "Enter your age: ";
    std::cin >> age;
    qInfo() << "Your are " << age << " years old.";

    qInfo() << "Information";
    qDebug() << "Debug";
    qCritical() << "Critical";
    qFatal() << "Crash!!";


    return a.exec();
}

/*
Enter your age:
25
Your are  25  years old.
Information
Debug
Critical
Crash!!
qtc.process_stub: Inferior error:  QProcess::Crashed "Process crashed"
*/
