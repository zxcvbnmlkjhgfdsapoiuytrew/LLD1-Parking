#include "vehicle.hpp"
#include<iostream>
#include<string>

Vehicle::Vehicle(string licensePlate,VehicleType type,string color):
licensePlate(licensePlate),type(type),color(color){}

string Vehicle::getLicensePlate() const{ return licensePlate;}
VehicleType Vehicle::getType() const{return type;}
string Vehicle::getColor() const{return color;}

void Vehicle::displayInfo() const{
    cout<<"Vehicle:"<<color<<" ";
    switch(type){
        case VehicleType::CAR:cout<<"car";break;
        case VehicleType::MOTORCYCLE:cout<<"Motorcycle";break;
        case VehicleType::TRUCK:cout<<"Truck";break;
        case VehicleType::BUS:cout<<"Bus";break;
    }
    cout<<"(License:"<<licensePlate<<")"<<endl;
}