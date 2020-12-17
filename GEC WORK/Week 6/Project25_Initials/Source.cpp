#include <iostream>
using namespace std;

char nameInput[50];
int nameLength;
bool firstChar = true;

int main()
{
	cout << "Please enter your name:" << endl;
	cout << "(FirstName MiddleName LastName)" << endl;

	cin.getline(nameInput, 50);
	nameLength = strlen(nameInput);

	cout << "Initials: " << endl;

	for (int i = 0; i < nameLength; i++)
	{
		if (nameInput[i] != ' ') 
		{
			if (firstChar) 
			{
				cout << nameInput[i];
				firstChar = false;
			}
		}

		else
		{
			cout << endl;
			firstChar = true;
		}
	}

	cout << endl;

	return 0;
}