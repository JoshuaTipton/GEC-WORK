#include <iostream>
using namespace std;

void addTwo(int num)
{
	// Add two to the number passed
	num += 2;
	// Output the contents of num within the function
	cout << "FUNCTION: " << num << endl;
}

int main(int myNum)
{
	myNum = 6;

	cout << "MAIN [before]: myNum = " << myNum << endl;

	addTwo(myNum);

	cout << "MAIN [after]: myNum = " << myNum << endl;

	return 0;
}