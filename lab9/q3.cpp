#include <iostream>
#include <random>
#include <ctime>
using namespace std;

void startGame(int* a, int* b)
{
	int count = 1;
	
	while (1)
	{   int st = 0 , ba = 0;
		cout << "========================= " << count << " =========================" << endl;
		while (1)
		{
			cout << "1 ~ 9 ������ ���� ������ �Է����ּ��� : ";
			cin >> a[0] >> a[1] >> a[2];

			if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2])
			{
				cout << "�ߺ��� ���ڸ� �Է��ϼ̽��ϴ�." << endl;
				continue;
			}
			else if (a[0] < 1 || a[0] >9 || a[1] < 1 || a[1] >9 || a[2] < 1 || a[2] >9)
			{
				cout << "1 ~ 9 ���� ���� ���ڸ� �Է��Ͽ� �ּ���." << endl;
				continue;
			}
			else
			{
				count++;
				break;
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (a[i] == b[j])
				{
					if (i == j)
					{
						st++;
					}
					else
					{
						ba++;
					}
				}
			}
		}
		if (st == 0 && ba == 0)
		{
			cout << "Out!" << endl << endl;
		}
		else
		{
            cout << st << " Strike.  " << ba << " Ball" << endl << endl;
		}
		
		if (st == 3)
		{
			cout << "�����Դϴ�!" << endl;
			break;
		}
		if (count == 10)
		{
			cout << "�й��߽��ϴ�." << endl;
			cout << "������ "<< b[0]<< " "<< b[1] <<" " << b[2] << " �Դϴ�." << endl;
			break;
		}

	}
}

int main()
{
	int input[3];
	int answer[3];

	srand(time(NULL));

	for (int i = 0; i < 3; i++)
	{
		answer[i] = rand() % 9 + 1;
		for (int j = 0; j < i; j++)
		{
			if (answer[i] == answer[j] && i != j)
			{
				i--;
			}
		}
	}

	startGame(input, answer);

	return 0; 
}