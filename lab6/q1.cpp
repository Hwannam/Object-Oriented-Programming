#include <iostream>
#include <string>
using namespace std;

class CStudent
{
	string b;
	int a;
	string c;
public:
	CStudent()
	{
		b = "홍길동";
		a = 2018000000;
		c = "컴퓨터공학과";
	}

	CStudent(int number, string name, string major) :
		a(number), b(name), c(major){}
	void Display()
	{
		cout << "학번 :" << a <<endl;
		cout << "이름 :" << b << endl;
		cout << "전공 :" << c << endl << endl;
	}
	void setNumber(int num)
	{
		a = num;
	}
	void setName(string name)
	{
		b = name;
	}
	void setMajor(string major)
	{
		c = major;
	}

	int getNumber()
	{
		return a;
	}
	string getName()
	{
		return b;
	}
	string getMajor()
	{
		return c;
	}


};
int main()
{
	CStudent s1;
	s1.Display();

	CStudent s2(1999000000, "공지철", "연극영화과");
	s2.Display();

	s1.setNumber(2006000000);
	s1.setName("민경훈");
	s1.setMajor("포스트모던");
	cout << "학번 :" << s1.getNumber() << endl;
	cout << "이름 :" << s1.getName() << endl;
	cout << "전공 :" << s1.getMajor() << endl;

	return 0;
}