//
// Created by loco on 12/17/24.
//

#include "Device.h"

Device::Device(const std::string& ID, const std::string& name, const Position &position) : ID(ID), name(name), position(position) {
}

std::string Device::getID() const {
    return ID;
}

std::string Device::getName() const {
    return name;
}

Position Device::getPosition() const {
    return position;
}

void Device::serID(std::string &ID) {
    this->ID = ID;
}

void Device::setName(std::string name) {
    this->name = name;
}

void Device::setPosition(const Position &other) {
    position.modify(other);
    notifyObservers();
}

void Device::registerObserver(Observer *observer) {
    observers.push_back(observer);
}

void Device::unregisterObserver(Observer *observer) {
    observers.remove(observer);
}

void Device::notifyObservers() const {
    for (const auto &observer : observers) {
        observer->update(position, name);
    }
}