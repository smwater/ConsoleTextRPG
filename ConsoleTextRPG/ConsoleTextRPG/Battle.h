#pragma once
#include "Header.h"
#include "Player.h"

class Battle
{
public:
	Battle() = default;
	~Battle() = default;
	Battle(const Battle & other) = delete;
	Battle& operator=(const Battle & other) = delete;

	void process(Player p1);
private:
};