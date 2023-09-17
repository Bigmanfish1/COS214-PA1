#ifndef MILITARY_H
#define MILITARY_H

#include "ship.h"
#include "militaryMomento.h"
#include <string>
#include <iostream>
#include <sstream>

class militaryShip: public ship
{
private:
    std::string* items;
    int capacity;
    int currentLoad;
public:
    militaryShip();
    militaryShip(const militaryShip& mS);
    militaryShip(std::string sN, int sId, int c, int cL, std::string* iT);
    militaryMomento save(int saveId);
    void restore(militaryMomento restorePoint);
    void insert(std::string item);
    void remove(std::string item);
    virtual ship* clone();
    std::string toString();
    ~militaryShip();
};



#endif