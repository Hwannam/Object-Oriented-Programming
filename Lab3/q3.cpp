#include <iostream>
using namespace std;

int main()
{
	int n;
	int a = 0;
	cout << "number : ";
	cin >> n;

	while (n > 0)
	{
		if (n % 2 == 0 || n % 3 == 0)
		{
			n -= 1;
		}
		else
		{
			a += n;
			n -= 1;
		}

	}

	cout << "sum : " << a;
	return 0;
}