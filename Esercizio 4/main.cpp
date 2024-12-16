#include <iostream>

#include "Car.h"
#include "Motorcycle.h"
#include "Rental.h"
#include "Van.h"
#include "Vehicle.h"

int main() {
    Rental r = Rental("16/12/24");
    r.addVehicle(std::make_unique<Car>("ASJ2913KD", 5, 250.99, 5.99));
    r.addVehicle(std::make_unique<Motorcycle>("AAJ0013SB", 2, 250.99));
    r.addVehicle(std::make_unique<Van>("ZZJ0000LC", 2, 150.99, 50.0, 15.99));

    r.print();

    return 0;
}