#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <ctime>
#include <random>
using namespace std;

class FileNotFoundException : public exception
{
	string message;
public:
	FileNotFoundException(const string& fname) :
		message("File \"" + fname + "\" not found") {}

	virtual const char* what() const throw() {
		return message.c_str();
	}
};

void read_file(string& filename)
{
	ifstream f1;
	f1.open(filename);
	if (!f1.good())
	{
		throw FileNotFoundException(filename);
	}
	int m, n;
	cout << "출력할 행 크기 : ";
	cin >> m;
	cout << "출력할 열 크기 : ";
	cin >> n;


	int v;
	vector<vector<int>> p(10,vector<int>(10));
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			f1 >> v;
			p.at(i).at(j)= v;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << p.at(i).at(j) << " ";
		}
		cout << endl;
	}
	f1.close();
}
int main()
{
	ofstream f;
	f.open("temp.txt");
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			f << rand() % 100 << " ";
		}
		f << endl;
	}

	f.close();
	string str;
	cout << "파일 이름 : ";
	cin >> str;

	try {
	  read_file(str);
	}
	catch (std::exception& e)
	{
		cout << endl<< e.what() << '\n';
	}
	return 0;
}

