#pragma once
#include "Header.h"

class Monster
{
private:
	string _name = {};
	int _level = 1;
	int _hp = 100;
	int _maxHp = 100;
	int _mp = 100;
	int _maxMp = 100;
	int _money = 0;
	int _dmg = 0;
};

class Slime : public Monster
{
public:
	void make();
	string getName();
	void showInfo();
	void minusHp(int dmg);
	int getDmg();
	int getHp();
	int getMoney();
	int getExp();

private:
	string _possibleName[3] = { "그린 슬라임", "블루 슬라임", "골드 슬라임" };
	string _name = "";
	int _level = 1;
	int _exp = 0;
	int _hp = 100;
	int _maxHp = 100;
	int _mp = 100;
	int _maxMp = 100;
	int _money = 0;
	int _dmg = 0;
};