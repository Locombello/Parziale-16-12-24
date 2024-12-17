//
// Created by loco on 12/17/24.
//

#include "Credentials.h"

Credentials::Credentials(const std::string &username, const std::string &password,
                         const std::string &date) : username(username), password(password), date(date) {
}

std::string Credentials::getUsername() const {
    return username;
}

std::string Credentials::getPassword() const {
    return password;
}

std::string Credentials::getDate() const {
    return date;
}

void Credentials::setUsername(const std::string &username) {
    this->username = username;
}

void Credentials::setPassword(const std::string &password) {
    this->password = password;
}

void Credentials::setDate(const std::string &date) {
    this->date = date;
}
