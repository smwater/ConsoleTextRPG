#include "Hotel.h"
#include "Plaza.h"

#define HOTEL_COST 50

void Hotel::update(Player& p1)
{
	int _placeIndex = 0;
	do
	{
		p1.showInfo();
		show();

		cout << "�����ϼ��� : ";
		cin >> _placeIndex;
		system("cls");
	} while (_placeIndex < 1 || _placeIndex > 2);

	switch (_placeIndex)
	{
	case 1:
		rest(p1);
		break;
	}
	
	Plaza plaza;
	plaza.update(p1);
}

void Hotel::show()
{
	cout << "������ : �� �Լ�. ���� ���� �ʴ��ʴ� ��������.\n";
	cout << "������ : ���� ���ſ�? �Ϸ�㿡 50gold��.\n\n";

	cout << "1. ����. (HP�� MP Ǯ ȸ��)\n";
	cout << "2. ������.\n\n";
}

void Hotel::rest(Player& p1)
{
	if (p1.getMoney() >= HOTEL_COST)
	{
		p1.earnMoney(-HOTEL_COST);
		p1.recovery();

		p1.showInfo();
		cout << "�������� �޽��߽��ϴ�.\n";
		cout << "HP�� MP�� ȸ���Ǿ����ϴ�.\n\n";

		cout << "������ ���ư����� �ƹ�Ű�� �Է��ϼ���...\n";
		string none;
		cin >> none;

		system("cls");
	}
	else
	{
		kicked(p1);
	}
}

void Hotel::kicked(Player& p1)
{
	p1.showInfo();

	cout << "������ : ���� �� ������ �� �����ϴٸ�?\n";
	cout << "������ : �̿��� 50gold��. ������ �ٽ� �鷯�ֽÿ�.\n\n";

	cout << "������ ���ư����� �ƹ�Ű�� �Է��ϼ���...\n";
	string none;
	cin >> none;

	system("cls");
}