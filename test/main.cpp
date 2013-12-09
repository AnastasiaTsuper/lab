#include <QCoreApplication>
#include <QTest>
#include "testeng.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    testeng testing;
    QTest::qExec(&testing,argc, argv );
    return a.exec();
}
