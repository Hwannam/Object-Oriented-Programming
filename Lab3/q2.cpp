#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int n;
	cout << "number : ";
	cin >> n;

	while (n > 0)
	{
		a += n;
		n -= 1;
	}

	cout << a;
	return 0;
}