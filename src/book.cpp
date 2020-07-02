#include "book.h"

#include <iomanip>
#include <iostream>
#include <map>

Book::Book(std::string title,
           std::string isbn,
           std::string author,
           std::string publisher,
           size_t publishedYear,
           size_t edition,
           size_t pagesNumbers,
           Field field,
           bool available)
    : title_{title},
      isbn_{isbn},
      author_{author},
      publisher_{publisher},
      publishedYear_{publishedYear},
      edition_{edition},
      pagesNumbers_{pagesNumbers},
      field_{field},
      available_{available} {}


    void Book::setAvailableStatus() {
        if (getAvailable()) {
            std::cout<<"Renting a book\n";
            available_ = false;
        } else {
            std::cout<<"Returning a book\n";
            available_ = true;
        }
    }



std::ostream& operator<<(std::ostream& os, const Book& b) {
    //|Title | ISBN | Author | Publisher | Published Year | Edition | Page Numbers | Field | Available |
    os << '|' << b.getTitle() << std::setw(14) << '|'
       << b.getIsbn() << std::setw(14) << '|'
       << b.getAuthor() << std::setw(14) << '|'
       << b.getPublisher() << std::setw(14) << '|'
       << b.getPublishedYear() << std::setw(6) << '|'
       << b.getEdition() << std::setw(2) << '|'
       << b.getPageNumbers() << std::setw(4) << '|'
       << getFieldName(b.getField()) << std::setw(4) << '|'
       << std::boolalpha << b.getAvailable() << std::setw(4) << '|';
    return os;
}

std::string getFieldName(const Book::Field& field) {
    std::map<Book::Field, std::string> fieldNames{
        {Book::Field::laboratoryManual, "laboratoryManual"},
        {Book::Field::coursebook, "coursebook"},
        {Book::Field::examsbook, "examsbook"},
        {Book::Field::computerScience, "computerScience"},
        {Book::Field::algorithms, "algorithms"},
        {Book::Field::dataScience, "dataScience"},
        {Book::Field::programming, "programming"}};

    return fieldNames[field];
}