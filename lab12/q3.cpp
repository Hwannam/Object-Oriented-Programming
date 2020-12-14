#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class FileNotFoundException : public exception 
{
	string message;
public:
	FileNotFoundException(const string& fname):
		message("File \"" + fname + "\" not found"){}

	virtual const char* what() const throw() {
		return message.c_str();
	}
};

class CStudent
{
public:
	CStudent(){}
	~CStudent() {}

	void setName(string n) { m_Name = n;}
	string getName() { return m_Name; }

	void setNumber(int n) { m_Number = n; }
	int getNumber() { return m_Number; }

	void setMajor(string n) { m_Major = n; }
	string getMajor() { return m_Major; }

	void setAll(string name, int number, string major)
	{
		m_Name = name;
		m_Number = number;
		m_Major = major;
	}
	void Display()
	{
		cout << "이름 : " << m_Name << "\n";
		cout << "학번 : " << m_Number << "\n";
		cout << "전공 : " << m_Major << "\n\n";
	}
private:
	string m_Name;
	int m_Number;
	string m_Major;
};

vector<CStudent> read_file(string& filename)
{
	ifstream f1;
	f1.open(filename);
	if (!f1.good())
	{
		throw FileNotFoundException(filename);
	}
	string k;
	CStudent a, b, c;
	string x, z;
	int y;
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			f1 >> x >> y >> z;
			a.setName(x);
			a.setNumber(y);
			a.setMajor(z);
		}
		else if (i == 1)
		{
			f1 >> x >> y >> z;
			b.setName(x);
			b.setNumber(y);
			b.setMajor(z);
		}
		else if (i == 2)
		{
			f1 >> x >> y >> z;
			c.setName(x);
			c.setNumber(y);
			c.setMajor(z);
		}
	}
	f1.close();
	vector<CStudent> ve = { a,b,c };
	return ve;
}
int main()
{
	string str;
	cout << "파일 이름 : ";
	cin >> str;

	try {
		vector <CStudent> numbers = read_file(str);
		for (CStudent value : numbers)
			value.Display();
	}
	catch (std::exception& e)
	{
		cout << e.what() << '\n';
	}
	return 0;
}

