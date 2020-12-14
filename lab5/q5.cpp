#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>
using namespace std;

void set(vector<vector<int>>& m)
{
  
  for (int i = 0;i< m.size(); i++)
	{
		
		for (int j = 0;j<m[i].size(); j++)
		{
			
			m[i][j] = rand() % 19 - 9;
		}
	}
}

void print(vector<vector<int>>& m)
{
	
	for (int i = 0;i< m.size(); i++)
	{

		for (int j = 0; j < m[i].size(); j++)
		{

			cout << setw(5) << m[i][j];
		}
		cout << endl;
	}
}

void calc(vector<vector<int>>& a, vector<vector<int>>& b, vector<vector<int>>& c)
{

	for (int i = 0; i < a.size(); i++)
	{

		for (int j = 0; j < a[i].size(); j++)
		{
			for (int k = 0; k < c.size(); k++)
			{
				a[i][j] += b[i][k] * c[k][j];
			}

		}
	}
}
int main()
{
	int a, b, c, d;
	cout << "A�� ��, ���� ũ�⸦ �Է����ּ��� : ";
	cin >> a>>b;
	cout << "B�� ��, ���� ũ�⸦ �Է����ּ��� : ";
	cin >> c >> d;

	vector<vector<int>> x(a, vector<int>(b));
	vector<vector<int>> y(c, vector<int>(d));
	vector<vector<int>> z(a, vector<int>(d));
	srand(time(NULL));
	set(x);
	set(y);

	cout << endl << "A ��� :" << endl;
	print(x);
	cout << endl<<"B ��� :" << endl;
	print(y);
	if (b != c)
	{
		cout <<endl << "�� ����� ���� �� �����ϴ�.";
		exit(100);
	}
	calc(z, x, y);
	cout << endl<< "AB ����� :" << endl;
	print(z);
}