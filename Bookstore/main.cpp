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
    while(choice <= 6){
        std::cout << "Enter choice:" << std::endl;
        std::cout << "1 to add book" << std::endl;
        std::cout << "2 to sell book" << std::endl;
        std::cout << "3 to search by Title" << std::endl;
        std::cout << "4 to search by author" << std::endl;
        std::cout << "5 to search by isbn" << std::endl;
        std::cout << "6 to quit ?";
        std::cin >> choice;
        std::getline(std::cin, input);

        if (choice == 1){
            Book book;
            std::cout<< "Enter book title: ";
            std::getline(std::cin, input);
            (book).setTitle(input);

            std::cout << "Enter author: ";
            std::getline(std::cin, input);
            (book).setAuthor(input);

            std::cout << "Enter isbn: ";
            std::cin >>  input;
            (book).setIsbn(input);

            std::getline(std::cin, input);
            std::cout << "Enter publisher: ";
            std::getline(std::cin, input);
            (book).setPublisher(input);

            std::cout << "Enter year: ";
            std::cin >>  input;
            (book).setYear(input);

            std::cout << "Enter count: ";
            std::cin >>  count;
            (book).setCount(count);

            std::cout << "Enter price: ";
            std::cin >>  price;
            (book).setPrice(price);

            bookstore.addBook(book);

            std::cout << bookstore.toString();

        }

        else if (choice == 2){
            std::cout << "Enter isbn: ";
            std::cin >>  input;

            try
            {
                bookstore.sellBook(input);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
            

        }

        else if (choice == 3){
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
            std::cout << "Enter Author: ";
            std::cin >>  input;
            bookstore.searchByAuthor(input);
        }

        else if (choice == 5){
            std::cout << "Enter isbn: ";
            std::cin >>  input;
            bookstore.searchByISBN(input);
        }

        else{
        }


    }

    return 0;
}