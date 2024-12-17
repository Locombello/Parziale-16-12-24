//
// Created by loco on 12/17/24.
//

#ifndef HANDLER_H
#define HANDLER_H
#include <map>

#include "Credentials.h"


class Handler {
private:
    std::map<std::string, Credentials> credentials;

public:
    void addCredentials(const std::string &URL, const Credentials& c);

    void removeCredentials(const std::string &URL);

    std::map<std::string, Credentials>::iterator findCredentials(const std::string &URL);

    void modifyPassword(const std::string &URL, const std::string &oldPassword, const std::string &newPassword);

    void printCredentials() const;

    void printFoundCredentials(std::map<std::string, Credentials>::iterator it) const;
};


#endif //HANDLER_H
