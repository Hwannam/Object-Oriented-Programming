#include <iostream>
#include <vector>
#include <ctime>
#include <random>
using namespace std;

int main()
{
	vector<int> list;
	srand(time(NULL));
	int r = rand() % 100 + 1;
		for (int i = 0; i < r; i++)
		{
			list.push_back(i);
		}
		int cnt = -1;
		while (1)
		{
			cnt++;
			try
			{
				list.at(cnt) = cnt;
			}
			catch (exception& e)
			{
				cout << "현재 list는 " << cnt << "의 크기를 가지고 있다" << endl;
				break;			
			}
		}
	return 0;
}