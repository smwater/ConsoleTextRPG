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

		cout << "이동할 장소를 입력하세요 : ";
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
	cout << "갈 수 있는 장소 목록\n\n";
	cout << "1. 사냥터\n";
	cout << "2. 상점 (미완)\n";
	// cout << "3. 촌장의 집\n";	// 추가 구현하기
	cout << "3. 여관\n\n";
}