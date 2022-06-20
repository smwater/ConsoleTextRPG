#pragma once
#include "Header.h"
#include "Player.h"

class Field
{
public:
	Field() = default;
	~Field() = default;
	Field(const Field& other) = delete;
	Field& operator=(const Field& other) = delete;

	void update(Player p1);

private:
	int _placeIndex = 0;
	void show() const;
};