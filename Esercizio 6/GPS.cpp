//
// Created by loco on 12/17/24.
//

#include "GPS.h"

#include <iostream>

void GPS::update(const Position& position, const std::string& name) const {
    std::cout << "*Device Position*" << std::endl;
    std::cout << position.getLatitude() << " " << position.getLongitude() << std::endl;
    draw();
}

void GPS::draw() const {
    std::cout << "*Drawing Map*" << std::endl;
}
