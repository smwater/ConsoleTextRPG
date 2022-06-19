#include "Plaza.h"
#include "Field.h"

void Plaza::update()
{
	do
	{
		show();

		cout << "이동할 장소를 입력하세요 : ";
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
	cout << "갈 수 있는 장소 목록\n\n";
	cout << "1. 사냥터\n";
	cout << "2. 상점\n";
	cout << "3. 촌장의 집\n";
	cout << "4. 여관\n\n";
}