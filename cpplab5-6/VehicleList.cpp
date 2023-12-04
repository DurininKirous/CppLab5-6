#include "VehicleList.h"
VehicleList::VehicleList(size_t size) : list(NULL), count(0), maxsize(size)
{
	list = new Vehicle[maxsize];
}
const Vehicle& VehicleList::getVehicle(size_t index) const
{
	return list[index];
}
bool VehicleList::addVehicle(const Vehicle& attr) 
{
	if (count < maxsize)
	{
		list[count++] = attr;
		return true;
	}
	else
	{
		return false;
	}
}
size_t VehicleList::Size() const
{
	return count;
}
size_t VehicleList::CountVehiclesBelowTheSetValue(int N)
{
	size_t count = 0;
	for (int i = 0; i < count; i++) 
	{
		if (list[i].GetPrice() < N) {
			count += 1;
		}
	}
	return count;
}
void VehicleList::PercentageOfEachType()
{
	size_t first = 0, second = 0, third = 0, fourth = 0;
	for (int i = 0; i < count; i++)
	{
		if (list[i].GetType()==0) 
		{
			first += 1;
		}
		else if (list[i].GetType() == 1)
		{
			second += 1;
		}
		else if (list[i].GetType() == 2)
		{
			third += 1;
		}
		else if (list[i].GetType() == 3)
		{
			fourth += 1;
		}
	}
	std::cout 
}