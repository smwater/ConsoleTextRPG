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

		cout << "선택하세요 : ";
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
	cout << "주인장 : 잘 왔소. 몸이 완전 너덜너덜 해졌구만.\n";
	cout << "주인장 : 쉬고 갈거요? 하룻밤에 50gold요.\n\n";

	cout << "1. 쉰다. (HP와 MP 풀 회복)\n";
	cout << "2. 나간다.\n\n";
}

void Hotel::rest(Player& p1)
{
	if (p1.getMoney() >= HOTEL_COST)
	{
		p1.earnMoney(-HOTEL_COST);
		p1.recovery();

		p1.showInfo();
		cout << "여관에서 휴식했습니다.\n";
		cout << "HP와 MP가 회복되었습니다.\n\n";

		cout << "마을로 돌아가려면 아무키나 입력하세요...\n";
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

	cout << "주인장 : 돈이 좀 부족한 것 같습니다만?\n";
	cout << "주인장 : 이용료는 50gold요. 다음에 다시 들러주시오.\n\n";

	cout << "마을로 돌아가려면 아무키나 입력하세요...\n";
	string none;
	cin >> none;

	system("cls");
}