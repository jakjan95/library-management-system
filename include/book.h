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
         std::string publisher,
         size_t publishedYear,
         size_t edition,
         size_t pagesNumbers,
         Field field,
         bool available);

    ~Book() = default;

    std::string getTitle() const { return title_; }
    std::string getIsbn() const { return isbn_; }
    std::string getAuthor() const { return author_; }
    std::string getPublisher() const { return publisher_; }
    size_t getPublishedYear() const { return publishedYear_; }
    size_t getEdition() const { return edition_; }
    size_t getPageNumbers() const { return pagesNumbers_; }
    Field getField() const { return field_; }
    bool getAvailable() const { return available_; }

    void setAvailableStatus();

private:
    std::string title_;
    std::string isbn_;
    std::string author_;
    std::string publisher_;
    size_t publishedYear_;
    size_t edition_;
    size_t pagesNumbers_;
    Field field_;
    bool available_;
};

std::ostream& operator<<(std::ostream& os, const Book& b);

std::string getFieldName(const Book::Field& field);