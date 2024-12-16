//
// Created by loco on 12/16/24.
//

#include "Vehicle.h"

Vehicle::Vehicle(const std::string &plate, int seats, double baseFee) : plate(plate), seats(seats), baseFee(baseFee) {
}

std::string Vehicle::getPlate() const {
    return plate;
}

void Vehicle::setPlate(const std::string &plate) {
    this->plate = plate;
}

int Vehicle::getSeats() const {
    return seats;
}

void Vehicle::setSeats(int seats) {
    this->seats = seats;
}

double Vehicle::getBaseFee() const {
    return baseFee;
}

void Vehicle::setBaseFee(double baseFee) {
    this->baseFee = baseFee;
}
