#include "BookStore.h"
#include "Book.h"
#include <iostream>
#include <sstream>
#include <stdexcept>

// set bookCount as 0
unsigned int BookStore::bookCount{0};

// set inventory as 200
BookStore::BookStore(){
    BookStore::setinventory(200);
}

// create inventory
void BookStore::setinventory(int sinven){
    inventory = new Book[sinven];
}

// If Isbn is matched, add count, else allocate on bookCount
void BookStore::addBook(Book& book){
    for (int i = 0; i< bookCount; i++){

        if (inventory[i].getIsbn() == book.getIsbn()){
            inventory[i].setCount(inventory[i].getCount() + book.getCount()); //if Isbn is matched from book obj, add count
            return;
        }
    }

    inventory[bookCount] = book;
    bookCount++;

}

// if Isbn is matched, decrease book Count by 1
void BookStore::sellBook(std::string Isbn){

    int tes = 0; // for not printing "No result found"

    for (int i = 0; i <= bookCount; i++){
        
        if (inventory[i].getIsbn() == Isbn){
            // If Isbn is matched, decrease book Count

            tes = 1;

            if (inventory[i].getCount() > 0){
            inventory[i].setCount(inventory[i].getCount() - 1);
            }

            else{
                // if Count is less than 0, print error
                tes = 1;
                throw std::invalid_argument("Out of stock");
            }
        }

        else{
            if (tes != 1 && i == bookCount){
                // if no book in here, print error
                throw std::invalid_argument("No result found");
            }
        }
    }

}

void BookStore::searchByTitle(std::string title){

    int tes = 0; // To not printing "No result found"

        for (int i=0;i <= bookCount; i++){

            // if
            if (inventory[i].getTitle().find(title) !=std::string::npos){
                tes = 1;
                std::cout<< std::fixed << "[" << i << "] " <<inventory[i].toString() << std::endl;
            }

            else{
                if (tes != 1 && i == bookCount){
                    throw std::invalid_argument("No result found");
                }
            
            }
        }
}

void BookStore::searchByISBN(std::string Isbn){

    int tes = 0; // To not printing "No result found"

        for (int i=0;i <= bookCount; i++){

            if (inventory[i].getIsbn().find(Isbn) !=std::string::npos){

                tes = 1;

                std::cout<< std::fixed << "[" << i << "] " <<inventory[i].toString() << std::endl;

            }
            else{
                if (tes != 1 && i == bookCount){
                    throw std::invalid_argument("No result found");
                }
            }
        }
}

void BookStore::searchByAuthor(std::string Author){

    int tes = 0; // To not printing "No result found"

        for (int i=0;i <= bookCount; i++){
            if (inventory[i].getAuthor().find(Author) !=std::string::npos){

                tes = 1;
                
                std::cout<< std::fixed <<"[" << i << "] " <<inventory[i].toString() << std::endl;

            }
            else{
                if (tes != 1 && i == bookCount){
                    throw std::invalid_argument("No result found");
                }
            }
        }
}
