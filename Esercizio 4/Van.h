//
// Created by loco on 12/16/24.
//

#ifndef VAN_H
#define VAN_H
#include "Vehicle.h"


class Van : public Vehicle {
private:
    double capacity;
    double m3Fee;

public:
    Van(const std::string &plate, int seats, double baseFee, double capacity, double m3Fee);

    double getCapacity() const;

    void setCapacity(double capacity);

    double getM3Fee() const;

    void setM3Fee(double m3Fee);

    void print() override;

    double calculateFee() override;
};


#endif //VAN_H
