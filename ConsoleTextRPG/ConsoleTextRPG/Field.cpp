#include "Field.h"
#include "Battle.h"

void Field::update(Player p1)
{
	do
	{
		show();

		cout << "이동할 사냥터를 입력하세요 : ";
		cin >> _placeIndex;
		system("cls");
	} while (_placeIndex != 1);

	// 전투시작
	Battle b;
	b.process(p1);
}

void Field::show() const
{
	cout << "갈 수 있는 사냥터 목록\n\n";
	cout << "1. 슬라임의 숲\n\n";
}