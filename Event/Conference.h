#ifndef CONFERENCE_H
#define CONFERENCE_H
#include <string>
#include "Event.h"
#include "Person.h"

class Conference : public Event
{
public:
    Conference(std::string, std::string, std::string, std::string, Person &, Person &, Person *, int);
    virtual ~Conference();
    void setTitle(std::string);
    std::string getTitle()const;
    void setSpeaker(Person &);
    Person getSpeaker()const;
    void setModerator(Person &);
    Person getModerator()const;
    void setPanelists(Person *);
    Person * getPanelists()const;
    virtual std::string toString()const override;
    int getNumPanelists()const;
private:
    std::string title;
    Person speaker;
    Person moderator;
    Person * panelists;
    int numPanelists;
};

#endif