//
// Created by loco on 12/16/24.
//

#include "Motorcycle.h"

#include <iostream>
#include <ostream>

Motorcycle::Motorcycle(const std::string &plate, int seats, double fee): Vehicle(plate, seats, fee) {
}

void Motorcycle::print() const {
    std::cout << "Motrcycle " << plate << std::endl;
    std::cout << "Seats: " << seats << std::endl;
    std::cout << "Fee: " << calculateFee() << std::endl;
}

double Motorcycle::calculateFee() const {
    return baseFee;
}
