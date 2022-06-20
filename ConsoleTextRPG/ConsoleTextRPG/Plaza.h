#pragma once
#include "Header.h"
#include "Player.h"

class Plaza
{
public:
	Plaza() = default;
	~Plaza() = default;
	Plaza(const Plaza& other) = delete;
	Plaza& operator=(const Plaza& other) = delete;

	void update(Player& p1);
	
private:
	int _placeIndex = 0;
	void show() const;
};