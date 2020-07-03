#pragma once
#include <string>

class User {
public:
    User(size_t id, std::string name, std::string password)
        : id_{id}, name_{name}, password_{password} {}
    virtual ~User() = default;

    virtual size_t getId() const = 0;
    virtual std::string getName() const = 0;
    virtual std::string getPassword() const = 0;

    void setPassword(const std::string& newPassword) {
        password_ = newPassword;
    }

protected:
    size_t id_;
    std::string name_;
    std::string password_;
};
