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

	cout << "기본 Vector 값 :" << endl <<"     ";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}

	change(a);

	cout << endl << "함수 실행 후 Vector 값 :" << endl << "     ";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}

}