#ifndef RACECAR_H
#define RACECAR_H

#include <QObject>
#include "car.h"

class RaceCar : public Car
{
    Q_OBJECT
public:
    explicit RaceCar(QObject *parent = nullptr);

    void goFast();

signals:
};

#endif // RACECAR_H
