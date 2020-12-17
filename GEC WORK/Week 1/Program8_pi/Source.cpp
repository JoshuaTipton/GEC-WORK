#include <iostream>
using namespace std;

int main()
{
	const float pi = 3.14159;
	float radius = 22.0f;
	float areaOfCircle = pi * radius * radius;

	cout << "The area of a circle with a radius of " << radius << " is " << areaOfCircle << endl;

	return 0;
}