#pragma once
#include "Header.h"
#include "Player.h"
#include "Monster.h"

class Battle
{
public:
	Battle() = default;
	~Battle() = default;
	Battle(const Battle & other) = delete;
	Battle& operator=(const Battle & other) = delete;

	void process(Player& p1);
	void win(Player& p1, Slime s1);
	void defeat(Player& p1, Slime s1);
	string run(Player& p1, Slime& s1, bool& isRun);
	string attack(Player& p1, Slime& s1);

private:
};