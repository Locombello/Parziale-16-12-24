//
// Created by loco on 12/16/24.
//

#include "Rental.h"

#include <iostream>

Rental::Rental(const std::string& data) : date(data) {
}

const std::string & Rental::get_date() const {
    return date;
}

void Rental::set_date(const std::string &date) {
    this->date = date;
}

void Rental::addVehicle(std::unique_ptr<Vehicle> vehicle) {
    vehicles.push_back(std::move(vehicle));
}

void Rental::removeVehicle(int index) {
    vehicles.erase(vehicles.begin() + index);
}

double Rental::calculateTotalAmount() const {
    double totalAmount = 0;
    for (const auto& v : vehicles) {
        totalAmount += v->calculateFee();
    }
    return totalAmount;
}

void Rental::print() const {
    std::cout << "Rental in date " << date << "\n" << std::endl;
    for (const auto& v : vehicles) {
        v->print();
        std::cout << std::endl;
    }
    std::cout << "\nTotal Amount: " << calculateTotalAmount() << std::endl;
}
