#include <iostream>
#include "Book.h"
#include "BookStore.h"

int main(){
    int choice = 0;
    std::string input;
    int count;
    double price;

    BookStore bookstore;

    std::cout << "book" << std::endl;

    while(choice < 6){
        std::cout << "Enter choice:" << std::endl;
        std::cout << "1 to add book" << std::endl;
        std::cout << "2 to sell book" << std::endl;
        std::cout << "3 to search by Title" << std::endl;
        std::cout << "4 to search by author" << std::endl;
        std::cout << "5 to search by isbn" << std::endl;
        std::cout << "6 to quit ?";
        std::cin >> choice;
        std::getline(std::cin, input); // To deal with \n from cin

        if (choice == 1){
            // add book
            Book * book = new Book;
            std::cout<< "Enter book title: ";
            std::getline(std::cin, input);
            (*book).setTitle(input);

            std::cout << "Enter author: ";
            std::getline(std::cin, input);
            (*book).setAuthor(input);

            std::cout << "Enter isbn: ";
            std::cin >>  input;
            (*book).setIsbn(input);

            std::getline(std::cin, input);
            std::cout << "Enter publisher: ";
            std::getline(std::cin, input);
            (*book).setPublisher(input);

            std::cout << "Enter year: ";
            std::cin >>  input;
            (*book).setYear(input);

            std::cout << "Enter count: ";
            std::cin >>  count;
            (*book).setCount(count);

            std::cout << "Enter price: ";
            std::cin >>  price;
            (*book).setPrice(price);

            bookstore.addBook(*book);

            delete book;

        }

        else if (choice == 2){
            // sell Book
            std::cout << "Enter isbn: ";
            std::cin >>  input;

            try
            {
                bookstore.sellBook(input);
            }
            catch(const std::exception& e)
            {
                std::cout << e.what() << '\n';
            }
            
            

        }

        else if (choice == 3){
            // search by Title
            std::cout << "Enter Title: ";
            std::cin >>  input;
            try
            {
                bookstore.searchByTitle(input);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
            
        }

        else if (choice == 4){
            // Search by Author
            std::cout << "Enter Author: ";
            std::cin >>  input;
            try
            {
                bookstore.searchByAuthor(input);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }

        else if (choice == 5){
            // Search by Isbn
            std::cout << "Enter isbn: ";
            std::cin >>  input;
            try
            {
                bookstore.searchByISBN(input);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }

        else{
            // do nothing if got >=6
        }


    }

    return 0;
}