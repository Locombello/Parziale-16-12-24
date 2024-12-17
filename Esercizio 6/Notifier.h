//
// Created by loco on 12/17/24.
//

#ifndef NOTIFIER_H
#define NOTIFIER_H
#include "Observer.h"


class Notifier : public Observer {
public:
    void update(const Position& position, const std::string& name) const override;
};



#endif //NOTIFIER_H
