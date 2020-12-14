#include <iostream>
#include <fstream>
#include <random>
#include <ctime>
using namespace std;

int main()
{
	ofstream file;
	file.open("temp.txt");

	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			file << rand() % 101 << " ";
		}
		file << endl;
	}
	file.close();
	
	return 0;
}