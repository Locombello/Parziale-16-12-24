//
// Created by loco on 12/17/24.
//

#include "Laptop.h"

Laptop::Laptop(const std::string &ID, const std::string &name, const Position &position) : Device(ID, name, position) {
}

void Laptop::setPosition(const Position &other) {
    position.modify(other);
    notifyObservers();
}

void Laptop::registerObserver(Observer *observer) {
    observers.push_back(observer);
}

void Laptop::unregisterObserver(Observer *observer) {
    observers.remove(observer);
}

void Laptop::notifyObservers() const {
    for (const auto &observer : observers) {
        observer->update(position, name);
    }
}