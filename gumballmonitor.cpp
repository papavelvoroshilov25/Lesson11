#include "gumballmonitor.h"

GumballMonitor::GumballMonitor(GumballMachine *gumballMachine)
{
     this->machine = machine;
}

void GumballMonitor::report() {
   cout << "Gumball Machine: " + machine.getLocation() << endl;
   cout << "Current inventory: " + machine.getCount() + " gumballs" << endl;
   cout << "Current state: " + machine.getState() << endl;
}
