#include<iostream>

using namespace std;

const int birthrate = 7;
const int deathrate = 13;
const int immigrantrate = 45;


int monthlygrowth(int population, int monthsnumber)
{
	const int monthseconds = 24 * 60 * 60;
	const int monthlybirths = monthseconds / birthrate;
	const int monthlydeaths = monthseconds / deathrate;
	const int monthlyimmigrants = monthseconds / immigrantrate;
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
	const int yearlybirths = yearseconds / birthrate;
	const int yearlydeaths = yearseconds / deathrate;
	const int yearlyimmigrants = yearseconds / immigrantrate;
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