#ifndef AGECALC_H
#define AGECALC_H

#include <QObject>

class AgeCalc : public QObject
{
    Q_OBJECT

    int m_age;
    QString m_name;

public:
    explicit AgeCalc(QObject *parent = nullptr);

    int age() const;
    void setAge(int newAge);

    QString name() const;
    void setName(const QString &newName);

    int dogYears() const;
    int catYears() const;


signals:

};

#endif // AGECALC_H
