//
// Created by loco on 12/17/24.
//

#ifndef LAPTOP_H
#define LAPTOP_H
#include "Device.h"


class Laptop : public Device {
public:
    Laptop(const std::string &ID, const std::string &name, const Position &position);

    void setPosition(const Position &position) override;


    void registerObserver(Observer *observer) override;

    void unregisterObserver(Observer *observer) override;

    void notifyObservers() const override;
};



#endif //LAPTOP_H
