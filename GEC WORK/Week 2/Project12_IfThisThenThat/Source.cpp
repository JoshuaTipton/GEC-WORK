#include <iostream>
using namespace std;

int main()
{
	int rain = 1;
	int snow = 2;

	int userWeather;
	int userTemperature;

	cout << "Please tell me if it is raining with '1' or snowing with '2'" << endl;

	cin >> userWeather;

	cout << "Hmm I see, what is the current temperature? (in celsius)" << endl;

	cin >> userTemperature;

	if (userWeather == 1)
	{
		if (userTemperature > 15)
		{
			cout << "Wear a light coat!" << endl;
		}

		else
		{
			cout << "Wear a thick coat!" << endl;
		}
	}

	else if (userWeather == 2)
	{
		if (userTemperature > 5)
		{
			cout << "Wear something warm!" << endl;
		}

		else if (userTemperature > 0)
		{
			cout << "Wrap up well!" << endl;
		}

		else
		{
			cout << "Please stay home!" << endl;
		}
	}

	else
	{
		cout << "Have a nice day!" << endl;
	}
}