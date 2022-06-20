#pragma once
#include "Header.h"
#include "Field.h"
#include "Player.h"
#include "Plaza.h"
#include "Start.h"

class Game
{
public:
	Game() = default;
	~Game() = default;
	Game(const Game& other) = delete;
	Game& operator=(const Game& other) = delete;

	void run();
	Player nextScene(int select) const;

private:

};