#ifndef PARKING_LOT_HPP
#define PARKING_LOT_HPP

#include<vector>
#include<string>
#include<map>
#include "ParkingSpot.hpp"
using namespace std;

class ParkingLot{
    private:
    vector<ParkingSpot*>spots;
    map<string,ParkingSpot*>occupiedSpots;
    int capacity;
    int availableSpots;

    public:
    ParkingLot(int numCompact,int numRegular,int numLarge);
    ~ParkingLot();

    int getCapacity() const;
    int getAvailableSpots() const;

    bool parkVehicle(Vehicle* vehicle);
    Vehicle* removeVehicle(const string& licensePlate);
    ParkingSpot* findVehicle (const string& licensePlate)const;

    void displayInfo()const;
    void displayOccupancy() const;

    private:
    ParkingSpot* findAvailableSpot(const Vehicle* vehicle)const;
};
#endif