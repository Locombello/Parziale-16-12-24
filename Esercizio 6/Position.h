//
// Created by loco on 12/17/24.
//

#ifndef POSITION_H
#define POSITION_H


class Position {
private:
    double latitude;
    double longitude;

public:
    Position(double latitude, double longitude);

    double getLatitude() const;

    double getLongitude() const;

    void setLatitude(double latitude);

    void setLongitude(double longitude);

    void modify(const Position &other);
};


#endif //POSITION_H
