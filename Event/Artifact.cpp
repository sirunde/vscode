#include "Artifact.h"
#include <string>
#include <sstream>

Artifact::Artifact(std::string name, std::string origin, std::string era)
{
    this->name = name;
    this->origin = origin;
    this->era = era;
}
Artifact::Artifact(){}
Artifact::~Artifact(){}
void Artifact::setName(std::string name){ this->name = name;}
std::string Artifact::getName()const{ return name;}
void Artifact::setOrigin(std::string origin){ this->origin = origin;}
std::string Artifact::getOrigin()const{ return origin;}
void Artifact::setEra(std::string era){ this->era = era;}
std::string Artifact::getEra()const{ return era;}
std::string Artifact::toString()const{
    std::ostringstream output;
    output << "\nArtifact name: " << getName() << "\nOrigin: " << getOrigin() << "\nEra: " << getEra();
    return output.str();
}