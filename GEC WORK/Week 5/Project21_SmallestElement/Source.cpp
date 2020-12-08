#include <iostream>
using namespace std;

int myArray[10];
int minimum;
int currentPosition = 1;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter a number:" << endl;
		cin >> myArray[i];
	}

	minimum = myArray[0];

	for (int i = 0; i < 10; i++)
	{
		if (myArray[i] < minimum)
		{
			minimum = myArray[i];
			currentPosition = i + 1;
		}

	}
		cout << "The Smallest Element is: " << minimum << endl;
		cout << "it's position is: " << currentPosition << endl;
}