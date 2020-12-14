#include <iostream>
using namespace std;

int main()
{
	while (1)
	{
		int a;
		cout << "number : ";
		cin >> a ;
		if ((a % 2) == 0)
		{
			cout << a << "은 짝수입니다." <<endl;
		}
		else if ((a % 2) == 1)
		{
			cout << a << "은 홀수입니다." <<endl;
		}
		else
		{
			break;
		}
	}
	return 0;
}