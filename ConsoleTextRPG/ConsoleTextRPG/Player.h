#pragma once
#include "Header.h"

class Player
{
public:
	Player() = default;
	~Player() = default;
	Player(const Player& other) = default;
	Player& operator=(const Player& other) = delete;

	void make();
	void showInfo() const;
	void minusHp(int dmg);
	void earnMoney(int money);
	void earnExp(int exp);
	int getHp();
	int getDmg();
	int getMoney();
	string getName();
	bool levelUp();
	void recovery();

private:
	string _name = {};
	string _job = {};
	int _level = 1;
	int _exp = 0;
	const int _maxExp[19] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280};
	int _hp = 100;
	int _maxHp = 100;
	int _mp = 100;
	int _maxMp = 100;
	int _money = 0;
	int _str = 0;
	int _intel = 0;
	int _dmg = 0; // 직업에 따라 계산식이 정해짐 
	// 아이템 클래스
};