#include <iostream>
using namespace std;

int main()
{
	int totalHaribo = 40;
	int totalStudents = 14;

	int remainingHaribo;
	int sharedHaribo;

	remainingHaribo = totalHaribo % totalStudents;
	sharedHaribo = totalHaribo / totalStudents;

	cout << "The number of packets left is: " << remainingHaribo << endl;
	cout << "The number of packets each student gets is: " << sharedHaribo << endl;

	return 0;
}