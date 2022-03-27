//
//  Book.cpp
//  BookStore
//
//  Created by esma yildirim on 2/20/22.
//

#include <iostream>
#include "Book.h"
#include <sstream>
#include <iomanip>
#include <stdexcept>

Book::Book(){}

Book::Book(std::string theIsbn, std::string theAuthor,
           std::string theTitle, std::string theYear, std::string thePublisher,
           int theCount, double thePrice): isbn{theIsbn}, author{theAuthor},
           title{theTitle}, year{theYear}, publisher{thePublisher}
{
    if(count < 0) count = 0;
    else count = theCount;
    
    if(price < 0) price = 0;
    else price = thePrice;
}

void Book::setIsbn(std::string theIsbn){isbn = theIsbn;}
void Book::setAuthor(std::string theAuthor) { author = theAuthor;}
void Book::setTitle(std::string theTitle) {title = theTitle;}
void Book::setYear(std::string theYear){ year = theYear;}
void Book::setPublisher(std::string thePublisher){ publisher = thePublisher;}
void Book::setCount(int theCount){
    if(theCount<=0) throw std::invalid_argument("Count should be greater than zero.");
    else count = theCount;
}
void Book::setPrice(double thePrice){
    if(thePrice <= 0) throw std::invalid_argument("Price should be greater than zero.");
    else price = thePrice;
}
//getters
std::string Book::getIsbn() const{ return isbn;}
std::string Book::getAuthor() const { return author;}
std::string Book::getTitle() const { return title;}
std::string Book::getYear() const { return year;}
std::string Book::getPublisher() const { return publisher;}
int Book::getCount() const { return count;}
double Book::getPrice() const { return price;}
//other member functions
std::string Book::toString() const
{
    std::ostringstream ostream;
    ostream << getAuthor()<< ". (" << getYear() <<"). " << getTitle() << ". "
    << getPublisher() << ". $" << std::setprecision(2) << getPrice() << ". "
    << "Count: " << getCount() << ". ISBN: " << getIsbn() << ".";
    return ostream.str();
}


