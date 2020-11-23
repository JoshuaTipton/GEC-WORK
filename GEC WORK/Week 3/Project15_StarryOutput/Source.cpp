#include <iostream>
using namespace std;

int starNum;
char confirm;
bool loopCode = true;

int main()
{
	do
	{
		cout << "Please enter a number:" << endl;
		cin >> starNum;

		for (int i = 0; i < starNum; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				cout << "*";
			}
			cout << endl;
		}

		cout << "Do you want to continue? [Y or N]" << endl;
		cin >> confirm;

		if (confirm == 'y')
		{
			
		}

		if (confirm == 'n')
		{
			cout << "Goodbye!" << endl;
			loopCode = false;
		}
	} while (loopCode == true);
}