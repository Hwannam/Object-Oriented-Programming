#include <iostream>
#include <string>
using namespace std;

class CStudent
{
	
public:
	string b;
	int a;
	string c;
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
};
int main()
{
	CStudent s[3];
	int inputNumber;
	string inputName, inputMajor;
	int length = 0;

	while (1)
	{
		    
			cout << length+1 << " 번째 학생 입력" << endl;
			cout << "학번 : ";
			cin >> inputNumber;
			s[length].setNumber(inputNumber);
			cout << "이름 : ";
			cin >> inputName;
			s[length].setName(inputName);
			cout << "전공 : ";
			cin >> inputMajor;
			s[length].setMajor(inputMajor);

			switch (length)
			{
			case 0:
			{
				cout << "※입력 완료" << endl << endl;
				length++;
				break;
			}
			case 1:
			{
				if (s[1].a != s[0].a)
				{
					cout << "※입력 완료" << endl << endl;
					length++;
					break;
				}
				else
				{
					cout << "※중복된 학번이 존재합니다" << endl << endl;
					break;
				}
			}
			case 2:
			{
				if (s[2].a != s[1].a && s[0].a != s[2].a)
				{
					cout << "※입력 완료" << endl << endl;
					length++;
					break;
				}
				else
				{
					cout << "※중복된 학번이 존재합니다" << endl << endl;
					break;
				}

			}
			}

			if (length == 3)
			{
				cout << "----모든입력이 완료되었습니다----" << endl;
				for (int i = 0; i < 3; i++)
				{
					cout << i + 1 << "학생정보" << endl;
					s[i].Display();
				}
				break;
			}
	}

	return 0;
}