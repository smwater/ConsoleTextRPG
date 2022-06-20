#include "Battle.h"
#include "Plaza.h"

#define RUN_PERCENT 70

void Battle::process(Player& p1)
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

		cout << "1. �����ϱ�\n";
		cout << "2. ��������(70%)\n\n";

		cout << "�ൿ�� �Է����ּ��� : ";
		cin >> select;

		if (select == 1)
		{
			str = attack(p1, s1);
		}
		else
		{
			str = run(p1, s1, isRun);
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
			break;
		}

	} while (isRun != true);

	if (death == false)
	{
		Plaza plaza;
		plaza.update(p1);
	}
}

void Battle::win(Player& p1, Slime& s1)
{
	cout << p1.getName() << "��(��) " << s1.getName() << "���� �������� �¸��ߴ�!\n";
	cout << s1.getMoney() << "gold�� �����.\n\n";

	p1.earnExp(s1.getExp());
	p1.earnMoney(s1.getMoney());
	if (p1.levelUp())
	{
		cout << p1.getName() << "��(��) ������ �ߴ�!\n";
		cout << "�������� HP�� MP�� ȸ���˴ϴ�. �����մϴ�!\n\n";
	}

	cout << "�ڷ� ���ư����� �ƹ�Ű�� �Է��ϼ���...\n";
	string none;
	cin >> none;

	system("cls");
}

void Battle::defeat(Player& p1, Slime& s1)
{
	cout << p1.getName() << "��(��) " << s1.getName() << "���� �������� �й��ߴ�...\n\n";
	cout << "Game Over...\n";
	exit(0);
}

string Battle::run(Player& p1, Slime& s1, bool& isRun)
{
	string str;

	if ((rand() % 100 + 1) <= RUN_PERCENT)
	{
		system("cls");

		cout << p1.getName() << "��(��) ���������� �����ƴ�.\n\n";
		isRun = true;

		p1.showInfo();

		cout << "�����Ϸ��� �ƹ�Ű�� �Է��ϼ���...\n";
		string none;
		cin >> none;
	}
	else
	{
		str = p1.getName() + "��(��) ����ġ�� ���ߴ�. " + s1.getName() + "���� ���ݴ��ߴ�!\n\n";
		p1.minusHp(s1.getDmg());
	}

	return str;
}

string Battle::attack(Player& p1, Slime& s1)
{
	string str;

	s1.minusHp(p1.getDmg());
	p1.minusHp(s1.getDmg());
	str = p1.getName() + "��(��) " + s1.getName() + "�� �����ߴ�.\n\n";

	return str;
}