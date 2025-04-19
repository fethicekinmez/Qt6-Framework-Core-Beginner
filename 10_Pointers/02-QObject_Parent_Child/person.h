#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include "animal.h"

class Person : public QObject{
    Q_OBJECT
public:
    explicit Person(QObject *parent = nullptr);
    ~Person();

    Animal *mamal;
signals:
};

#endif // PERSON_H
