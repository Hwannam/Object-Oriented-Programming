#include <iostream>
#include <string>
#include <random>
#include <ctime>
using namespace std;

class Avengers
{
public:
	Avengers()
	{
		name = "";
		attack_point = 0;
		defense_point = 0;
		health = 0;
	}
	~Avengers() {}

	virtual void set(string _name, int _attack, int _defense, int _health)
	{
		name = _name;
		attack_point = _attack;
		defense_point = _defense;
		health = _health;
	}
	virtual int attack()
	{
		return attack_point;
	}
	virtual void defense(int _attack_point)
	{
		health = health - (_attack_point - defense_point);
		if (health < 0)
			health = 0;
	}
	virtual void print_info()
	{
		cout << "Name : " << name << endl;
		cout << "Attack_Point : " << attack_point << endl;
		cout << "Defense_Point : " << defense_point << endl;
		cout << "Health : " << health << endl;
	}
protected:
	string name;
	int attack_point;
	int defense_point;
	int health;
};

class Character : public Avengers
{
public:
	int get_health()
	{
		return health;
	}
};

int main()
{
	Character my_char;
	Character enemy_char;
	string my;
	
	cout << "Choose your character(IronMan, CaptainAmerica, Thor) : ";
	cin >> my;
	srand(time(NULL));
	int ran= rand() % 2;
	if (my == "IronMan")
	{
		my_char.set("IronMan", 70, 40, 100);
		if (ran == 0)
		{
			enemy_char.set("CaptainAmerica", 60, 50, 100);
		}
		else if (ran == 1)
		{
			enemy_char.set("Thor", 80, 30, 100);
		}
	}
	else if (my == "CaptainAmerica")
	{
		my_char.set("CaptainAmerica", 60, 50, 100);
		if (ran == 0)
		{
			enemy_char.set("IronMan", 70, 40, 100);
		}
		else if (ran == 1)
		{
			enemy_char.set("Thor", 80, 30, 100);
		}
	}
	else if (my == "Thor")
	{
		my_char.set("Thor", 80, 30, 100);
		if (ran == 0)
		{
			enemy_char.set("IronMan", 70, 40, 100);
		}
		else if (ran == 1)
		{
			enemy_char.set("CaptainAmerica", 60, 50, 100);
		}
	}
	cout << "--My Character--" << endl;
	my_char.print_info();
	cout << "--Enemy Character--" << endl;
	enemy_char.print_info();

	cout << endl << "--Battle--" << endl;
	cout << "My Life: " << my_char.get_health() << "\t" 
		<< "Enemy Life:" << enemy_char.get_health() << endl;

	int i = 1;
	while (1)
	{
		if (i % 2 != 0)
		{
			enemy_char.defense(my_char.attack());
			i++;
		}
		else if (i % 2 == 0)
		{
			my_char.defense(enemy_char.attack());
			i++;
		}

		cout << "My Life: " << my_char.get_health() << "\t"
			<< "Enemy Life:" << enemy_char.get_health() << endl;

		if (my_char.get_health() == 0)
		{
			cout << "You Lose!" << endl;
			break;
		}
		else if (enemy_char.get_health() == 0)
		{
			cout << "You Win!" << endl;
			break;
		}
	}
	return 0;
}