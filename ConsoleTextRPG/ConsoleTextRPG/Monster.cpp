#include "Monster.h"

void Slime::make()
{
	int random = rand() % 100 + 1;

	if (random < 60)
	{
		_name = _possibleName[0];
		_hp = 50;
		_maxHp = 50;
		_mp = 50;
		_maxMp = 50;
		_money = 30;
		_dmg = 5;
	}
	else if (random < 90)
	{
		_name = _possibleName[1];
		_hp = 70;
		_maxHp = 70;
		_mp = 70;
		_maxMp = 70;
		_money = 50;
		_dmg = 10;
	}
	else
	{
		_name = _possibleName[2];
		_hp = 50;
		_maxHp = 50;
		_mp = 50;
		_maxMp = 50;
		_money = 100;
		_dmg = 1;
	}
}

string Slime::getName()
{
	if (_name == _possibleName[2])
	{
		return "행운 골드 슬라임";
	}
	
	return _name;
}

void Slime::showInfo()
{
	cout << "몬스터 이름 : " << _name << " | Lv : " << _level << " | 공격력 : " << _dmg << "\n";
	cout << "HP : " << _hp << "/" << _maxHp << " | MP : " << _mp << "/" << _maxMp << " | 소지금 : " << _money << "\n";
}

int Slime::getHp()
{
	return _hp;
}

void Slime::minusHp(int dmg)
{
	_hp -= dmg;
}

int Slime::getDmg()
{
	return _dmg;
}

int Slime::getMoney()
{
	return _money;
}