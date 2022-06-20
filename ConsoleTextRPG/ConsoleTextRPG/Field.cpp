#include "Field.h"
#include "Battle.h"
#include "Plaza.h"

void Field::update(Player p1)
{
	do
	{
		p1.showInfo();
		show();

		cout << "�̵��� ��Ҹ� �Է��ϼ��� : ";
		cin >> _placeIndex;
		system("cls");
	} while (_placeIndex < 1 && _placeIndex > 2);

	switch (_placeIndex)
	{
	case 1:
		// ��������
		Battle b;
		b.process(p1);
		break;
	case 2:
		Plaza p;
		p.update(p1);
	}
}

void Field::show() const
{
	cout << "�� �� �ִ� ����� ���\n\n";
	cout << "1. �������� ��\n\n";

	cout << "2. ���ư���\n\n";
}