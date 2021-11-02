//Lab_06_1_Rec.cpp
// Вольвенко Іван
// Лабораторна робота № 6.1
// Пошук елементів одновимірного масиву ітераційним та рекурсивним способом
// Варіант 13

#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int Sum(int mas[], const int n, int i);
int Kil(int mas[], const int n, int i);
int Zam(int mas[], const int n, int i);

int main()
{
	const int k = 24;
	int p[k];

	srand((unsigned)time(NULL));

	for (int i = 0; i < k; i++)
	{
		p[i] = 23 * rand() / RAND_MAX - 9;
		cout << p[i] << " ";
	}
	cout << endl;

	cout << "Sum = " << Sum(p, k, 0) << endl;
	cout << "k = " << Kil(p, k, 0) << endl;

	Zam(p, k, 0);

	for (int i = 0; i < k; i++)
	{
		cout << p[i] << " ";
	}

	return 0;
}

int Sum(int mas[], const int n, int i)
{
	if (mas[i] > 0 || (i % 2) == 0)
	{
		if (i < n)
			return mas[i] + Sum(mas, n, i + 1);
		else
			return 0;
	}
	else
		return Sum(mas, n, i + 1);
}

int Kil(int mas[], const int n, int i)
{
	if (mas[i] > 0 || (i % 2) == 0)
	{
		if (i < n)
			return 1 + Kil(mas, n, i + 1);
		else
			return 0;
	}
	else
		return Kil(mas, n, i + 1);
}

int Zam(int mas[], const int n, int i)
{
	if (i == n)
		return 0;
	if (mas[i] > 0 || (i % 2) == 0)
		mas[i] = 0;
	return Zam(mas, n, i + 1);
}