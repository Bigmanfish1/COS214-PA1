#include "ship.h"
#include "cargoShip.h"
#include "militaryShip.h"
#include "militaryMomento.h"
#include "cargoMomento.h"
#include "Momento.h"
#include <string>

using namespace std;
int main()
{
    string itemsC[] = {"Vehicles", "Bulk-Commodities", "Livestock"};
    string itemsM[] = {"Weapons", "Surveillance-Equipment", "Helicopters"};
    string* iC = itemsC;
    string* iM = itemsM;
    cargoShip* ship1 = new cargoShip(6,iC,3,1,"Cargo Ship 1");
    
    //cargoMomento* state1 = new cargoMomento(ship1->getShipName(), ship1->getShipId(), 6,3,iC);
    cout<< ship1->toString() << endl;
    cargoMomento state = ship1->save(1);
    ship1->setShipName("FSG");
    ship1->setCapacity(11);
    cout<< ship1->toString() << endl;
    ship1->restore(state);
    cout<< ship1->toString() << endl;
    ship1->remove("Bulk-Commodities");
    ship1->remove("Vehicles");
    ship1->remove("Livestock");
    ship1->remove("J");
    //Add more items
    ship1->insert("Luggage");
    ship1->insert("Laptops");
    cout<< ship1->toString() << endl;
    ship* newShip = ship1->clone();
    cout<< newShip->toString() << endl;
    return 0;
}