//
// Created by loco on 12/16/24.
//

#include "Van.h"

#include <iostream>
#include <ostream>

Van::Van(const std::string &plate, int seats, double baseFee, double capacity, double m3Fee)
    : Vehicle(plate, seats, baseFee), capacity(capacity), m3Fee(m3Fee) {
}

double Van::getCapacity() const {
    return capacity;
}

void Van::setCapacity(double capacity) {
    this->capacity = capacity;
}

double Van::getM3Fee() const {
    return m3Fee;
}

void Van::setM3Fee(double m3Fee) {
    this->m3Fee = m3Fee;
}

void Van::print() const {
    std::cout << "Van " << plate << std::endl;
    std::cout << "Seats: " << seats << std::endl;
    std::cout << "capacity: " << capacity << std::endl;
    std::cout << "Fee: " << baseFee << " + " << capacity << " * " << m3Fee << " = " << calculateFee() << std::endl;
}

double Van::calculateFee() const {
    return baseFee + capacity * m3Fee;
}
