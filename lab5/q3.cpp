#include <iostream>
#include <vector>
using namespace std;

void change(vector<int>& x)
{
	for (int i = 0; i < 5; i++)
	{
		int q = x[i];
		x[i] = x[9 - i];
		x[9 - i] = q;
	}
}

int main()
{
	vector<int> a(10);

	for (int i = 0; i < 10; i++)
	{
		a[i] = i + 1;
	}

	cout << "�⺻ Vector �� :" << endl <<"     ";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}

	change(a);

	cout << endl << "�Լ� ���� �� Vector �� :" << endl << "     ";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}

}