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
				cout << "이미 존재하는 ID입니다. \n종료합니다." << endl;
				exit(100);
			}
		}
		if (count == 3)
		{
			if (user[0].id == user[2].id || user[1].id == user[2].id)
			{
				cout << "이미 존재하는 ID입니다. \n종료합니다." << endl;
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
		if (searchId == "종료")
		{
			cout << "종료하겠습니다." << endl;
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
					cout << "로그인 되셨습니다." << endl;
					cout << "===============================" << endl << endl;
				}
				else
				{
					cout << "잘못된 ID거나 PASSWORD 입니다."<< endl;
					cout << "===============================" << endl;
				}
			}
			if (searchId == user[1].id)
			{
				if (searchPassword == user[1].password)
				{
					cout << "로그인 되셨습니다." << endl;
					cout << "===============================" << endl << endl;
				}
				else
				{
					cout << "잘못된 ID거나 PASSWORD 입니다." << endl;
					cout << "===============================" << endl;
				}
			}
			if (searchId == user[2].id)
			{
				if (searchPassword == user[2].password)
				{
					cout << "로그인 되셨습니다." << endl;
					cout << "===============================" << endl << endl;
				}
				else
				{
					cout << "잘못된 ID거나 PASSWORD 입니다." << endl;
					cout << "===============================" << endl;
				}
			}
		}
		else
		{
			cout << "잘못된 ID거나 PASSWORD 입니다." << endl;
			cout << "===============================" << endl;
		}
	}

	return 0;
}