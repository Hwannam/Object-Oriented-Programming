#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("data.txt");
	string data;
	data = "사랑 프로그래밍 의자 사랑의바보 영통역 천년의사랑 냉장고 객체지향";
	fout << data;
	fout.close();

	ifstream fin;
	fin.open("data.txt");
	string a;
	string input;
	cout << "키워드 : ";
	cin >> input;

	cout << "검색결과 : ";
	while (fin >> a)
	{
		if ((a.find(input) == string::npos) == 0)   
			cout << a << "   ";
		else
			continue;
	}
	cout << endl;

	fin.close();
	return 0;
}