#include <iostream>
#include <string>
using namespace std;

void change(string *x)
{
	string y;
	cout << "input> ";
	cin >> y;
	*x = y;
}

int main()
{
	string str = "This is default value";

	cout << "�⺻�� ���> " << str << endl;
	change(&str);
	cout << "��ȯ�� �� ���> " << str << endl;
}