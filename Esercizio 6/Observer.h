//
// Created by loco on 12/17/24.
//

#ifndef OBSERVER_H
#define OBSERVER_H
#include <string>

#include "Position.h"



class Observer {
public:
    virtual ~Observer() = default;

    virtual void update(const Position& position, const std::string& name) const = 0;
};



#endif //OBSERVER_H
