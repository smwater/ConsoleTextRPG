#include "Field.h"
#include "Battle.h"

void Field::update(Player p1)
{
	do
	{
		show();

		cout << "�̵��� ����͸� �Է��ϼ��� : ";
		cin >> _placeIndex;
		system("cls");
	} while (_placeIndex != 1);

	// ��������
	Battle b;
	b.process(p1);
}

void Field::show() const
{
	cout << "�� �� �ִ� ����� ���\n\n";
	cout << "1. �������� ��\n\n";
}