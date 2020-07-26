#pragma once

#include <string>

class Book {
public:
    enum Field {
        laboratoryManual,
        coursebook,
        examsbook,
        computerScience,
        algorithms,
        dataScience,
        programming,
    };

    Book(std::string title,
         std::string isbn,
         std::string author,
         Field field,
         bool available);

    ~Book() = default;

    std::string getTitle() const { return title_; }
    std::string getIsbn() const { return isbn_; }
    std::string getAuthor() const { return author_; }
    Field getField() const { return field_; }
    bool getAvailable() const { return available_; }

    void borrowBook();
    void returnBook();

private:
    std::string title_;
    std::string isbn_;
    std::string author_;
    Field field_;
    bool available_;
};

std::ostream& operator<<(std::ostream& os, const Book& b);

std::string getFieldName(const Book::Field& field);
