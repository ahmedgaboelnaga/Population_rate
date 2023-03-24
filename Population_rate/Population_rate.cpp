#include<iostream>

using namespace std;

int main()
{
	int population = 0;
	cout << "Enter the current population: " << endl;
	cin >> population;

	int yearn;
	cout << "Enter the nubmer of years: " << endl;
	cin >> yearn;

	int monthn = yearn * 12;

	int monthseconds = 24 * 60 * 60;

	int mbirth = monthseconds / 7;
	int mdeath = monthseconds / 13;
	int mimg = monthseconds / 45;
	int mincrate = mbirth + mimg - mdeath;

	cout << endl;

	int j = 1;
	int mpopulation = population;
	while (j <= monthn)
	{
		population = population + mincrate;
		cout << "The population after " << j << " months is: " << population << endl;
		j++;
	}

	cout << endl << "===================================" << endl << endl;

	int yearseconds = 365 * 24 * 60 * 60;

	int ybirth = yearseconds / 7;
	int ydeath = yearseconds / 13;
	int yimg = yearseconds / 45;
	int yincrate = ybirth + yimg - ydeath;

	int i = 1;
	int ypopulation = population;
	while (i <= yearn)
	{
		population = population + yincrate;
		cout << "The population after " << i << " years is: " << population << endl;
		i++;
	}

	return 0;
}