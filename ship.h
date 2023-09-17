#ifndef SHIP_H
#define SHIP_H

#include <string> 
#include "Momento.h"

class ship
{
    private:
    public:
        int shipId;
        std::string shipName;
        ship();
        ship(const ship& s);
        ship(std::string sN, int sI);
        int getShipId();
        std::string getShipName();
        void setShipId(int sI);
        void setShipName(std::string sN);
        virtual void insert(std::string item);
        virtual void remove(std::string item);
        //virtual Momento save(int s)=0;
        //virtual void restore(Momento restorePoint);

        virtual std::string toString() =0;
        virtual ~ship();
    protected:
        virtual ship* clone() =0;
};

#endif