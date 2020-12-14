#include <iostream>
#include <string>
using namespace std;

class Account
{
	public:
	string name, id;
	int balance;
	Account() {

	}
	Account (string a, string b, int c)
	{
		name = a;
		id = b.substr(0,4);
		balance = c;
	}
	
};
Account operator+(const Account& p1, const Account& p2) {
	Account result;
	result.name = p2.name;
	result.id = p2.id;
	result.balance = p1.balance + p2.balance;
	return result;
}
Account operator-(const Account& p1, const Account& p2) {
	Account result;
	result.name = p1.name;
	result.id = p1.id;
	result.balance = p1.balance - p2.balance;
	return result;
}

void operator<<(const Account p1, const Account p2) {
	cout << "학번: " << p1.id << "    이름 : " << p1.name << "    잔액 : " << p1.balance << endl;
}


int main()
{
	Account acnt[3] =
	{
		Account("신은섭", "2019204212", 10000),
		Account("김유민", "2012311060",0),
		Account("이강호", "2011102214", 5000),
	};

	string send, rec;
	while (1)
	{
		int se= -1;
		int re = -1;
		cout << "돈을 보낼 학생의 학번을 입력하세요: ";
		cin >> send;
		if (send== "종료") {
			cout << "종료합니다." << endl;
			acnt[0] << acnt[1];
			acnt[1] << acnt[2];
			acnt[2] << acnt[0];
			break;
		}
		cout << "돈을 받을 학생의 학번을 입력하세요: ";
		cin >> rec;
		if (send == rec)
		{
			cout << "학번이 동일합니다." << endl;
			continue;
		}
		else if (send != acnt[0].id && send != acnt[1].id && send != acnt[2].id)
		{
			cout << "보내는 학생 혹은 받는 학생의 학번이 존재하지 않습니다. 다시 입력해주세요." << endl;
			continue;
		}
		else if (rec != acnt[0].id && rec != acnt[1].id && rec != acnt[2].id)
		{
			cout << "보내는 학생 혹은 받는 학생의 학번이 존재하지 않습니다. 다시 입력해주세요." << endl;
			continue;
		}
		else
		{
			if (send == acnt[0].id)
			{
				if (acnt[0].balance == 0)
				{
					cout << "보내는 학생의 잔액이 부족합니다." << endl;
					continue;
				}
			}
			else if (send == acnt[1].id)
			{
				if (acnt[1].balance == 0)
				{
					cout << "보내는 학생의 잔액이 부족합니다." << endl;
					continue;
				}
			}
			else if (send == acnt[2].id)
			{
				if (acnt[2].balance == 0) {
					cout << "돈을 보내는 학생의 잔액이 부족합니다." << endl;
					continue;
				}
			}
		}
		for (int i = 0; i < 3; i++) {
			if (acnt[i].id == send) {
				se = i;
			}
			if (acnt[i].id == rec) {
				re = i;
			}
		}
		acnt[re] = (acnt[se] + acnt[re]);
		acnt[se] = (acnt[se] - acnt[se]);
		cout << "보낸 학생의 잔액 : "; acnt[se] << acnt[re];
		cout << "받은 학생의 잔액 : "; acnt[re] << acnt[se];
	}
		return 0;
	}