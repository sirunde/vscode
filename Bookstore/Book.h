//
//  Book.h
//  BookStore
//
//  Created by esma yildirim on 2/20/22.
//

#ifndef Book_h
#define Book_h

#include <string>

class Book{
public:
    //constructors
    Book();
    Book(std::string, std::string, std::string, std::string, std::string, int, double);

    //setters
    void setIsbn(std::string);
    void setAuthor(std::string);
    void setTitle(std::string);
    void setYear(std::string);
    void setPublisher(std::string);
    void setCount(int);
    void setPrice(double);
    //getters
    std::string getIsbn() const;
    std::string getAuthor() const;
    std::string getTitle() const;
    std::string getYear() const;
    std::string getPublisher() const;
    int getCount() const;
    double getPrice() const;
    //other member functions
    std::string toString() const;
    
private:
    std::string isbn;
    std::string author;
    std::string title;
    std::string year;
    std::string publisher;
    double price{0.0};
    int count{0};
};

#endif /* Book_h */