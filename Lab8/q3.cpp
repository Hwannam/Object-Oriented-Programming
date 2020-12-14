#include <iostream>
using namespace std;

class Train
{
public: 
	Train(){}
	Train(int people)
	{
		mPeople = people;
	}
	~Train() {}
	virtual int station(int takeOff, int takeOn);
protected:
	int mPeople;
};

int Train::station(int takeOff, int takeOn)
{
	mPeople = mPeople - takeOff + takeOn;
	return 0;
}

class Ktx : public Train
{
public:
	int max=0;
	Ktx() : Train(0){}
	Ktx(int people) : Train(people)
	{}
	~Ktx(){}

	int station(int takeOff, int takeOn);
	int getPeople();
};

int Ktx::station(int takeOff, int takeOn)
{
	Train::station(takeOff, takeOn);
	if (mPeople > 300)
	{
		cout << "정원초과입니다";
		exit(100);
	}
	else if (mPeople < 0)
	{
		cout << "정원미달입니다";
		exit(100);
	}
	return 0;
}
int Ktx::getPeople()
{
	for (int i = 1; i < 6; i++)
	{
		int a, b;
		cout << i << "번역 : ";
		cin >> a >> b;
		if (i == 5 && b != 0)
		{
			cout << "종착역에서 탄 사람 수는 0이어야 합니다." << endl;
			exit(100);
		}
		else if (i == 1 && a != 0)
		{
			cout << "출발역에서 내린 사람 수는 0이어야 합니다." << endl;
			exit(100);
		}
		station(a, b);

		if (mPeople>max)
		{
			max = mPeople;
		}
	}
	cout << "가장 많은 사람이 탑승 했을 때의 사람 수 = " << max << endl;
	return 0;
}

int main()
{
	Ktx k;
	k.getPeople();
	return 0;
}