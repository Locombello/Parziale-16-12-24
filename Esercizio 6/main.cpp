#include <iostream>

#include "App.h"
#include "GPS.h"
#include "Laptop.h"
#include "Notifier.h"
#include "Smartphone.h"
#include "Tablet.h"

int main() {
    App a;

    GPS gps;
    Notifier notifier;

    Position p1 = Position(1, 1);
    Tablet t = Tablet("192.168.0.1", "Mio", p1);

    t.registerObserver(&gps);
    t.registerObserver(&notifier);

    Position p2 = Position(2, 2);
    Smartphone s = Smartphone("192.168.0.2", "Smart", p2);

    s.registerObserver(&gps);
    s.registerObserver(&notifier);

    Position p3 = Position(3, 3);
    Laptop l = Laptop("192.168.0.3", "Top", p3);

    l.registerObserver(&gps);
    l.registerObserver(&notifier);

    a.addDevice(&t);
    a.addDevice(&s);
    a.addDevice(&l);

    a.updatePosition(0, p3);
    a.updatePosition(1, p1);

    return 0;
}
