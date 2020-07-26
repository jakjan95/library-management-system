#include <iostream>

#include "book.h"

int main() {
    std::cout << "test\n";
    Book test{"Title", "111-11-111-1111-1", "Author", Book::Field::dataScience, true};
    std::cout << test << '\n';
    test.borrowBook();
    std::cout << test << '\n';
    test.returnBook();
    std::cout << test << '\n';
    return 0;
}
