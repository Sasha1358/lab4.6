// Lab_04_6.cpp
// < Якубенко Олександра>
// Лабораторна робота № 4.6
// Вкладені цикли.
// Варіант 28 
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S, k, i;
	P = 1;
	i = 2;
	k = 1;
	while (i <= 10)

	{
		S = 0;
		k = 1;
		while (k <= (20 - i))

		{
			S += 1 + (i)/k;
			i++;

		}
		P *= (1 + S) / (1 + S*S);
		i++;

	}
	cout << P << endl;
	P = 1;
	i = 2;
	do
	{
		S = 0;
		k = 1;
		do
		{
			S += 1 + (i) / k;
			i++;
		} while (k <= (20 - i));
		P *= (1 + S) / (1 + S * S);
		i++;
	} while (i <= 10);
	cout << P << endl;
	P = 1;
	for (i = 2; i <= 10; i++)

	{
		S = 0;
		for (k = 1; k <= (20 - i); i++)

		{
			S += 1 + (i) / k;

		}
		P *= (1 + S) / (1 + S * S);

	}
	cout << P << endl;
	P = 1;
	for (i = 2; i <= 10; i++)
	{
		S = 0;
		for (k = 1; k <= (20 - i); i++)
		{
			S += 1 + (i) / k;
		}
		P *= (1 + S) / (1 + S * S);
	}

	cout << P << endl;

	return 0;
}