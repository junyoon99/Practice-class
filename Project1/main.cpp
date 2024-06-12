#include <iostream>

class Sword;

class Jewel
{
public:
	void Socket(Sword &s);

};

class Sword
{
	friend class Warrior;
	friend void EnhanceSword(Sword& s);

	friend void Jewel::Socket(Sword& s);
private:
	int mAttackDaamage;
public:
	Sword(int damage) : mAttackDaamage(damage) {}
};

class Warrior
{
private:
	int mValue2;
public:
	void Attack(Sword& weapon) 
	{
		std::cout << weapon.mAttackDaamage << std::endl;
	}
};

void Jewel::Socket(Sword& s)
{
	std::cout << s.mAttackDaamage << "adf" << std::endl;
}

void EnhanceSword(Sword &s) 
{
	s.mAttackDaamage += s.mAttackDaamage;
}

int main() 
{
	Sword shortsword(10);
	Sword longSword(100);
	Warrior player;

	player.Attack(shortsword);

	EnhanceSword(shortsword);
	player.Attack(shortsword);
}