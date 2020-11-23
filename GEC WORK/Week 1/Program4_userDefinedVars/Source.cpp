#include <iostream>
using namespace std;

int main()
{
	typedef int cost;

	enum CarMake
	{
		FORD = 1,
		FIAT,
		TESLA,
		VW,
		BMW,
		ASTONMARTIN,
		HONDA,
		NISSAN,
		TOYOTA,
		AUDI,
		JAGUAR,
		DODGE
	};

	cost CarCost = 13000;

	CarMake CarName = HONDA;

	cout << "The cost of my car is: " << CarCost << endl;

	cout << "My car id is: " << CarName << endl;

	return 0;
}