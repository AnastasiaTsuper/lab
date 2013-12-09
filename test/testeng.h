#ifndef TESTENG_H
#define TESTENG_H

#include <QObject>

class testeng : public QObject
{
    Q_OBJECT
public:
    explicit testeng(QObject *parent = 0);
    
signals:
    
private slots:
    void testMethod();
public slots:

    
};

#endif // TESTENG_H
