#include "testeng.h"
#include <QTest>
#include "work.h"


testeng::testeng(QObject *parent) :
    QObject(parent)
{
}
void testeng::testMethod()
{
    work obj;
    QCOMPARE (obj.sum(7,5), 7);

}
