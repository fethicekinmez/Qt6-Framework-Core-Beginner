#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qint8 value8 = 0;
    qint16 value16 = 0;
    qint32 value32 = 0;
    qint64 value64 = 0;
    qint128 value128 = 0;
    qintptr valueptr = 0;

    qInfo() << "value 8: " << value8 << " size is " << sizeof(value8);
    qInfo() << "value 16: " << value16 << " size is " << sizeof(value16);
    qInfo() << "value 32: " << value32 << " size is " << sizeof(value32);
    qInfo() << "value 64: " << value64 << " size is " << sizeof(value64);
    qInfo() << "value 128: " << value128 << " size is " << sizeof(value128);
    qInfo() << "value ptr: " << valueptr << " size is " << sizeof(valueptr);


    return a.exec();
}


/*
value 8:  0  size is  1
value 16:  0  size is  2
value 32:  0  size is  4
value 64:  0  size is  8
value 128:  0  size is  16
value ptr:  0  size is  8

 */
