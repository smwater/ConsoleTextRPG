#include "Battle.h"
#include "Plaza.h"

void Battle::process(Player p1)
{
	Slime s1;
	s1.make();

	int select = 0;
	bool isRun = false;
	bool death = false;
	string str = "�߻��� " + s1.getName() + "�� ��Ÿ����!!!\n\n";
	do
	{
		cout << str;

		p1.showInfo();
		cout << endl;
		s1.showInfo();
		cout << endl;

		cout << "1. �����ϱ�" << endl;
		cout << "2. ��������(70%)" << endl;

		cin >> select;

		if (select == 1)
		{
			s1.minusHp(p1.getDmg());
			p1.minusHp(s1.getDmg());
			str = p1.getName() + "��(��) " + s1.getName() + "�� �����ߴ�.\n\n";
		}
		else
		{
			if ((rand() % 100 + 1) <= 70)
			{
				str = p1.getName() + "��(��) ���������� �����ƴ�.\n";
				isRun = true;
			}
			else
			{
				str = p1.getName() + "��(��) ����ġ�� ���ߴ�.\n";
				p1.minusHp(s1.getDmg());
			}
		}

		system("cls");

		if (p1.getHp() == 0)
		{
			defeat(p1, s1);
			death = true;
		}
		if (s1.getHp() == 0)
		{
			win(p1, s1);
			p1.setMoney(s1.getMoney());
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
	cout << p1.getName() << "��(��) " << s1.getName() << "���� �������� �¸��ߴ�!\n";
	cout << s1.getMoney() << "���� �����.\n\n";

	cout << "�ڷ� ���ư����� �ƹ�Ű�� �Է��ϼ���...\n";
	string none;
	cin >> none;

	system("cls");
}

void Battle::defeat(Player p1, Slime s1)
{
	cout << p1.getName() << "��(��) " << s1.getName() << "���� �������� �й��ߴ�...\n\n";
	cout << "Game Over...\n";
	exit(0);
}