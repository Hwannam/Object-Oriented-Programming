#include <iostream>
#include <string>
using namespace std;

class User
{
public:
	string id, password;

};

int main()
{
	User user[3];
	string id, password, searchId, searchPassword;
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "============  " << i + 1 << "  ============" << endl;
		cout << "id : ";
		cin >> id;
		user[i].id = id;
		count++;
		if(count ==2)
		{
			if (user[0].id == user[1].id)
			{
				cout << "�̹� �����ϴ� ID�Դϴ�. \n�����մϴ�." << endl;
				exit(100);
			}
		}
		if (count == 3)
		{
			if (user[0].id == user[2].id || user[1].id == user[2].id)
			{
				cout << "�̹� �����ϴ� ID�Դϴ�. \n�����մϴ�." << endl;
				exit(100);
			}
		}

		cout << "password : ";
		cin >> password;
		user[i].password = password;
		cout << "=============================" << endl << endl;;
	}

	while (1)
	{
		cout << "============ Login ============" << endl << endl;
		cout << "Id : ";
		cin >> searchId;
		if (searchId == "����")
		{
			cout << "�����ϰڽ��ϴ�." << endl;
			break;
		}
		cout << "Password : ";
		cin >> searchPassword;

		if (searchId == user[0].id || searchId == user[1].id || searchId == user[2].id)
		{
			if (searchId == user[0].id)
			{
				if (searchPassword == user[0].password)
				{
					cout << "�α��� �Ǽ̽��ϴ�." << endl;
					cout << "===============================" << endl << endl;
				}
				else
				{
					cout << "�߸��� ID�ų� PASSWORD �Դϴ�."<< endl;
					cout << "===============================" << endl;
				}
			}
			if (searchId == user[1].id)
			{
				if (searchPassword == user[1].password)
				{
					cout << "�α��� �Ǽ̽��ϴ�." << endl;
					cout << "===============================" << endl << endl;
				}
				else
				{
					cout << "�߸��� ID�ų� PASSWORD �Դϴ�." << endl;
					cout << "===============================" << endl;
				}
			}
			if (searchId == user[2].id)
			{
				if (searchPassword == user[2].password)
				{
					cout << "�α��� �Ǽ̽��ϴ�." << endl;
					cout << "===============================" << endl << endl;
				}
				else
				{
					cout << "�߸��� ID�ų� PASSWORD �Դϴ�." << endl;
					cout << "===============================" << endl;
				}
			}
		}
		else
		{
			cout << "�߸��� ID�ų� PASSWORD �Դϴ�." << endl;
			cout << "===============================" << endl;
		}
	}

	return 0;
}