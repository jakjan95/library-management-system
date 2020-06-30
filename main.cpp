#include <iostream>

#include "book.h"

int main() {
    std::cout << "test\n";
    Book test{"Title", "111-11-111-1111-1", "Author", "Publisher", 2020, 1, 159, Book::Field::dataScience, true};
    std::cout << test << '\n';

    return 0;
}