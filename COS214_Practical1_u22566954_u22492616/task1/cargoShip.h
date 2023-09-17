#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include "ship.h"
#include "cargoMomento.h" 
#include <sstream>

class cargoShip : public ship
{
    private:

    public:
        int capacity;
        std::string* items;
        int currentLoad;
        cargoShip();
        cargoShip(const cargoShip& cS);
        cargoShip(int c, std::string* i, int cL, int sI, std::string sN);
        std::string toString();
        cargoMomento save(int saveId);
        void restore(cargoMomento);
        void insert(std::string item);
        void remove(std::string item);
        virtual ship* clone();
        int getCapacity();
        std::string* getItems();
        int getCurrentLoad();
        void setCapacity(int c);
        void setItems(std::string* i);
        void setCurrentLoad(int cL);
        ~cargoShip();
};



#endif