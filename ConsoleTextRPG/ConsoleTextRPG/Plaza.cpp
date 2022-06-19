#include "Plaza.h"
#include "Field.h"

void Plaza::update()
{
	do
	{
		show();

		cout << "�̵��� ��Ҹ� �Է��ϼ��� : ";
		cin >> _placeIndex;
		system("cls");
	} while (_placeIndex < 1 || _placeIndex > 4);

	switch (_placeIndex)
	{
	case 1:
	{
		Field f;
		f.update();
		break;
	}
	case 2:
		cout << 2;
		break;
	case 3:
		cout << 3;
		break;
	case 4:
		cout << 4;
		break;
	}
}

void Plaza::show() const
{
	cout << "�� �� �ִ� ��� ���\n\n";
	cout << "1. �����\n";
	cout << "2. ����\n";
	cout << "3. ������ ��\n";
	cout << "4. ����\n\n";
}