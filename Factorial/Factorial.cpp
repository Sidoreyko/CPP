#include<iostream>
#include <math.h>

using namespace std;

long double fact(int n)
{
	if (n < 0) 
		return 0;// ���� ����� ���� �� ������� 0
	if (n == 0) // ���� ������� 0 �� �������� ������� 1
		return 1; 
	else 
		return n * fact(n - 1); // ������������ ������i�.
}

int main() 
{
	setlocale(LC_ALL, ".1251");
	system("color 0B");

	int n;
	cout << "����i�� ����� ������i�� ����� ����� ��������: ";
	cin >> n;
	cout << "\n������i�� ����� " << n << " = " << fact(n) << endl << endl;



	system("pause");
	return 0;
}