#include <iostream>
#include <string>
using namespace std;

int sum = 0;
class Account
{
	public:
	string name, id;
	int balance;
	Account()
	{

	}
	~Account() {
		sum += balance;
	}
	
};

int main()
{
	cout << "�� �л� �� �Է�: ";
	int i, c;
	string a, b;
	cin >> i;
	Account *acnt = new Account[i];
	for (int k = 0; k < i; k++)
	{
		cout << k + 1 << "��° �л� ���� �Է� : �й� : ";
		cin >> a;
		acnt[k].id = a;
		if (k >= 1)
		{
			for (int x = 0; x < k ; x++)
			{
				if (acnt[k].id == acnt[x].id) 
				{
					cout << "�����մϴ�." << endl;
					exit(100);
				}
			}
		}
		cout << endl<<"�̸� : ";
		cin >> b;
		cout << endl<<"�ܾ� : ";
		cin >> c;
		
		acnt[k].balance = c;

		cout << "=============================" << endl << endl;
	}
	delete[] acnt;
	cout << "ȸ���� �ݾ� : " << sum << endl;

	return 0;
	}