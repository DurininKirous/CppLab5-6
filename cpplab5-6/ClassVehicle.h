#include <string.h>
#include <iomanip>
#include <iostream>
//enum class EnumTypeOfVehicle { Unknown, Car, Bike, ElectroBike, Rocket };
class Vehicle
{
private:
    int Price;
    int TypeOfVehicle;
    mutable const char *Owner;
    int FuelPrice;
    int Expenditure;
public:
    Vehicle(int Price, int TypeOfVehicle, const char *Owner, int FuelPrice, int Expenditure);
    Vehicle();
    Vehicle(const Vehicle& Other);
    ~Vehicle();
    void Print();
    int GetPrice();
    int GetType();
    int GetFuelPrice();
    int GetExpenditure();
    const char* GetName();
    void PrintPrice();
    void PrintType();
    void PrintFuelPrice();
    void PrintExpenditure();
    void PrintName();
    void SetPrice(int Price);
    void SetName(const char* Owner);
    void SetFuelPrice(int FuelPrice);
    void SetExpenditure(int Expenditure);
    void SetTypeOfVehicle(int TypeOfVehicle);
    void SetAllNewInformation(int Price, int TypeOfVehicle, const char *Owner, int FuelPrice, int Expenditure);
};
