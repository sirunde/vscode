#include "Event.h"
#include <iostream>
#include <sstream>
#include <string>
//constructor
Event::Event(std::string sDate, std::string eDate, std::string loc)
{
    startDate = sDate;
    endDate = eDate;
    location = loc;
    
}
//empty destructor
Event::~Event(){
    
}

void Event::setStartDate(std::string sDate){
    startDate = sDate;
}
std::string Event::getStartDate()const
{
    return startDate;
}
void Event::setEndDate(std::string eDate)
{
    endDate = eDate;
}
std::string Event::getEndDate()const
{
    return endDate;
}
void Event::setLocation(std::string loc){
    location = loc;
}
std::string Event::getLocation()const
{
    return location;
}
std::string Event::toString()const{
    std::ostringstream output;
    
    output << "\nStart date: " << getStartDate() << "\nEnd Date: " << getEndDate() 
           << "\nLocation: " << getLocation();
    return output.str();
}