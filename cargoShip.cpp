#include "cargoShip.h"

using namespace std;

cargoShip::cargoShip()
{
    this->capacity = 10;
    this->items = NULL;
    this->currentLoad = 0;
}

cargoShip::cargoShip(const cargoShip& cS){
    items = new string[cS.capacity];
    for(int i = 0; i < cS.capacity; i++){
        items[i] = cS.items[i];
    }
    capacity = cS.capacity;
    currentLoad = cS.currentLoad;
    shipName = cS.shipName;
    shipId = cS.shipId;
}
cargoShip::cargoShip(int c, string *items, int cL, int sI, string sN) : ship(sN, c)
{
    this->capacity = c;
    this->currentLoad = cL;
    this->items = new string[this->capacity];
    int arrCount = 0;
    for(int i = 0; i < capacity; i++){
        if(items[i] != ""){
            this->items[arrCount++] = items[i];
        }
    }

}

int cargoShip::getCapacity(){
    return capacity;
}

std::string* cargoShip::getItems(){
    return items;
}

int cargoShip::getCurrentLoad(){
    return currentLoad;
}
void cargoShip::setCapacity(int c){
    this->capacity = c;
}

void cargoShip::setItems(std::string* i){
    this->items = i;
}

void cargoShip::setCurrentLoad(int cL){
    this->currentLoad = cL;
}
std::string cargoShip::toString()
{
    stringstream res;
    res << "Ship " << shipId << ": " + shipName + "\nload: " <<
        currentLoad << "/" << capacity << "\nItems:\n";

    for(int i = 0; i < currentLoad; i++){
        int iNo = (i+1);
        res << "Item " << iNo << ": " << items[i] << "\n";
    }
    return res.str();
}

cargoMomento cargoShip::save(int saveId)
{
    return cargoMomento(this->shipName, this->shipId, this->capacity, this->currentLoad, this->items);
}

void cargoShip::restore(cargoMomento restorePoint)
{
    this->shipName = restorePoint.getShipName();
    this->shipId = restorePoint.getShipId();
    this->capacity = restorePoint.getCapacity();
    this->currentLoad = restorePoint.getCurrentLoad();
    this->items = restorePoint.getItems();
}

void cargoShip::insert(std::string item){
    if(currentLoad == capacity){
        cout<< "The ship is full. Please remove some items." << endl;
    }else{
        items[currentLoad] = item;
        currentLoad++;
    }
}

void cargoShip::remove(std::string item){
    if(currentLoad != 0){
        int index = -1;
        for (int i = 0; i < capacity; i++)
        {
            if(item == items[i]){
                index = i;
                break;
            }
        }
        if(index == -1){
            cout<<"Element not found." << endl;
        }else{
            items[index] = "";
            for(int i = index; i < currentLoad; i++){
                items[i] = items[i+1];
            }
        }
        currentLoad--;
    }else{
        cout<< "No elements to delete." << endl;
    }
}

ship *cargoShip::clone()
{
    std::string* newArr = new std::string[capacity];
    for(int i = 0; i < capacity; i++){
        newArr[i] = items[i];
    }
    // return new cargoShip(this->capacity, newArr, 
    // this->currentLoad, this->shipId, this->shipName);
    return new cargoShip(*this);
}

cargoShip::~cargoShip()
{
    if(items != NULL){
        delete items;
        items = NULL;
    }
}