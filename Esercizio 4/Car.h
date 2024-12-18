//
// Created by loco on 12/16/24.
//

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"


class Car : public Vehicle {
private:
    double seatFee;

public:
    Car(const std::string &plate, int seats, double baseFee, double seatFee);

    double getSeatFee() const;

    void setSeatFee(double seatFee);

    void print() const override;

    double calculateFee() const override;
};


#endif //CAR_H
