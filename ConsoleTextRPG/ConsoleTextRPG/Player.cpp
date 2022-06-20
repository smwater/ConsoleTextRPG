#include "Player.h"
#include "Plaza.h"

void Player::make()
{
	cout << "캐릭터의 이름을 입력하세요 : ";
	cin >> _name;
	
	int jobNum = 0;
	do
	{
		cout << "\n현재 가능한 직업의 목록\n";
		cout << "1. 전사\n";
		cout << "2. 마법사\n";
		cout << "\n캐릭터의 직업을 골라주세요 : ";
		cin >> jobNum;
	} while (jobNum != 1 && jobNum != 2);

	if (jobNum == 1)
	{
		_job = "전사";
		_str = 5;
		_dmg = _str * 2;
	}
	else 
	{ 
		_job = "마법사"; 
		_intel = 5;
		_dmg = _intel * 2;
	}

	cout << "\n캐릭터 생성이 완료되었습니다.\n";
	system("cls");
}

void Player::showInfo() const
{
	if (_level < 20)
	{
		cout << "캐릭터 이름 : " << _name << " | Lv : " << _level << " | Exp : " << _exp << "/" << _maxExp[_level - 1] << "\n";
	}
	else
	{
		cout << "캐릭터 이름 : " << _name << " | Max Lv | Exp : " << _exp << " /0\n";
	}
	cout << "HP : " << _hp << "/" << _maxHp  << " | MP : " << _mp << "/" << _maxMp << " | 소지금 : " << _money << "\n";
	cout << "힘 : " << _str << " | 지능 : " << _intel << " | 공격력 : " << _dmg << "\n\n";
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