#include <iostream>

using namespace std;


int main()
{
	while (1)
	{
		int a;
		cout << "Please enter number of values to process : ";
		cin >> a;

		if (a < 1)
			break;

		int *x = new int[a];
		cout << "Please enter numbers : ";
		for (int i = 0; i < a; i++)
		{
			cin >> x[i];
		}
        
		int count2 = 0;
		
		for (int i = 1; i <= a; i++)
		{
			int count = 0;
			
			for (int j = 0; j < a; j++)
			{
			
				if (x[j] == i)
				{
					count++;
					count2++;
				
				}
				
			}
			if (count == 0)
			{
				cout << "False" << endl << endl;
				break;
			}
			else if (count > 1)
			{
				cout << "False" << endl << endl;
				break;
			}
			else if(count2 ==a)
			{
				cout << "True" <<endl << endl;
				break;
			}
			
		}
		
	}

}