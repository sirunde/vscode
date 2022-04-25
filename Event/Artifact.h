#ifndef ARTIFACT_H
#define ARTIFACT_H
#include <string>
class Artifact{
public:
    Artifact(std::string, std::string, std::string);
    Artifact();
    ~Artifact();
    void setName(std::string);
    std::string getName()const;
    void setOrigin(std::string);
    std::string getOrigin()const;
    void setEra(std::string);
    std::string getEra()const;
    std::string toString()const;
private:
    std::string name;
    std::string origin;
    std::string era;
};
#endif