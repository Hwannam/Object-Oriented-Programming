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

	cout << "기본값 출력> " << str << endl;
	change(&str);
	cout << "변환된 값 출력> " << str << endl;
}