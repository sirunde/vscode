#include "Book.h"

#ifndef BOOKSTORE_H
#define BOOKSTORE_H
class BookStore
{
private:
    /* data */

    Book * inventory{nullptr};
    static unsigned int bookCount;

public:
    BookStore(/* args */);

    int* getinventory();
    void setinventory(int sinven);

    static unsigned int getbookCount();

    void addBook(Book& book);

    void sellBook(std::string Isbn);

    void searchByTitle(std::string title);

    void searchByISBN(std::string Isbn);

    void searchByAuthor(std::string Author);

    std::string toString() const;
};


#endif