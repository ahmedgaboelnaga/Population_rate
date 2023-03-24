#include<iostream>

using namespace std;

int main()
{
	int population = 0;
	cout << "Enter the current population: " << endl;
	cin >> population;

	int yearsnumber;
	cout << "Enter the nubmer of years: " << endl;
	cin >> yearsnumber;

	const int monthsnumber = yearsnumber * 12;
	const int birth_rate = 7;
	const int death_rate = 13;
	const int immigrant_rate = 45;

	const int monthseconds = 24 * 60 * 60;

	int monthlybirths = monthseconds / birth_rate;
	int monthlydeaths = monthseconds / death_rate;
	int monthlyimmigrants = monthseconds / immigrant_rate;
	int monthlyincrementrate = monthlybirths + monthlyimmigrants - monthlydeaths;

	cout << endl;

	int monthlypopulation = population;
	for (int j = 1; j <= monthsnumber; j++)
	{
		population = population + monthlyincrementrate;
		cout << "The population after " << j << " months is: " << population << endl;
	}

	cout << endl << "===================================" << endl << endl;

	const int yearseconds = 365 * 24 * 60 * 60;

	int yearlybirths = yearseconds / birth_rate;
	int yearlydeaths = yearseconds / death_rate;
	int yearlyimmigrants = yearseconds / immigrant_rate;
	int yearlyincrementrate = yearlybirths + yearlyimmigrants - yearlydeaths;

	int yearlypopulation = population;
	for (int i = 1; i <= yearsnumber; i++)
	{
		population = population + yearlyincrementrate;
		cout << "The population after " << i << " years is: " << population << endl;
	}

	return 0;
}