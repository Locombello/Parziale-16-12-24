//
// Created by loco on 12/17/24.
//

#ifndef GPS_H
#define GPS_H
#include "Observer.h"


class GPS : public Observer {
public:
    void update(const Position& position, const std::string& name) const override;

private:
    void draw() const;
};



#endif //GPS_H
