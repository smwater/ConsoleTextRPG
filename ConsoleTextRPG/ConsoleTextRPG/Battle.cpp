#include "Battle.h"
#include "Plaza.h"

#define RUN_PERCENT 70

void Battle::process(Player p1)
{
	Slime s1;
	s1.make();

	int select = 0;
	bool isRun = false;
	bool death = false;
	string str = "야생의 " + s1.getName() + "이 나타났다!!!\n\n";
	do
	{
		cout << str;

		p1.showInfo();
		cout << endl;
		s1.showInfo();
		cout << endl;

		cout << "1. 공격하기" << endl;
		cout << "2. 도망가기(70%)" << endl;

		cin >> select;

		if (select == 1)
		{
			s1.minusHp(p1.getDmg());
			p1.minusHp(s1.getDmg());
			str = p1.getName() + "은(는) " + s1.getName() + "을 공격했다.\n\n";
		}
		else
		{
			if ((rand() % 100 + 1) <= RUN_PERCENT)
			{
				str = p1.getName() + "은(는) 성공적으로 도망쳤다.\n\n";
				isRun = true;
			}
			else
			{
				str = p1.getName() + "은(는) 도망치지 못했다.\n\n";
				p1.minusHp(s1.getDmg());
			}
		}

		system("cls");

		if (p1.getHp() <= 0)
		{
			defeat(p1, s1);
			death = true;
		}
		if (s1.getHp() <= 0)
		{
			win(p1, s1);
			p1.earnExp(s1.getExp());
			p1.levelUp();
			p1.earnMoney(s1.getMoney());
			break;
		}

	} while (isRun == false);

	if (death == false)
	{
		p1.showInfo();
		Plaza plaza;
		plaza.update(p1);
	}
}

void Battle::win(Player p1, Slime s1)
{
	cout << p1.getName() << "은(는) " << s1.getName() << "과의 전투에서 승리했다!\n";
	cout << s1.getMoney() << "원을 얻었다.\n\n";

	p1.earnExp(s1.getExp());
	if (p1.levelUp())
	{
		cout << p1.getName() << "은(는) 레벨업 했다!\n";
		cout << "보상으로 HP와 MP가 회복됩니다. 축하합니다!\n\n";
	}

	cout << "뒤로 돌아가려면 아무키나 입력하세요...\n";
	string none;
	cin >> none;

	system("cls");
}

void Battle::defeat(Player p1, Slime s1)
{
	cout << p1.getName() << "은(는) " << s1.getName() << "과의 전투에서 패배했다...\n\n";
	cout << "Game Over...\n";
	exit(0);
}