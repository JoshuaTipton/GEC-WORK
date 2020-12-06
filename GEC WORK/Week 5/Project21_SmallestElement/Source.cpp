#include <iostream>
using namespace std;

int myArray[10];
int minimum;
int position;

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
			position =	
		}
	}

	cout << "The Smallest Element is: " << minimum << endl;
}