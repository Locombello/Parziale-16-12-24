//
// Created by loco on 12/17/24.
//

#include "App.h"

#include <iostream>
#include <ostream>
#include <stdexcept>

void App::addDevice(Device* device) {
    devices.push_back(device);
}

void App::updatePosition(int index, const Position &position) {
    if (index >= devices.size()) {
        throw std::out_of_range("index out of range");
    }
    devices[index]->setPosition(position);
}
