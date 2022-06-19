#pragma once
#include "Header.h"

class Player
{
public:
	Player() = default;
	~Player() = default;
	Player(const Player& other) = delete;
	Player& operator=(const Player& other) = delete;

	void make();
	void showInfo() const;

private:
	string _name = {};
	string _job = {};
	int _level = 1;
	int _exp = 0;
	int _hp = 10;
	int _maxHp = 10;
	int _mp = 10;
	int _maxMp = 10;
	int _str = 0;
	int _intel = 0;
	int _dmg = 0; // 직업에 따라 계산식이 정해짐 
	// 아이템 클래스
};