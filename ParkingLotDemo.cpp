#include "ParkingLot.hpp"
#include<iostream>

using namespace std;

int main(){
    ParkingLot parkingLot(2,5,6);

    cout<<"Inital parking lot status:"<<endl;
    parkingLot.displayInfo();

    Vehicle* car1=new Vehicle("CAR001",VehicleType::CAR,"RED");
    Vehicle* car2=new Vehicle("CAR002",VehicleType::CAR,"BLUE");
    Vehicle* motorcycle=new Vehicle("MOT001",VehicleType::MOTORCYCLE,"Black");
    Vehicle* truck=new Vehicle("TRUCK001",VehicleType::TRUCK,"BROWN");

    cout<<"\n....Parking Vehicles...\n"<<endl;

    if(parkingLot.parkVehicle(car1)){
        cout<<"Parked Successfully\n";
        car1->displayInfo();
        
    }

    if(parkingLot.parkVehicle(motorcycle)){
        cout<<"Parked Succesfully\n";
        motorcycle->displayInfo();
    }
    if(parkingLot.parkVehicle(truck)){
        cout<<"Parked sucessfully\n";
        truck->displayInfo();
    }

    parkingLot.displayInfo();
    parkingLot.displayOccupancy();

    cout<<"\nRemoving Vehicle CAR001..."<<endl;
    Vehicle* removed=parkingLot.removeVehicle("CAR001");
    if(removed){
        cout<<"Removed succesfully:";
        removed->displayInfo();
        delete removed;
    }
    if(parkingLot.parkVehicle(car2)){
        cout<<"Parked Succesfully:";
        car2->displayInfo();
    }
    cout<<"\nFinal parking  lot status:"<<endl;
    parkingLot.displayInfo();
    parkingLot.displayOccupancy();

    delete car2;
    delete motorcycle;
    delete truck;

    return 0;
}