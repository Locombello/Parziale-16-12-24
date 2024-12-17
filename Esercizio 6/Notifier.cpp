//
// Created by loco on 12/17/24.
//

#include "Notifier.h"

#include <iostream>

void Notifier::update(const Position& position, const std::string& name) const {
    std::cout << name << " ha cambiato posizione!" << std::endl;
}
