#include <iostream>
using namespace std;

char boardCards[10];
bool cardsFound[10] = {false};

int attemptCount = 0;

void drawBoard();
void drawBoardParam(int guess1, int guess2);

int main()
{
	int score = 0;
	bool playing = true;

	while (playing == true)
	{
		drawBoard();

		int userGuess1;
		int userGuess2;

		cout << "Select a Card" << endl;
		cin >> userGuess1;

		drawBoardParam(userGuess1, userGuess2);

		cout << "Select another Card" << endl;
		cin >> userGuess2;

		drawBoardParam(userGuess1, userGuess2);
		
		// Check Results

	}
}