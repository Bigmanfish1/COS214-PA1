#include "militaryMomento.h"

using namespace std;

militaryMomento::militaryMomento()
{
}

militaryMomento::militaryMomento(string sN, int sId, int c, int cL, string* items){
    this->shipName = sN;
    this->shipId = sId;
    this->capacity = c;
    this->currentLoad = cL;
    this->items = new string[capacity];
    int aCount = 0;
    for(int j = 0; j < capacity; j++){
        this->items[aCount++] = items[j];
    }
}

int militaryMomento::getShipId(){
    return this->shipId;
}

string militaryMomento::getShipName(){
    return this->shipName;
}

string* militaryMomento::getItems(){
    return this->items;
}

int militaryMomento::getCapacity(){
    return this->capacity;
}

militaryMomento *militaryMomento::restore()
{
    return this;
}

int militaryMomento::getCurrentLoad(){
    return this->currentLoad;
}

militaryMomento::~militaryMomento()
{
    if(this->items != NULL){
        delete items;
        items = NULL;
    }
}
