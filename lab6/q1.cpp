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
		b = "ȫ�浿";
		a = 2018000000;
		c = "��ǻ�Ͱ��а�";
	}

	CStudent(int number, string name, string major) :
		a(number), b(name), c(major){}
	void Display()
	{
		cout << "�й� :" << a <<endl;
		cout << "�̸� :" << b << endl;
		cout << "���� :" << c << endl << endl;
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

	CStudent s2(1999000000, "����ö", "���ؿ�ȭ��");
	s2.Display();

	s1.setNumber(2006000000);
	s1.setName("�ΰ���");
	s1.setMajor("����Ʈ���");
	cout << "�й� :" << s1.getNumber() << endl;
	cout << "�̸� :" << s1.getName() << endl;
	cout << "���� :" << s1.getMajor() << endl;

	return 0;
}