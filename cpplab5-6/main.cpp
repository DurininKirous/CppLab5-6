#include "ClassVehicle.h"
size_t CountVehiclesBelowTheSetValue(Vehicle list[], int kol, int N)
{
	size_t count = 0;
	for (int i = 0; i < kol; i++)
	{
		if (list[i].GetPrice() < N) {
			count += 1;
		}
	}
	return count;
}
void PercentageOfEachType(Vehicle list[], int kol)
{
	double first = 0, second = 0, third = 0, fourth = 0;
	for (int i = 0; i < kol; i++)
	{
		switch (list[i].GetType()) {
			case 1:
			{
				first += 1;
				break;
			}
			case 2:
			{
				second += 1;
				break;
			}
			case 3:
			{
				third += 1;
				break;
			}
			case 4:
			{
				fourth += 1;
				break;
			}
			default:
				break;
		}
	}
	std::cout << "Automobiles:" <<std::fixed<<std::setprecision(2)<< (first / double(kol)) * 100 << "%" << std::endl
		      <<"Bikes:" << std::fixed << std::setprecision(2) << (second / double(kol)) * 100 << "%" << std::endl
		      <<"Electric bicycles:" << std::fixed << std::setprecision(2) << (third / double(kol)) * 100 << "%" << std::endl
		      <<"Space rockets:" << std::fixed << std::setprecision(2) << (fourth / double(kol)) * 100 << "%" << std::endl;
}
void VehiclesOfOnePerson(Vehicle list[], int kol, const char* Name) 
{
	bool found = false;
	for (int i=0;i<kol;i++) 
	{
		if (strcmp(list[i].GetName(), Name) == 0)
		{
			list[i].Print();
			found = true;
		}
	}
	if (found == false) 
	{
		std::cout << "This person doesn't have any vehicle\n";
	}
}
int main()
{
	Vehicle First(1000, 1, "Alex", 100, 100);
	Vehicle Second(1250, 4, "John", 120, 150);
	Vehicle Third(1500, 2, "Arlin", 150, 100);
	Vehicle Fourth;
	Vehicle Fiveth(Third);
	Vehicle list[] = { First,Second,Third,Fourth,Fiveth };
	CountVehiclesBelowTheSetValue(list, 5, 1300);
	PercentageOfEachType(list, 5);
	VehiclesOfOnePerson(list, 5, "Arlin");
}