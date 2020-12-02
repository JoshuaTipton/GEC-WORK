#include <iostream>
using namespace std;

int smallestNumber(int a, int b) {

	if (a < b) {
		cout << "The Smallest Value is: " << a << endl;
	}

	else if (a > b) {
		cout << "The Smallest Value is: " << b << endl;
	}

	else {
		cout << "The numbers are the same" << endl;
	}

	return 0;
}

int main(int myA, int myB)
{
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter a Number:" << endl;
		cin >> myA;

		cout << "Enter another Number:" << endl;
		cin >> myB;

		smallestNumber(myA, myB);
	}
}