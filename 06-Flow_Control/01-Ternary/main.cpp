#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << "Enter your age: ";
    std::cin >> age;

    (age < 18 && age > 12) ? qInfo("You are a teenager") : qFatal("You are NOT a teenager");

    return a.exec();
}

/*
Enter your age:
15
You are a teenager
*/

/*
Enter your age:
25
You are NOT a teenager
qtc.process_stub: Inferior error:  QProcess::Crashed "Process crashed"
*/
