#include <iostream>
using namespace std;

int num1;
int num2;
int newNum;
float totalNum;
float averageNum;
float amountofNum = 2;
bool loopmaCode = true;

int main()
{
	cout << "Enter the first number:" << endl;
	cin >> num1;
	cout << "\nEnter the second number:" << endl;
	cin >> num2;

	totalNum = num1 + num2;
	averageNum = totalNum / amountofNum;

	cout << "\nSum: " << totalNum << endl;
	cout << "Mean: " << averageNum << endl;

	amountofNum++;

	do
	{
		cout << "\nEnter a new number:" << endl;
		cin >> newNum;

		if (newNum != 0)
		{

			totalNum = totalNum + newNum;
			averageNum = totalNum / amountofNum;

			cout << "\nSum: " << totalNum << endl;
			cout << "Mean: " << averageNum << endl;

			amountofNum++;
		}

		else
		{
			break;
		}

	} while (loopmaCode == true);
}