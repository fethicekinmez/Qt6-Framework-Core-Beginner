#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>

class Test : public QObject{
    Q_OBJECT

public:
    explicit Test(QObject *parent = nullptr);
    void testFunc();
    ~Test();

signals:
    void signal();

public slots:
    void slot();
};

#endif // TEST_H
