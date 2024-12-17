//
// Created by loco on 12/17/24.
//

#ifndef TABLET_H
#define TABLET_H
#include <string>

#include "Device.h"
#include "Observer.h"
#include "Position.h"


class Tablet : public Device {
public:
    Tablet(const std::string &ID, const std::string &name, const Position &position);
};



#endif //TABLET_H
