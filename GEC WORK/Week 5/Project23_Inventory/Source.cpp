#include <string>
#include <iostream>
using namespace std;

char answer;

const int MAX_ITEMS = 4;
int numItems = 0;
string inventory[MAX_ITEMS];

int main()
{
	inventory[numItems++] = "sword";
	inventory[numItems++] = "battle axe";
	inventory[numItems++] = "healing potion";
	inventory[numItems++] = "dagger";

	cout << "You have picked up a Wizard's Staff" << endl;
	cout << "Would you like to swap out your Dagger for the Wizard's Staff? y/n" << endl;
	cin >> answer;

	if (answer == 'y')
	{
		inventory[3] = "wizard's staff";

		cout << "\n" << endl;

		for (int i = 0; i < MAX_ITEMS; i++)
		{
			cout << inventory[i] << "," << endl;
		}
	}

	else
	{
		cout << "\nYou have left the Wizard's Staff behind\n" << endl;

		for (int i = 0; i < MAX_ITEMS; i++)
		{
			cout << inventory[i] << "," << endl;
		}
	}
}