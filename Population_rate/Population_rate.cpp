#include<iostream>

using namespace std;

const int birth_rate = 7;
const int death_rate = 13;
const int immigrant_rate = 45;


int monthlygrowth(int population, int monthsnumber)
{
	const int monthseconds = 24 * 60 * 60;
	const int monthlybirths = monthseconds / birth_rate;
	const int monthlydeaths = monthseconds / death_rate;
	const int monthlyimmigrants = monthseconds / immigrant_rate;
	const int monthlyincrementrate = monthlybirths + monthlyimmigrants - monthlydeaths;

	cout << endl;

	int monthlypopulation = population;
	for (int j = 1; j <= monthsnumber; j++)
	{
		population = population + monthlyincrementrate;
		cout << "The population after " << j << " months is: " << population << endl;
	}

	return population;
}

int yearlygrowth(int population, int yearsnumber)
{
	const int yearseconds = 365 * 24 * 60 * 60;
	const int yearlybirths = yearseconds / birth_rate;
	const int yearlydeaths = yearseconds / death_rate;
	const int yearlyimmigrants = yearseconds / immigrant_rate;
	const int yearlyincrementrate = yearlybirths + yearlyimmigrants - yearlydeaths;

	int yearlypopulation = population;
	for (int i = 1; i <= yearsnumber; i++)
	{
		population = population + yearlyincrementrate;
		cout << "The population after " << i << " years is: " << population << endl;
	}

	return population;
}

int main()
{
	int population = 0;
	cout << "Enter the current population: " << endl;
	cin >> population;

	int yearsnumber;
	cout << "Enter the nubmer of years: " << endl;
	cin >> yearsnumber;

	const int monthsnumber = yearsnumber * 12;

	cout << endl;

	population = monthlygrowth(population, monthsnumber);

	cout << endl << "===================================" << endl << endl;

	population = yearlygrowth(population, yearsnumber);

	return 0;
}