#include "test.h"

Test::Test(QObject *parent) : QObject{parent}{

    this->connect(&m_timer, &QTimer::timeout, this, &Test::timeout);
    m_timer.setInterval(1000);
    count = 0;
    m_timer.start();

}

void Test::timeout(){

    count++;
    qInfo() << "Test!";
    if(count >= 5)
        m_timer.stop();
}
