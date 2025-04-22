#ifndef CAR_H
#define CAR_H

#include <QObject>
#include <QDebug>

class Car : public QObject
{
    Q_OBJECT
    int tires;
public:
    explicit Car(QObject *parent = nullptr);
    void drive();
    void stop();

signals:
};

#endif // CAR_H
