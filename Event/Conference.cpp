#include "Conference.h"
#include <sstream>
#include <string>
#include <iostream>


Conference::Conference(std::string sDate, std::string eDate, std::string loc, std::string tt,
                       Person & sp, Person & md, Person * plist, int num): Event(sDate, eDate, loc)
{
    title = tt;
    speaker = sp;
    moderator = md;
    panelists = plist;
    numPanelists = num;
    
}
Conference::~Conference(){

}
void Conference::setTitle(std::string tt){
    title = tt;
}
std::string Conference::getTitle()const{
    return title;
}
void Conference::setSpeaker(Person & sp){
    speaker = sp;
}
Person Conference::getSpeaker()const
{
    return speaker;
}
void Conference::setModerator(Person & md)
{
    moderator = md;
}
Person Conference::getModerator()const
{
    return moderator;
}
void Conference::setPanelists(Person * plist)
{
    panelists = plist;
}
Person * Conference::getPanelists()const
{
    return panelists;
}

int Conference::getNumPanelists()const
{
    return numPanelists;
}
std::string Conference::toString()const
{
    std::ostringstream output;
    output << "\nTitle: " << getTitle() << Event::toString() << "\nSpeaker: " << getSpeaker().toString()
           << "\nModerator: " << getModerator().toString() << "\nPanelists: ";
    for(int i = 0; i < getNumPanelists(); i++)
    {
        output << getPanelists()[i].toString();
    }
    return output.str();
}