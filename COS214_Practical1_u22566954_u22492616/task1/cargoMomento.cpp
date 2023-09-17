#include "cargoMomento.h"

cargoMomento::cargoMomento(){
    
}

cargoMomento::cargoMomento(std::string sN,int sI, int c, int cL,std::string* i){
    this->shipName = sN;
    this->shipId = sI;
    this->currentLoad = cL;
    this->capacity = c;
    this->items = new std::string[this->capacity];
    int aCount = 0;
    for(int j = 0; j < this->capacity; j++){
        if(i[j] != ""){
            this->items[aCount++] = i[j];
        }
    }
}

int cargoMomento::getCapacity(){
    return this->capacity;
}

int cargoMomento::getShipId(){
    return this->shipId;
}

std::string* cargoMomento::getItems(){
    return this->items;
}

int cargoMomento::getCurrentLoad(){
    return this->currentLoad;
}

std::string cargoMomento::getShipName(){
    return this->shipName;
}

int cargoMomento::getVersion(){
    return this->version;
}

cargoMomento* cargoMomento::restore(){
    return this;
}

// void cargoMomento::setShipName(std::string sN){
//     this->shipName = sN;
// }

// void cargoMomento::setShipId(int sI){
//     this->shipId = sI;
// }

// void cargoMomento::setItems(std::string* i){
//     this->items = i;
// }

// void cargoMomento::setCurrentLoad(int cL){
//     this->currentLoad = cL;
// }

// void cargoMomento::setCapacity(int c){
//     this->capacity = c;
// }

// void cargoMomento::setVersion(int v){
//     this->version = v;
// }

cargoMomento::~cargoMomento()
{
}