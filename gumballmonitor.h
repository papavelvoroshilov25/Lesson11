#ifndef GUMBALLMONITOR_H
#define GUMBALLMONITOR_H

#include "gumballmachine.h"


class GumballMonitor
{
public:
    GumballMonitor(GumballMachine *gumballMachine);
    ~GumballMonitor();
    void report();
};

#endif // GUMBALLMONITOR_H
