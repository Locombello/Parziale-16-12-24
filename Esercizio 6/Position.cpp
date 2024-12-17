//
// Created by loco on 12/17/24.
//

#include "Position.h"

Position::Position(double latitude, double longitude) : latitude(latitude), longitude(longitude) {
}

double Position::getLatitude() const {
    return latitude;
}

double Position::getLongitude() const {
    return longitude;
}

void Position::setLatitude(double latitude) {
    this->latitude = latitude;
}

void Position::setLongitude(double longitude) {
    this->longitude = longitude;
}

void Position::modify(const Position &other) {
    latitude = other.latitude;
    longitude = other.longitude;
}
