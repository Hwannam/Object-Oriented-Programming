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
	data = "��� ���α׷��� ���� ����ǹٺ� ���뿪 õ���ǻ�� ����� ��ü����";
	fout << data;
	fout.close();

	ifstream fin;
	fin.open("data.txt");
	string a;
	string input;
	cout << "Ű���� : ";
	cin >> input;

	cout << "�˻���� : ";
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