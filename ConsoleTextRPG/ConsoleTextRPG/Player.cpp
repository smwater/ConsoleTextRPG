#include "Player.h"

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

	if (jobNum == 1) { _job = "����"; }
	else { _job = "������"; }

	cout << "\nĳ���� ������ �Ϸ�Ǿ����ϴ�.\n";
}