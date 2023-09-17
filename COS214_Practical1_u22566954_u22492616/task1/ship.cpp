#include "ship.h"

using namespace std;

ship::ship()
{
    this->shipName = "";
    this->shipId = 0;
}

ship::ship(const ship& s){
    shipName = s.shipName;
    shipId = s.shipId;
}

ship::ship(string sN, int sId): shipName(sN), shipId(sId){

}

void ship::setShipName(string sN)
{
    this->shipName = sN;
}

void ship::insert(string item)
{
    
}

void ship::remove(string item){
    
}

void ship::setShipId(int sI){
    this->shipId = sI;
}

ship::~ship()
{

}

int ship::getShipId(){
    return shipId;
}

string ship::getShipName(){
    return shipName;
}

// ship* ship::clone(){
//     return new ship(this->shipName, this->shipId);
// }

