#include "work.h"

work::work(QObject *parent) :
    QObject(parent)
{
}

int work::sum(int a, int b)
{
    return (a+b);
}
