#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (1)
	{
		string a;
		cout << "���ڿ� �ϳ��� �Է����ּ��� : ";
		cin >> a;
		cout << "�Է��Ͻ� ���ڿ��� ���� : ";
		string b= a;
		for (int i = a.length() - 1; i >= 0; i--)
			{
				b[a.length() - 1 - i] = a[i];
			}
		cout << b << endl;
		auto f =[](string a, string b) {
			if (a == b)
			{
				cout << "�� ���ڴ� ȸ���Դϴ�." << endl << endl;
			}
			else
			{
				cout << "�� ���ڴ� ȸ���� �ƴմϴ�." << endl << endl;
			}
		};
		f(a, b);
		
	}
	return 0; 
}