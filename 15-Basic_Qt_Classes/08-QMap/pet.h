#ifndef PET_H
#define PET_H

#include <QObject>

class Pet : public QObject{
    Q_OBJECT

    QString m_name;
    int m_age;

public:
    explicit Pet(QObject *parent = nullptr);

    QString name() const;
    void setName(const QString &newName);

    int age() const;
    void setAge(int newAge);

signals:
};

#endif // PET_H
