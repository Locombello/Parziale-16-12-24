//
// Created by loco on 12/17/24.
//

#ifndef APP_H
#define APP_H

#include <vector>

#include "Device.h"


class App {
private:
    std::vector<Device> devices;

public:
    void addDevice(const Device& device);

    void updatePosition(int index, const Position &position);
};



#endif //APP_H
