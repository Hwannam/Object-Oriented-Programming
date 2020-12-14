#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (1)
	{
		string a;
		cout << "문자열 하나를 입력해주세요 : ";
		cin >> a;
		cout << "입력하신 문자열의 역순 : ";
		string b= a;
		for (int i = a.length() - 1; i >= 0; i--)
			{
				b[a.length() - 1 - i] = a[i];
			}
		cout << b << endl;
		auto f =[](string a, string b) {
			if (a == b)
			{
				cout << "이 문자는 회문입니다." << endl << endl;
			}
			else
			{
				cout << "이 문자는 회문이 아닙니다." << endl << endl;
			}
		};
		f(a, b);
		
	}
	return 0; 
}