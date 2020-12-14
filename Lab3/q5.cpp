#include <iostream>
using namespace std;

int eu(int a, int b)
{
	int c = a % b;

	if (c == 0)
	{
		return b;
	}
	else
	{
		return eu(b, c);
	}
}
int main()
{
	int x, y;
	cin >> x >> y;

	cout << "gcd(" << x << "," << y << ") = " << eu(x, y);
	
	return 0;
}