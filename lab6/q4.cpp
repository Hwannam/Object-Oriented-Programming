#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student
{
	string name;
	int num;
	string major;

	vector<string> subject;
	vector<char> result;
public:
	Student(const string& a, const int b, const string&  c) :
		name(a), num(b), major(c)
	{
	}
	Student() :
		name("default"), num(0), major("depart")
	{
	}

	void setName(string x)
	{
		name = x;
	}
	void setID(int y)
	{
		num = y;
	}
	void setdept(string z)
	{
		major = z;
	}
	void print()
	{
		cout << name << " " << num << " " << major << endl;
	}
	void addGrade(string q, char w)
	{
		subject.push_back(q);
		result.push_back(w);
	}
	void printGrades()
	{
		for (int i = 0; i < subject.size(); i++)
		{
			cout << subject[i] << " " << result[i] << endl;
		}
		cout << "GPA : " << getGPA();
	}
	float getGPA()
	{
		float sum = 0;
		for (int i = 0; i < result.size(); i++)
		{
			if (result[i] == 'A')
			{
				sum += 4;
			}
			else if (result[i] == 'B')
			{
				sum += 3;
			}
			else if (result[i] == 'C')
			{
				sum += 2;
			}
			else if (result[i] == 'D')
			{
				sum += 1;
			}
			else if (result[i] == 'F')
			{
				sum += 0;
			}
		}
		return sum / result.size();
	}
	void getYear(int year)
	{
		int y = num / 1000000;
		if (y == year)
		{
			cout << "Freshmen(1학년)" << endl;
		}
		else if (y - year == -1)
		{
			cout << "Sophomore(2학년)" << endl;
		}
		else if (y - year == -2)
		{
			cout << "Junior(3학년)" << endl;
		}
		else if (y - year == -4)
		{
			cout << "Senior(4학년)" << endl;
		}
		else if (y - year <= -5)
		{
			cout << "About to graduate(5학년 이상)" << endl;
		}
	}
};

int main()
{
	Student Harry("Harry", 2017310973, "CS");
	Harry.print();
	Harry.getYear(2019);
	Harry.addGrade("programming", 'A');
	Harry.addGrade("Basic Circuit", 'B');
	Harry.printGrades();
	cout << "\n\n";

	Student ron;
	ron.print();
	cout << "\n";
	ron.setName("Ron");
	ron.setID(2014103959);
	ron.setdept("EE");
	ron.print();
	ron.getYear(2019);
	ron.addGrade("Computer Architecture", 'B');
	ron.addGrade("Maching Learning", 'B');
	ron.addGrade("Computer Vision", 'C');
	ron.printGrades();

	return 0;
}