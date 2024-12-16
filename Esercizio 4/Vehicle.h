//
// Created by loco on 12/16/24.
//

#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>


class Vehicle {
protected:
    std::string plate;
    int seats;
    double baseFee;

public:
    Vehicle(const std::string &plate, int seats, double baseFee);

    std::string getPlate() const;

    void setPlate(const std::string &plate);

    int getSeats() const;

    void setSeats(int seats);

    double getBaseFee() const;

    void setBaseFee(double baseFee);

    virtual ~Vehicle() = 0;

    virtual void print() = 0;

    virtual double calculateFee() = 0;
};


#endif //VEHICLE_H
