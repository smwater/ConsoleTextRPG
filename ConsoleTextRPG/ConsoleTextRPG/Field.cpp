#include "Field.h"

void Field::update()
{
	do
	{
		show();

		cout << "�̵��� ����͸� �Է��ϼ��� : ";
		cin >> _placeIndex;
		system("cls");
	} while (_placeIndex != 1);

	// ��������
}

void Field::show() const
{
	cout << "�� �� �ִ� ����� ���\n\n";
	cout << "1. �������� ��\n\n";
}