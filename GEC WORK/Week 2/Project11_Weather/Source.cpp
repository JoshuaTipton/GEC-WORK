#include <iostream>
using namespace std;

int main()
{
	int playerInput;

	cout << "Please choose an option:  1. Sunny 2. Cloudy 3.  Raining 4. Exit" << endl;

	cin >> playerInput;

	switch (playerInput)
	{
	case 1:
		cout << "Don't forget your sunscreen!" << endl;
	break;

	case 2:
		cout << "Don't forget to wrap up warm!" << endl;
	break;

	case 3:
		cout << "Don't forget to wear a coat!" << endl;
	break;

	case 4:
		cout << "Goodbye!" << endl;
	break;
	}
}