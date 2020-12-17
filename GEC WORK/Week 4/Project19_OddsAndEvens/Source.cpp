#include <iostream>
using namespace std;

int myNum;
int numOfOdd;
int oddTotal;
int numOfEven;
int evenTotal;

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	system("CLS");
	cout << "\nAmount of Odd Numbers: " << numOfOdd << endl;
	cout << "Total of Odd Numbers: " << oddTotal << endl;
	cout << "\nAmount of Even Numbers: " << numOfEven << endl;
	cout << "Total of Even Numbers: " << evenTotal << endl;
}

bool oddOrEven(int myNum)
{
	if (myNum % 2 == 0)
	{
		// Even is False
		return false;
	}

	else
	{
		// Odd is True
		return true;
	}
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "\nPlease enter a number:" << endl;
		cin >> myNum;

		if (oddOrEven(myNum) == true)
		{
			numOfOdd++;
			oddTotal = oddTotal + myNum;
		}

		else
		{
			numOfEven++;
			evenTotal = evenTotal + myNum;
		}

		outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
	}

	return 0;
}