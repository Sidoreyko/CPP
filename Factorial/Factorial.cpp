#include<iostream>
#include <math.h>

using namespace std;

long double fact(int n)
{
	if (n < 0) 
		return 0;// якщо менше нуля то вивести 0
	if (n == 0) // якщо введено 0 то факторіал дорівнює 1
		return 1; 
	else 
		return n * fact(n - 1); // використання рекурсiї.
}

int main() 
{
	setlocale(LC_ALL, ".1251");
	system("color 0B");

	int n;
	cout << "Введiть число факторiал якого треба отримати: ";
	cin >> n;
	cout << "\nФакторiал числа " << n << " = " << fact(n) << endl << endl;



	system("pause");
	return 0;
}