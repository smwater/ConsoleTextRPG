#include "Game.h"

void Game::run()
{
	Start s;
	s.update();
	int select = s.getSelect();

	Player p1 = nextScene(select);

	Plaza p;
	p.update(p1);
}

Player Game::nextScene(int select) const
{
	if (select == 1)
	{
		// ĳ���� ����
		Player p1;
		p1.make();
		return p1;
	}
	else
	{
		cout << "������ ����Ǿ����ϴ�.\n";
		exit(0);
	}
}
