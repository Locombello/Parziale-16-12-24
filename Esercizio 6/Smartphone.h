//
// Created by loco on 12/17/24.
//

#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include "Device.h"


class Smartphone : public Device {
public:
    Smartphone(const std::string &ID, const std::string &name, const Position &position);
};



#endif //SMARTPHONE_H
