#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
	system("color 0B");

	int a, b, c;

	cout << "\t����i�� ����� �����: ";
	cin >> a;

	cout << "\t����i�� ����� �����: ";
	cin >> b;

	cout << "\t����i�� ���� �����: ";
	cin >> c;

	if (a > b && a > c)
	{
		cout << "\t����i���� �����: " << a << "\t";

	}
	else 
	{
		if (b > a&& b > c)
		{
			cout << "\t����i���� �����: " << b << "\t";

		}
		else
		{

			if (c > b && c > a)
			{
				cout << "\t����i���� �����: " << c <<"\t";

			}
			else
				if (a == b == c)
				{
					cout << "\t����� �i��i";
				}
			if (a == b && a > c)
			{
				cout << "\t����i���� �����: " << a << "\t";
			}
			else
			{
				if (a == c && a > b)
				{
					cout << "\t����i���� �����: " << a << "\t";
				}
				else
				{
					if (b == c && b > a)
					{
						cout << "\t����i���� �����: " << b << "\t";
					}

				}
			}
				
		}
	}
		
	

	system("pause");
	return 0;
}