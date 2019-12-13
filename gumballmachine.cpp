#include "gumballmachine.h"

GumballMachine::GumballMachine(int QStringlocation)
{
    count = 0;
    location = getlocation();
    this->location = location;

}

int GumballMachine::getLocation()
{
     return location;
}

