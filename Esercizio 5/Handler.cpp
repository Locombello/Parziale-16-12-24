//
// Created by loco on 12/17/24.
//

#include "Handler.h"

#include <iostream>
#include <ostream>

void Handler::addCredentials(const std::string &URL, const Credentials &c) {
    credentials.insert({URL, c});
}

void Handler::removeCredentials(const std::string &URL) {
    credentials.erase(URL);
}

std::map<std::string, Credentials>::iterator Handler::findCredentials(const std::string &URL) {
    return credentials.find(URL);
}

void Handler::modifyPassword(const std::string &URL, const std::string &oldPassword, const std::string &newPassword) {
    auto it = findCredentials(URL);

    if (it != credentials.end()) {
        if (it->second.getPassword() != oldPassword) {
            std::cout << "Password errata!" << std::endl;
            return;
        }
        std::string newDate = "17/12/24";
        if (oldPassword != newDate) {
            it->second.setPassword(newPassword);
            it->second.setDate(newDate);
        }
    }
}

void Handler::printCredentials() const {
    for (auto & credential : credentials) {
        std::cout << credential.first << ":" << std::endl;
        std::cout << credential.second.getUsername() << std::endl;
        std::cout << credential.second.getPassword() << std::endl;
        std::cout << credential.second.getDate() << "\n" << std::endl;
    }
}

void Handler::printFoundCredentials(std::map<std::string, Credentials>::iterator it) const {
    if (it != credentials.end()) {
        std::cout << it->first << ":" << std::endl;
        std::cout << it->second.getUsername() << std::endl;
        std::cout << it->second.getPassword() << std::endl;
        std::cout << it->second.getDate() << "\n" << std::endl;
    } else {
        std::cout << "No credentials found!" << std::endl;
    }

}

