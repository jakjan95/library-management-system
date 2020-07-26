#include "gtest/gtest.h"
#include "book.h"

struct BookTest:public ::testing::Test{
    Book testBook{"Title", "111-11-111-1111-1", "Author", Book::Field::dataScience, true};

};

TEST_F(BookTest, RentingABookShouldChangeAvailabilityStatusToFalse){
    testBook.borrowBook();
    ASSERT_FALSE(testBook.getAvailable());
}

TEST_F(BookTest, ReturningARentedBookBookShouldChangeAvailabilityStatusToTrue){
    testBook.borrowBook();
    testBook.returnBook();
    ASSERT_TRUE(testBook.getAvailable());
}
