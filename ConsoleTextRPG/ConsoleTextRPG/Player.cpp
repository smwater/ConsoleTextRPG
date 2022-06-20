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
}

void Player::showInfo() const
{
	if (_level < 20)
	{
		cout << "ĳ���� �̸� : " << _name << " | Lv : " << _level << " | Exp : " << _exp << "/" << _maxExp[_level - 1] << "\n";
	}
	else
	{
		cout << "ĳ���� �̸� : " << _name << " | Max Lv | Exp : " << _exp << " /0\n";
	}
	cout << "HP : " << _hp << "/" << _maxHp  << " | MP : " << _mp << "/" << _maxMp << " | ������ : " << _money << "\n";
	cout << "�� : " << _str << " | ���� : " << _intel << " | ���ݷ� : " << _dmg << "\n\n";
}

void Player::minusHp(int dmg)
{
	_hp -= dmg;
}

void Player::setMoney(int money)
{
	_money = money;
}

void Player::setExp(int exp)
{
	_exp = exp;
}

int Player::getHp()
{
	return _hp;
}

int Player::getDmg()
{
	return _dmg;
}

string Player::getName()
{
	return _name;
}

bool Player::levelUp()
{
	if (_exp >= _maxExp[_level - 1])
	{
		_exp -= _maxExp[_level - 1];
		_level++;

		_hp = _maxHp;
		_mp = _maxMp;

		return true;
	}

	return false;
}