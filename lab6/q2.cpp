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
};
int main()
{
	CStudent s[3];
	int inputNumber;
	string inputName, inputMajor;
	int length = 0;

	while (1)
	{
		    
			cout << length+1 << " ��° �л� �Է�" << endl;
			cout << "�й� : ";
			cin >> inputNumber;
			s[length].setNumber(inputNumber);
			cout << "�̸� : ";
			cin >> inputName;
			s[length].setName(inputName);
			cout << "���� : ";
			cin >> inputMajor;
			s[length].setMajor(inputMajor);

			switch (length)
			{
			case 0:
			{
				cout << "���Է� �Ϸ�" << endl << endl;
				length++;
				break;
			}
			case 1:
			{
				if (s[1].a != s[0].a)
				{
					cout << "���Է� �Ϸ�" << endl << endl;
					length++;
					break;
				}
				else
				{
					cout << "���ߺ��� �й��� �����մϴ�" << endl << endl;
					break;
				}
			}
			case 2:
			{
				if (s[2].a != s[1].a && s[0].a != s[2].a)
				{
					cout << "���Է� �Ϸ�" << endl << endl;
					length++;
					break;
				}
				else
				{
					cout << "���ߺ��� �й��� �����մϴ�" << endl << endl;
					break;
				}

			}
			}

			if (length == 3)
			{
				cout << "----����Է��� �Ϸ�Ǿ����ϴ�----" << endl;
				for (int i = 0; i < 3; i++)
				{
					cout << i + 1 << "�л�����" << endl;
					s[i].Display();
				}
				break;
			}
	}

	return 0;
}