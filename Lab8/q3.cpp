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
		cout << "�����ʰ��Դϴ�";
		exit(100);
	}
	else if (mPeople < 0)
	{
		cout << "�����̴��Դϴ�";
		exit(100);
	}
	return 0;
}
int Ktx::getPeople()
{
	for (int i = 1; i < 6; i++)
	{
		int a, b;
		cout << i << "���� : ";
		cin >> a >> b;
		if (i == 5 && b != 0)
		{
			cout << "���������� ź ��� ���� 0�̾�� �մϴ�." << endl;
			exit(100);
		}
		else if (i == 1 && a != 0)
		{
			cout << "��߿����� ���� ��� ���� 0�̾�� �մϴ�." << endl;
			exit(100);
		}
		station(a, b);

		if (mPeople>max)
		{
			max = mPeople;
		}
	}
	cout << "���� ���� ����� ž�� ���� ���� ��� �� = " << max << endl;
	return 0;
}

int main()
{
	Ktx k;
	k.getPeople();
	return 0;
}