#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

char cards[10] = { 'A', 'B', 'C', 'D', 'E', 'A', 'B', 'C', 'D', 'E' };
bool cardsFound[10] = { false };
int attemptCount = 0;
int score = 0;
bool playing = true;
int firstGuess = 0;
int secondGuess = 0;

int random(int j) { return rand() % j; }
void drawBoard();
void drawBoardParameters(int a, int b);

int main()
{
	srand(unsigned(time(0)));
	random_shuffle(begin(cards), end(cards), random);

	while (playing)
	{
		firstGuess = 0;
		secondGuess = 0;

		drawBoard();

		firstGuess = 0;
		secondGuess = 0;

		while (true)
		{
			cout << "\nPlease pick your first guess: " << endl;
			cin >> firstGuess;

			if (firstGuess < 1 || firstGuess > 10)
				cout << "\nYou must choose a number between 1 and 10!" << endl;

			else if (cardsFound[firstGuess - 1])
				cout << "\n That card has already been guessed!" << endl;

			else
			{
				drawBoardParameters(firstGuess, secondGuess);
				break;
			}
		}

		while (true)
		{
			cout << "\nPlease pick your second guess: " << endl;
			cin >> secondGuess;

			if (secondGuess < 1 || secondGuess > 10)
				cout << "\nYou must choose a number between 1 and 10!" << endl;

			else if (cardsFound[secondGuess - 1])
				cout << "\n That card has already been guessed!" << endl;

			else if (firstGuess == secondGuess)
				cout << "\n You can't pick the same card twice!" << endl;

			else
			{
				drawBoardParameters(firstGuess, secondGuess);
				break;
			}
		}

		if (cards[firstGuess - 1] == cards[secondGuess - 1])
		{
			score++;
			cardsFound[firstGuess - 1] = true;
			cardsFound[secondGuess - 1] = true;
		}

		if (score >= 5)
		{
			cout << "\nWinner!!!" << endl;
			playing = false;
		}

		else
			attemptCount++;
	}

	return 0;
}

void drawBoard()
{
	system("cls");
	
	cout << "Attempt count = " << attemptCount << endl;
	cout << "\n" << endl;

	for (int i = 0; i < 10; i++)
	{
		if (cardsFound[i])
			cout << "[" << cards[i] << "] ";

		else
			cout << "[" << i + 1 << "] ";

		if (i == 4)
			cout << endl;
	}

	cout << endl;
}

void drawBoardParameters(int a, int b)
{
	system("cls");

	cout << "Attempt count = " << attemptCount << endl;
	cout << "\n" << endl;

	for (int i = 0; i < 10; i++)
	{
		if (cardsFound[i] || i + 1 == a || i + 1 == b)
			cout << "[" << cards[i] << "] ";

		else
			cout << "[" << i + 1 << "] ";

		if (i == 4)
			cout << endl;
	}

	cout << endl;
}