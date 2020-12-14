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
	cout << "A의 행, 열의 크기를 입력해주세요 : ";
	cin >> a>>b;
	cout << "B의 행, 열의 크기를 입력해주세요 : ";
	cin >> c >> d;

	vector<vector<int>> x(a, vector<int>(b));
	vector<vector<int>> y(c, vector<int>(d));
	vector<vector<int>> z(a, vector<int>(d));
	srand(time(NULL));
	set(x);
	set(y);

	cout << endl << "A 행렬 :" << endl;
	print(x);
	cout << endl<<"B 행렬 :" << endl;
	print(y);
	if (b != c)
	{
		cout <<endl << "두 행렬을 곱할 수 없습니다.";
		exit(100);
	}
	calc(z, x, y);
	cout << endl<< "AB 곱행렬 :" << endl;
	print(z);
}