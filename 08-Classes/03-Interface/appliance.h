#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <QObject>
#include <QDebug>
#include "Freezer.h"
#include "Microwave.h"
#include "Toaster.h"

class Appliance : public QObject, public Freezer, public Microwave, public Toaster{
    Q_OBJECT
public:
    explicit Appliance(QObject *parent = nullptr);

    // Toaster interface
public:
    bool grill();

    // Microwave interface
public:
    bool cook();

    // Freezer interface
public:
    bool freeze();

signals:
};

#endif // APPLIANCE_H
