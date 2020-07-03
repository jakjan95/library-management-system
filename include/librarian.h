#pragma once
#include <user.h>

class Librarian : public User {
public:
    Librarian(size_t id, std::string name, std::string password, size_t employeeNumber)
        : User(id, name, password), employeeNumber_{employeeNumber} {}
    ~Librarian() = default;
    
    size_t getId() const { return id_; }
    std::string getName() const { return name_; }
    std::string getPassword() const { return password_; }
    size_t getEmployeeNumber() const { return employeeNumber_; }

    virtual void setPassword() = 0;

    void AddBook();
    void AddUser();
    void BlockUser();

private:
    size_t employeeNumber_;
};