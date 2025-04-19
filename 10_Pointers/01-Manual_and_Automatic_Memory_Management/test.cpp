#include "test.h"

Test::Test(QObject *parent) : QObject{parent} {

}

void Test::func(){
    qInfo() << "Test is running...";
}
