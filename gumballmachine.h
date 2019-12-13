#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H

#include <iostream>
#include <QString>

using namespace std;


class GumballMachine
{
private:
    GumballMachine *gumballMachine;
    int count;
public:
    GumballMachine(int QStringlocation);
    QString *getlocation();
    int location;
    QStringList toString();
};

#endif // GUMBALLMACHINE_H
