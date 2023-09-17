#ifndef MILITARYMOMENTO_H
#define MILITARYMOMENTO_H

#include <string>
#include "Momento.h"

class militaryMomento: public Momento 
{
private:
    std::string shipName;
    std::string* items;
    int currentLoad;
    int capacity;
public:
    int shipId;
    int version;
    militaryMomento();
    militaryMomento(std::string sN, int sId, int c, int cL, std::string* items);
    std::string getShipName();
    int getShipId();
    std::string* getItems();
    int getCurrentLoad();
    int getCapacity();
    militaryMomento* restore();
    ~militaryMomento();
};


#endif