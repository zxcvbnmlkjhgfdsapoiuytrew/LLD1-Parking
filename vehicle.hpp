#ifndef VEHICLE_HPP
#define VEHICLE_HPP
#include<string>
using namespace std;

enum class  VehicleType{
    CAR,
    MOTORCYCLE,
    TRUCK,
    BUS
};

class Vehicle{
    private:
    string licensePlate;
    VehicleType type;
    string color;

    public:
    Vehicle(string licensePlate,VehicleType type,string color);

    string getLicensePlate() const;
    VehicleType getType() const;
    string getColor() const;
    void displayInfo() const;
};
#endif