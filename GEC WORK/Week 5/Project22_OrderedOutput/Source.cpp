#include <iostream>
using namespace std;

int myArray[5];
int maximum;
int currentPosition = 1;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter a number:" << endl;
		cin >> myArray[i];
	}

	maximum = myArray[0];

	for (int i = 0; i < 5; i++)
	{
		if (myArray[i] > maximum)
		{
			maximum = myArray[i];
			currentPosition = i + 1;
		}

	}
	
	cout << "\nArray: ";

	for (int i = 0; i < 5; i++)
	{
		cout << myArray[i] << " ";
	}

	cout << "\nArray (Backwards): ";

	for (int i = 4; i >= 0; i--)
	{
		cout << myArray[i] << " ";
	}

	cout << "\nArray (Biggest Number): " << maximum << endl;
	cout << "it's Position: " << currentPosition << endl;
}
