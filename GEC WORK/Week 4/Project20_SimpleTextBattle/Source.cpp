#include <iostream>
using namespace std;

int playerHealth = 1000;
int enemyHealth = 2000;

bool playing = true;

bool attackChoice(int usersChoice);
bool playState();

bool attackChoice(int usersChoice)
{
	const int swordDamage = 300;
	const int magicDamage = 650;
	const int axeDamage = 450;

	const int trollSword = 350;
	const int trollMagic = 50;
	const int trollAxe = 100;

	switch (usersChoice){
		
		case 1: 
		{
			enemyHealth = enemyHealth - swordDamage;
			playerHealth = playerHealth - trollSword;

			cout << "\nYou have hit the Troll" << endl;
			cout << "The Troll has hit You" << endl;

			if (playerHealth < 0)
			{
				playerHealth = 0;
			}

			cout << "\nPlayer's Health: " << playerHealth << endl;
			cout << "Troll's Health: " << enemyHealth << endl;

			if (playerHealth <= 0 || enemyHealth <= 0)
			{
				playState();
			}

			cout << "\n1. use Sword 2. use Magic 3. use Axe" << endl;
			cin >> usersChoice;

			attackChoice(usersChoice);
			break;
		}

		case 2:
		{
			enemyHealth = enemyHealth - magicDamage;
			playerHealth = playerHealth - trollMagic;

			cout << "\nYou have hit the Troll" << endl;
			cout << "The Troll has hit You" << endl;

			if (playerHealth < 0)
			{
				playerHealth = 0;
			}

			cout << "\nPlayer's Health: " << playerHealth << endl;
			cout << "Troll's Health: " << enemyHealth << endl;

			if (playerHealth <= 0 || enemyHealth <= 0)
			{
				playState();
			}

			cout << "\n1. use Sword 2. use Magic 3. use Axe" << endl;
			cin >> usersChoice;

			attackChoice(usersChoice);
			break;
		}

		case 3:
		{
			enemyHealth = enemyHealth - axeDamage;
			playerHealth = playerHealth - trollAxe;

			cout << "\nYou have hit the Troll" << endl;
			cout << "The Troll has hit You" << endl;

			if (playerHealth < 0)
			{
				playerHealth = 0;
			}

			cout << "\nPlayer's Health: " << playerHealth << endl;
			cout << "Troll's Health: " << enemyHealth << endl;

			if (playerHealth <= 0 || enemyHealth <= 0)
			{
				playState();
			}

			cout << "\n1. use Sword 2. use Magic 3. use Axe" << endl;
			cin >> usersChoice;

			attackChoice(usersChoice);
			break;
		}
	}

	return false;
}

bool playState()
{
	char playAgain;

	if (enemyHealth <= 0)
	{
		cout << "\nYou have killed the Troll and won!" << endl;
		cout << "Would you like to play again? y/n" << endl;
		cin >> playAgain;

		if (playAgain == 'y')
		{
			playerHealth = 1000;
			enemyHealth = 2000;

			playing = true;
		}

		if (playAgain == 'n')
		{
			EXIT_SUCCESS;
		}
	}

	if (playerHealth <= 0)
	{
		cout << "\nYou have been killed!" << endl;
		cout << "Would you like to play again? y/n" << endl;
		cin >> playAgain;

		if (playAgain == 'y')
		{
			playerHealth = 1000;
			enemyHealth = 2000;

			playing = true;
		}

		else if (playAgain == 'n')
		{
			EXIT_SUCCESS;
		}
	}

	return false;
}

int main()
{
	int playersChoice;

	if (playing == true)
	{
		cout << "You encounter a Troll" << endl;
		cout << "1. use Sword 2. use Magic 3. use Axe" << endl;
		cout << "each choice has a different effects" << endl;
		cin >> playersChoice;

		attackChoice(playersChoice);
		playState();
	}

	else if (playing == false)
	{
		return 0;
	}
}