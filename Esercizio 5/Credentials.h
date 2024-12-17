//
// Created by loco on 12/17/24.
//

#ifndef CREDENTIALS_H
#define CREDENTIALS_H
#include <string>


class Credentials {
private:
    std::string username;
    std::string password;
    std::string date;

public:
    Credentials(const std::string& username, const std::string& password, const std::string& date);

    std::string getUsername() const;

    std::string getPassword() const;

    std::string getDate() const;

    void setUsername(const std::string& username);

    void setPassword(const std::string& password);

    void setDate(const std::string& date);
};


#endif //CREDENTIALS_H
