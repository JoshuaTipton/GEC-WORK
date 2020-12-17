#include <iostream>
#include <string>
using namespace std;

string testString = "Do you know who loves C++ XX does!";
string name1;
string name2;
int nameLength;

void insertString(string n1, string n2, int nLength);

int main()
{
	cout << "Please enter your name: " << endl;
	cin >> name1;

	nameLength = name1.length();
	insertString(name1, name2, nameLength);

	while (name2.length() < nameLength + 1)
	{
		cout << "\nPlease enter a Second, Longer Name: " << endl;
		cin >> name2;

		if (name2.length() < nameLength + 1)
		{
			cout << "\nPlease ensure the name is Longer!" << endl;
		}
	}

	testString.replace(26, nameLength, name2);
	cout << testString << endl;

	return 0;
}

void insertString(string n1, string n2, int nLength)
{	
	testString.insert(27, n1);
	cout << testString << endl;

	testString.erase(26, 1);
	testString.erase(26 + nameLength, 1);

	cout << testString << endl;
}