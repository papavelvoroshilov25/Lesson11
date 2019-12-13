#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    GumballMachine *gumballMachine = new GumballMachine(0);


    GumballMonitor *gumballMonitor = new GumballMonitor(gumballMachine);
    GumballMonitor->report();

    return a.exec();
}
