#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
	system("color 0B");

	int a, b, c;

	cout << "\tВведiть перше число: ";
	cin >> a;

	cout << "\tВведiть друге число: ";
	cin >> b;

	cout << "\tВведiть третє число: ";
	cin >> c;

	if (a > b && a > c)
	{
		cout << "\tНайбiльше число: " << a << "\t";

	}
	else 
	{
		if (b > a&& b > c)
		{
			cout << "\tНайбiльше число: " << b << "\t";

		}
		else
		{

			if (c > b && c > a)
			{
				cout << "\tНайбiльше число: " << c <<"\t";

			}
			else
				if (a == b == c)
				{
					cout << "\tЧисла рiвнi";
				}
			if (a == b && a > c)
			{
				cout << "\tНайбiльше число: " << a << "\t";
			}
			else
			{
				if (a == c && a > b)
				{
					cout << "\tНайбiльше число: " << a << "\t";
				}
				else
				{
					if (b == c && b > a)
					{
						cout << "\tНайбiльше число: " << b << "\t";
					}

				}
			}
				
		}
	}
		
	

	system("pause");
	return 0;
}