#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	int a;
	cout << "홀수 숫자를 하나 입력해 주세요 : ";
	cin >> a;
	vector<vector<int>> k(a, vector<int>(a));
	int x = 0, y = a / 2 , z = 1;
	k[x][y] = z;
	int m, n;
	for (int i = 1; i < a*a; i++)
	{
		x = x - 1;
		y = y + 1;
		m = x+1;
		n = y-1;
		if (x < 0)
		{ 
			
			x = a - 1;
			
		}
		if (y > a - 1)
		{
			
			y = 0;
		}
		if (k[x][y] != 0)
		{
			x = m+1;
			y = n;
		}
		z++;
		
		k[x][y] = z;
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << setw(3) << k[i][j];
		}
		cout << endl;
	}

	return 0; 
}