//
// Created by loco on 12/17/24.
//

#include "Tablet.h"

#include <iostream>
#include <ostream>

Tablet::Tablet(const std::string &ID, const std::string &name, const Position &position) : Device(ID, name, position) {
}
