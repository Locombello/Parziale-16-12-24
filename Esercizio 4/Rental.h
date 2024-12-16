//
// Created by loco on 12/16/24.
//

#ifndef RENTAL_H
#define RENTAL_H
#include <memory>
#include <string>
#include <vector>

#include "Vehicle.h"


class Rental {
private:
    std::string date;
    std::vector<std::unique_ptr<Vehicle> > vehicles;

public:
    Rental(const std::string &data);

    const std::string& get_date() const;

    void set_date(const std::string &date);

    void addVehicle(std::unique_ptr<Vehicle> vehicle);

    void removeVehicle(int index);

    double calculateTotalAmount() const;

    void print() const;
};


#endif //RENTAL_H
