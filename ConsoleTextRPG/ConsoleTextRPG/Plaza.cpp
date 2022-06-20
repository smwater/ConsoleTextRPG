#include "Plaza.h"
#include "Field.h"
#include "Player.h"
#include "Hotel.h"

void Plaza::update(Player& p1)
{
	do
	{
		p1.showInfo();
		show();

		cout << "�̵��� ��Ҹ� �Է��ϼ��� : ";
		cin >> _placeIndex;
		system("cls");
	} while (_placeIndex < 1 || _placeIndex > 3);

	switch (_placeIndex)
	{
	case 1:
	{
		Field f;
		f.update(p1);
		break;
	}
	case 3:
		Hotel h;
		h.update(p1);
	}
}

void Plaza::show() const
{
	cout << "�� �� �ִ� ��� ���\n\n";
	cout << "1. �����\n";
	cout << "2. ���� (�̿�)\n";
	// cout << "3. ������ ��\n";	// �߰� �����ϱ�
	cout << "3. ����\n\n";
}