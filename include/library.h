#pragma once
#include <vector>

#include "book.h"
#include "librarian.h"
#include "student.h"

class Library {
    std::vector<Book> getBooks();
    std::vector<Student> getStudents();

    void addStudent();
    void addBook();
    void addLibrarian();

private:
    std::vector<Book> books_;
    std::vector<Student> students_;
    std::vector<Librarian> library_;
};