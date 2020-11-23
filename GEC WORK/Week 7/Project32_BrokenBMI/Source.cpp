// BrokenBMI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int height();
int weight();
void output_bmi(float weight, float height);

int total_height, total_weight;

double bmi;

int main()
{
	const string message = "Welcome to your BMI Calculator.";
	string name;

	cout << message << endl;
	cout << "Firstly what is your full name?" << endl;
	getline(cin, name);
	cout << "Hi " << name << " lets get started." << endl;

	weight();

	height();

	output_bmi(total_weight, total_height);
}

int weight()
{
	int stone, pounds;
	while (true)
	{
		cout << "\nPlease enter your weight in stone:" << endl;
		cin >> stone;
		if (stone < 3 || stone > 30)
		{
			cout << "\nYou must be between 3 and 30 stone" << endl;
		}
		else
		{
			cout << "\nThank you!" << endl;
			break;
		}
	}

	while (true)
	{
		cout << "\nPlease enter the pounds:" << endl;
		cin >> pounds;

		if (pounds < 0 || pounds > 13)
		{
			cout << "\nPounds must be between 0 and 13" << endl;
		}
		else
		{
			cout << "\nThank you!" << endl;
			break;
		}

	}

	total_weight = stone * 12 + pounds;
	cout << "\nYour total weight in pounds is: " << total_weight << endl;
	return total_weight;
}

int height()
{
	int inches, feet{};
	while (true)
	{
		cout << "\nPlease enter your height in feet:" << endl;
		cin >> feet;
		if (feet < 2 || feet > 7)
		{
			cout << "\nYou must be between 2 and 7 feet" << endl;
		}
		else
		{
			cout << "\nThank you!" << endl;
			break;
		}
	}

	while (true)
	{
		cout << "\nPlease enter the inches:" << endl;
		cin >> inches;

		if (inches < 0 || inches > 11)
		{
			cout << "\nInches must be between 0 and 11" << endl;
		}
		else
		{
			cout << "\nThank you!" << endl;
			break;
		}

	}

	total_height = feet * 12 + inches;
	cout << "\nYour total height in inches is: " << total_height << endl;
	return total_height;
}

void output_bmi(float weight, float height)
{
	weight = total_weight;
	height = total_height;

	bmi = (weight * 703) / (height * height);

	cout << "\nYour BMI is: " << bmi << endl;
}