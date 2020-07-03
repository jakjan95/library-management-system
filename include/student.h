#pragma once
#include "user.h"

class Student : public User {
public:
    Student(size_t id, std::string name, std::string password, size_t indexNumber, std::string faculty)
        : User(id, name, password), indexNumber_{indexNumber}, faculty_{faculty} {}
    ~Student() = default;

    size_t getId() const { return id_; }
    std::string getName() const { return name_; }
    std::string getPassword() const { return password_; }
    size_t getIndexNumber() const { return indexNumber_; }
    std::string getFaculty() const { return faculty_; }

private:
    size_t indexNumber_;
    std::string faculty_;
};