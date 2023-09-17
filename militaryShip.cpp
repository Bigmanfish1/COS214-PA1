#include "militaryShip.h"

using namespace std;

militaryShip::militaryShip()
{
}

militaryShip::militaryShip(const militaryShip& mS){
    items = new string[mS.capacity];
    for(int i = 0; i < mS.capacity; i++){
        items[i] = mS.items[i];
    }
    capacity = mS.capacity;
    currentLoad = mS.currentLoad;
    shipName = mS.shipName;
    shipId = mS.shipId;
}
militaryShip::militaryShip(string sN, int sI, int c, int cL, string* items): ship(sN, sI)
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

void militaryShip::insert(std::string item){
    if(currentLoad == capacity){
        cout<< "The ship is full. Please remove some items." << endl;
    }else{
        items[currentLoad] = item;
        currentLoad++;
    }
}

void militaryShip::remove(string item){
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

ship* militaryShip::clone()
{
    std::string* newArr = new std::string[capacity];
    for(int i = 0; i < capacity; i++){
        newArr[i] = items[i];
    }
    // return new militaryShip(this->shipName, this->shipId, 
    //  this->capacity, this->currentLoad, newArr);
    return new militaryShip(*this);
}

militaryMomento militaryShip::save(int saveId){
    return militaryMomento(this->shipName, this->shipId, this->capacity, this->currentLoad, this->items);
}

void militaryShip::restore(militaryMomento restorePoint){
    this->capacity = restorePoint.getCapacity();
    this->currentLoad = restorePoint.getCurrentLoad();
    this->items = restorePoint.getItems();
}
std::string militaryShip::toString()
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

militaryShip::~militaryShip()
{
    if(items != NULL){
        delete items;
        items = NULL;    
    }
}