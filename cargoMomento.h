#ifndef CARGOMOMENTO_H
#define CARGOMOMENTO_H

#include <string>
#include <iostream>
#include "Momento.h"

class cargoMomento: public Momento
{
private:
    std::string shipName;
    std::string* items;
    int currentLoad;
    int capacity;
public:
    int shipId;
    int version;
    cargoMomento();
    cargoMomento(std::string sN, int sI, int c, int cL, std::string* i);
    std::string getShipName();
    int getShipId();
    std::string* getItems();
    int getCurrentLoad();
    int getCapacity();
    int getVersion();
    cargoMomento* restore();
    // void setShipName(std::string sN);
    // void setShipId(int sI);
    // void setItems(std::string* i);
    // void setCurrentLoad(int cL);
    // void setCapacity(int c);
    // void setVersion(int v);
    virtual ~cargoMomento();
};



#endif