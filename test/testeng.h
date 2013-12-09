#ifndef TESTENG_H
#define TESTENG_H

#include <QObject>

class testeng : public QObject
{
    Q_OBJECT
public:
    explicit testeng(QObject *parent = 0);
    
signals:
    
public slots:
    void testMethod();
    
};

#endif // TESTENG_H
