#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QDebug>

class Animal : public QObject{

    Q_OBJECT
public:
    QString name;
public:
    explicit Animal(QObject *parent = nullptr, QString name = "");



signals:

};

#endif // ANIMAL_H
