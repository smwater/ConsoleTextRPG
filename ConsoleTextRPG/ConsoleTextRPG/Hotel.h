#pragma once
#include "Header.h"
#include "Player.h"

class Hotel
{
public:
	void update(Player& p1);
	void show();
	void rest(Player& p1);
	void kicked(Player& p1);
};