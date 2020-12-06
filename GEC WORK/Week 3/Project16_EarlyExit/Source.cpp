#include <iostream>
using namespace std;

int playerLife = 100;
int damage = 0;
int i;

int main()
{
	for (i = 1; i < 11; i++)
	{
		cout << "\nQuestion " << i << ": How much damage shall I deal?" << endl;
		cin >> damage;

		playerLife = playerLife - damage;

		cout << "\nHealth: " << playerLife << endl;

		if (playerLife <= 0)
		{
			cout << "\nEarly end. Player died!" << endl;
			return 0;
		}
	}

	if (i == 11 && playerLife > 0)
	{
		cout << "\nAll questions asked. Player survived!" << endl;
	}
}