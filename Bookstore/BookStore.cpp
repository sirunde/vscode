#include "BookStore.h"
#include "Book.h"
#include <iostream>
#include <sstream>

unsigned int BookStore::bookCount{0};

BookStore::BookStore(){
    BookStore::setinventory(200);
}

void BookStore::setinventory(int sinven){
    inventory = new Book[sinven];
}

void BookStore::addBook(Book& book){
    for (int i = 0; i< bookCount; i++){
        if (inventory[i].getIsbn() == book.getIsbn()){
            //if Isbn is matched from book obj, add count
            inventory[i].setCount(inventory[i].getCount() + book.getCount());
            return;
        }
    }
    inventory[bookCount] = book;
    bookCount++;
}

void BookStore::sellBook(std::string Isbn){
    for (int i = 0; i < bookCount; i++){
        if (inventory[i].getIsbn() == Isbn){
            // If Isbn is matched, decrease book Count
            if (inventory[i].getCount() > 0){
            inventory[i].setCount(inventory[i].getCount() - 1);

            std::cout << "deleted" << std::endl;
            }
            else{
                std::cout << "no stock" << std::endl;
                throw inventory[i].getCount();
                }
        }
        else{
            std::cout << "no isbn" << std::endl;
            throw inventory[i].getCount();
            }
    }

}

void BookStore::searchByTitle(std::string title){
        for (int i=0;i < bookCount; i++){
            if (inventory[i].getTitle().find(title) !=std::string::npos){

            }
            else{

            }
        }
}

void BookStore::searchByISBN(std::string Isbn){
        for (int i=0;i < bookCount; i++){
            if (inventory[i].getIsbn().find(Isbn) !=std::string::npos){

            }
            else{

            }
        }
}

void BookStore::searchByAuthor(std::string Author){
        for (int i=0;i < bookCount; i++){
            if (inventory[i].getAuthor().find(Author) !=std::string::npos){

            }
            else{
                
            }
        }
}

std::string BookStore::toString() const
{
    std::ostringstream ostream;
    ostream << inventory[0].getTitle();
    return ostream.str();
}
