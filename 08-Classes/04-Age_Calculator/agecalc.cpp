#include "agecalc.h"

AgeCalc::AgeCalc(QObject *parent) : QObject{parent}{

}

int AgeCalc::age() const{
    return m_age;
}

void AgeCalc::setAge(int newAge){
    m_age = newAge;
}

QString AgeCalc::name() const{
    return m_name;
}

void AgeCalc::setName(const QString &newName){
    m_name = newName;
}


int AgeCalc::dogYears() const{
    return this->m_age * 7;
}

int AgeCalc::catYears() const{
    return this->m_age * 9;
}
