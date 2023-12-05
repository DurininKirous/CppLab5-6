#include "ClassVehicle.h"
Vehicle::Vehicle(int Price, int TypeOfVehicle, const char *Owner, int FuelPrice, int Expenditure) :
    Price(Price),
    TypeOfVehicle(TypeOfVehicle),
    Owner(Owner),
    FuelPrice(FuelPrice),
    Expenditure(Expenditure) 
{
    if (TypeOfVehicle < 0 || TypeOfVehicle > 4)
    {
        std::cerr << "There is no such type of vehicle. Try again!";
        while ((TypeOfVehicle < 0 || TypeOfVehicle > 4))
        {
            std::cin >> TypeOfVehicle;
            if (TypeOfVehicle < 0 || TypeOfVehicle > 4)
            {
                std::cerr << "There is no such type of vehicle. Try again!";
            }
        }

    }
    this->TypeOfVehicle = TypeOfVehicle;
}

Vehicle::Vehicle(): Vehicle(0,0,"Unknown",0,0) {}

Vehicle::Vehicle(const Vehicle& Other): 
    Price(Other.Price), 
    TypeOfVehicle(Other.TypeOfVehicle),
    Owner(Other.Owner),
    FuelPrice(Other.FuelPrice), 
    Expenditure(Other.Expenditure)
{}

Vehicle::~Vehicle() {}

void Vehicle::Print()
{
    std::cout << "Owner: " << Owner << " ";
    switch (TypeOfVehicle) {
    case 0:
        std::cout << "Type of vehicle: Unknown ";
        break;
    case 1:
        std::cout << "Type of vehicle: Automobile ";
        break;
    case 2:
        std::cout << "Type of vehicle: Bike ";
        break;
    case 3:
        std::cout << "Type of vehicle: Electric bicycle ";
        break;
    case 4:
        std::cout << "Type of vehicle: Space rocket ";
        break;
        }    
     std::cout << "Price: " << Price << " "
               << "Fuel price: " << FuelPrice << " "
               << "Expenditure: " << Expenditure << std::endl;
}

void Vehicle::PrintPrice()
{
    std::cout << "Price: " << Price << std::endl;
}

void Vehicle::PrintName()
{
    std::cout << "Name: " << Owner << std::endl;
}

void Vehicle::PrintType()
{
    std::cout << "Type: " << TypeOfVehicle << std::endl;
}

void Vehicle::PrintFuelPrice()
{
    std::cout << "Fuel price: " << FuelPrice << std::endl;
}

void Vehicle::PrintExpenditure()
{
    std::cout << "Expenditure: " << Expenditure << std::endl;
}
int Vehicle::GetPrice() 
{
    return Price;
}

int Vehicle::GetType()
{
    return TypeOfVehicle;
}

const char* Vehicle::GetName()
{
    return Owner;
}

int Vehicle::GetFuelPrice()
{
    return FuelPrice;
}

int Vehicle::GetExpenditure()
{
    return Expenditure;
}

void Vehicle::SetPrice(int Price) 
{ 
    this->Price = Price; 
}

void Vehicle::SetName(const char* Owner) 
{ 
    this->Owner=Owner; 
}

void Vehicle::SetFuelPrice(int FuelPrice) 
{ 
    this->FuelPrice = FuelPrice; 
}

void Vehicle::SetExpenditure(int Expenditure) 
{ 
    this->Expenditure = Expenditure; 
}

void Vehicle::SetTypeOfVehicle(int TypeOfVehicle) 
{ 
    this->TypeOfVehicle = TypeOfVehicle; 
}

void Vehicle::SetAllNewInformation(int Price, int TypeOfVehicle, const char Owner[], int FuelPrice, int Expenditure)
{
    SetPrice(Price);
    SetName(Owner);
    SetFuelPrice(FuelPrice);
    SetExpenditure(Expenditure);
    SetTypeOfVehicle(TypeOfVehicle);
}