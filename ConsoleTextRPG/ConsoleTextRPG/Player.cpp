#include "Player.h"
#include "Plaza.h"

void Player::make()
{
	cout << "ĳ������ �̸��� �Է��ϼ��� : ";
	cin >> _name;
	
	int jobNum = 0;
	do
	{
		cout << "\n���� ������ ������ ���\n";
		cout << "1. ����\n";
		cout << "2. ������\n";
		cout << "\nĳ������ ������ ����ּ��� : ";
		cin >> jobNum;
	} while (jobNum != 1 && jobNum != 2);

	if (jobNum == 1)
	{
		_job = "����";
		_str = 5;
		_dmg = _str * 2;
	}
	else 
	{ 
		_job = "������"; 
		_intel = 5;
		_dmg = _intel * 2;
	}

	cout << "\nĳ���� ������ �Ϸ�Ǿ����ϴ�.\n";
	system("cls");

	Plaza p;
	
	p.update();
}

void Player::showInfo() const
{
	cout << "ĳ���� �̸� : " << _name << "|| Lv : " << _level << endl;
}