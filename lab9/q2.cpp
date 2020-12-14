#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, b;
	cout << "두 단어를 입력해주세요 : ";
	cin >> a >> b;
	
	while (1)
	{
		int num = 0;
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = 0; j < b.size(); j++)
			{
				if (a[i] == b[j])
				{
					a.erase(a.begin() + i);
					b.erase(b.begin() + j);
					num++;
					break;
				}
			}
		}
		if (num == 0)
			break;
	}
	cout << a.size() + b.size();
	return 0; 
}