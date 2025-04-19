#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include <QDebug>

class Laptop : public QObject{
    Q_OBJECT
public:
    explicit Laptop(QObject *parent = nullptr, QString name = "", int weight = 0); //Constructor
    ~Laptop();  // Destructor

    int weight;
    QString name;
    double asKilo();
    void print();

signals:
};

#endif // LAPTOP_H
