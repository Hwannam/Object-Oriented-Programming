#include <iostream>
using namespace std;

int main()
{

	int n;
	while (1)
	{
		int a = 1;
		cout << "number : ";
		cin >> n;

		if (n >= 1 && n <= 9)
		{
			while (a < 10)
			{
				cout << n << "*" << a << " = " << n * a <<"  ";
				a += 1;
			}
			cout << endl;
		}
		else
			break;
	}
	return 0;
}