#include <QCoreApplication>
#include <QDebug>

template<typename T>
void display(T value){
    qInfo() << "Value: " << value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    display<int>(34);

    QObject obj;
    display<QObject*>(&obj);


    return a.exec();
}

/*
Value:  34
Value:  QObject(0x16d202f70)
 */
