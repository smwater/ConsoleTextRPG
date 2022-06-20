#include "Field.h"
#include "Battle.h"
#include "Plaza.h"

void Field::update(Player p1)
{
	do
	{
		p1.showInfo();
		show();

		cout << "이동할 장소를 입력하세요 : ";
		cin >> _placeIndex;
		system("cls");
	} while (_placeIndex < 1 && _placeIndex > 2);

	switch (_placeIndex)
	{
	case 1:
		// 전투시작
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
	cout << "갈 수 있는 사냥터 목록\n\n";
	cout << "1. 슬라임의 숲\n\n";

	cout << "2. 돌아가기\n\n";
}