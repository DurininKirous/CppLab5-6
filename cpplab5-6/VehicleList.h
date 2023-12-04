#include "ClassVehicle.h"
class VehicleList
{
	Vehicle* list;
	size_t count;
	size_t maxsize;
public:
	VehicleList(size_t size);
	const Vehicle& getVehicle(size_t index) const;
	bool addVehicle(const Vehicle& veh);
	size_t Size() const;
	size_t CountVehiclesBelowTheSetValue(int N);
	void PercentageOfEachType();
};

