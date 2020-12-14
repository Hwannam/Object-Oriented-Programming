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
	cout << "�й�: " << p1.id << "    �̸� : " << p1.name << "    �ܾ� : " << p1.balance << endl;
}


int main()
{
	Account acnt[3] =
	{
		Account("������", "2019204212", 10000),
		Account("������", "2012311060",0),
		Account("�̰�ȣ", "2011102214", 5000),
	};

	string send, rec;
	while (1)
	{
		int se= -1;
		int re = -1;
		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> send;
		if (send== "����") {
			cout << "�����մϴ�." << endl;
			acnt[0] << acnt[1];
			acnt[1] << acnt[2];
			acnt[2] << acnt[0];
			break;
		}
		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> rec;
		if (send == rec)
		{
			cout << "�й��� �����մϴ�." << endl;
			continue;
		}
		else if (send != acnt[0].id && send != acnt[1].id && send != acnt[2].id)
		{
			cout << "������ �л� Ȥ�� �޴� �л��� �й��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���." << endl;
			continue;
		}
		else if (rec != acnt[0].id && rec != acnt[1].id && rec != acnt[2].id)
		{
			cout << "������ �л� Ȥ�� �޴� �л��� �й��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���." << endl;
			continue;
		}
		else
		{
			if (send == acnt[0].id)
			{
				if (acnt[0].balance == 0)
				{
					cout << "������ �л��� �ܾ��� �����մϴ�." << endl;
					continue;
				}
			}
			else if (send == acnt[1].id)
			{
				if (acnt[1].balance == 0)
				{
					cout << "������ �л��� �ܾ��� �����մϴ�." << endl;
					continue;
				}
			}
			else if (send == acnt[2].id)
			{
				if (acnt[2].balance == 0) {
					cout << "���� ������ �л��� �ܾ��� �����մϴ�." << endl;
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
		cout << "���� �л��� �ܾ� : "; acnt[se] << acnt[re];
		cout << "���� �л��� �ܾ� : "; acnt[re] << acnt[se];
	}
		return 0;
	}