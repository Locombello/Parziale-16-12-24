//
// Created by loco on 12/16/24.
//

#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include <utility>

#include "Vehicle.h"


class Motorcycle : public Vehicle {
public:
    Motorcycle(const std::string &plate, int seats, double fee);

    void print() override;

    double calculateFee() override;
};


#endif //MOTORCYCLE_H
