#include <iostream>
using namespace std;

int main()
{
	float farhenheit = 95.0f;
	float celsius = (farhenheit - 32) * 0.5556;

	cout << farhenheit << "F is equal to " << celsius << "C." << endl;

	return 0;
}