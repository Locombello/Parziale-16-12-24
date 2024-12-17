//
// Created by loco on 12/17/24.
//

#ifndef DEVICE_H
#define DEVICE_H

#include "Observer.h"
#include "Position.h"

#include <list>
#include <string>


class Device {
protected:
    std::list<Observer *> observers;
    std::string ID;
    std::string name;
    Position position;

public:
    Device(const std::string &ID, const std::string &name, const Position &position);

    virtual ~Device() = default;

    std::string getID() const;

    std::string getName() const;

    Position getPosition() const;

    void serID(std::string &ID);

    void setName(std::string name);

    virtual void setPosition(const Position &position);


    virtual void registerObserver(Observer *observer);

    virtual void unregisterObserver(Observer *observer);

    virtual void notifyObservers() const;
};


#endif //DEVICE_H
