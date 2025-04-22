#include <QCoreApplication>
#include <QDebug>
#include <QVariant>

void print(QVariant v){
    qInfo() << v;
}

void convertToInt(QVariant value){
    int i = 0;
    bool isConverted = false;
    i = value.toInt(&isConverted);
    if(isConverted){
        qInfo() << "Int: " << i;
    }
    else{
        qInfo() << "It is not an int";
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVariant value1 = 1;
    QVariant value2 = "Hello World";

    print(value1);
    print(value2);

    QString greeting = "Hello World!";
    print(greeting);

    convertToInt(value1);
    convertToInt(value2);

    return a.exec();
}

/*

QVariant(int, 1)
QVariant(QString, "Hello World")
QVariant(QString, "Hello World!")
Int:  1
It is not an int


*/
