#include <iostream>
using namespace std;

int fibonacci(int);

int main()
{
	int n;
	int *p;

	cout << "n : ";
	cin >> n;

	p = new int[n];
	p[0] = 0;

	for (int i = 1; i < n; i++)
	{
		p[i] = fibonacci(i);
	}

	for (int i = 0; i < n; i++)
	{
		cout << p[i] << " ";
	}
	
	delete p;

	return 0;
}

int fibonacci(int a)
{
	if (a <= 2) 
		return 1;
	else 
		return fibonacci(a - 1) + fibonacci(a - 2);
	
}