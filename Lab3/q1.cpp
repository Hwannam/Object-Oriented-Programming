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
			cout << a << "�� ¦���Դϴ�." <<endl;
		}
		else if ((a % 2) == 1)
		{
			cout << a << "�� Ȧ���Դϴ�." <<endl;
		}
		else
		{
			break;
		}
	}
	return 0;
}