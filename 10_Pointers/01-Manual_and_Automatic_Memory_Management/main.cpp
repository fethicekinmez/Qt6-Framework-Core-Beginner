#include <QCoreApplication>
#include <QDebug>
#include "test.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString *description = new QString("Hello, this is a test");
    qInfo() << description << " --> " << *description;
    delete description;

    //no need for delete, because unique_ptr handles cleanup automatically.
    std::unique_ptr<QString> description2 = std::make_unique<QString>("Hello, this is a test");
    qInfo() << description2.get() << " --> " << *description2;

    std::unique_ptr<Test> t(new Test()); // This ensures the memory is automatically released when it goes out of scope (no need for delete).
    t->func();

    return a.exec();
}
