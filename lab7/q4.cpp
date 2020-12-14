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
	cout << "총 학생 수 입력: ";
	int i, c;
	string a, b;
	cin >> i;
	Account *acnt = new Account[i];
	for (int k = 0; k < i; k++)
	{
		cout << k + 1 << "번째 학생 계좌 입력 : 학번 : ";
		cin >> a;
		acnt[k].id = a;
		if (k >= 1)
		{
			for (int x = 0; x < k ; x++)
			{
				if (acnt[k].id == acnt[x].id) 
				{
					cout << "종료합니다." << endl;
					exit(100);
				}
			}
		}
		cout << endl<<"이름 : ";
		cin >> b;
		cout << endl<<"잔액 : ";
		cin >> c;
		
		acnt[k].balance = c;

		cout << "=============================" << endl << endl;
	}
	delete[] acnt;
	cout << "회수된 금액 : " << sum << endl;

	return 0;
	}