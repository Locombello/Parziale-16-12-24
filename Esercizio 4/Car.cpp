//
// Created by loco on 12/16/24.
//

#include "Car.h"

#include <iostream>

Car::Car(const std::string &plate, int seats, double baseFee, double seatFee)
    : Vehicle(plate, seats, baseFee), seatFee(seatFee) {
}

double Car::getSeatFee() const {
    return seatFee;
}

void Car::setSeatFee(double seatFee) {
    this->seatFee = seatFee;
}

void Car::print() const {
    std::cout << "Car " << plate << std::endl;
    std::cout << "Seats: " << seats << std::endl;
    std::cout << "Fee: " << baseFee << " + " << seats << " * " << seatFee << " = " << calculateFee() << std::endl;
}

double Car::calculateFee() const {
    return baseFee + seatFee * seats;
}
