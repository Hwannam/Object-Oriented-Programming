#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int id;
	string department;
	int grade;
	int credit;
public:
	Student(string n = "default", unsigned int i =0, string d ="default", int g = 0, 
		int c = 0): name(n),id(i),department(d), grade(g), credit(c){}

	int Getter(int a)
	{
		switch(a)
		{
		case 0:
			return id;
			break;
		case 1:
			return grade;
			break;
		case 2:
			return credit;
			break;
		}
	}
	string Getter(char a)
	{
		if (a == 'z')
		{
			return name;
		}
		else if (a == 'd')
		{
			return department;
		}
	}
	void Setter(string n,int i, string d,int g, int c)
	{
		name = n;
		id = i;
		department = d;
		grade = g;
		credit = c;
	}
	virtual void print()
	{
		cout << "I'm student" << endl << endl;
	}
};

class Graduate : public Student
{
public: 
	bool type;
	double rate;
	string ty;
	Graduate(string n , unsigned int i, string d, int g ,int c, bool k, double u) 
		: type(k),rate(u)
	{
		Setter(n,i,d,g,c);
		if (type == false)
		{
			ty = "연구조교";
		}
		else if (type == true)
		{
			ty = "교육조교";
		}
	}
	void print() override
	{
		cout << "==============================" << endl;
		cout << "이    름 : " << Getter('z') << endl;
		cout << "학    번 : " << Getter(0) << endl;
		cout << "소속학과 : " << Getter('d') << endl;
		cout << "학    년 : " << Getter(1) << endl;
		cout << "이수학점 : " << Getter(2) << endl;
		cout << "조교유형 : " << ty << endl;
		cout << "장학비율 : " << rate << endl;
		cout << "==============================" << endl;
 	}
};

class UnderGraduate : public Student
{
public:
	string gn;
	UnderGraduate(string n, unsigned int i, string d, int g, int c, string w)
		:  gn(w)
	{
		Setter(n, i, d, g, c);
	}
	void print() override
	{
		cout << "==============================" << endl;
		cout << "이    름 : " << Getter('z') << endl;
		cout << "학    번 : " << Getter(0) << endl;
		cout << "소속학과 : " << Getter('d') << endl;
		cout << "학    년 : " << Getter(1) << endl;
		cout << "이수학점 : " << Getter(2) << endl;
		cout << "동아리명 : " << gn << endl;
		cout << "==============================" ;
	}
};

int main()
{
	Student Std;
	Graduate Kang("강석원", 2018311025, "컴퓨터공학과", 1, 18, false, 0.5);
	UnderGraduate Hong("홍길동", 20141111, "컴퓨터공학과", 2, 80, "알고리즘동아리");

	Std.print();
	Kang.print();
	Hong.print();

	return 0;
}