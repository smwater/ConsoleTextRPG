#pragma once
#include "Header.h"
#include "Player.h"

class Start
{
public:
	Start() = default;
	~Start() = default;
	Start(const Start& other) = delete;
	Start& operator=(const Start& other) = delete;

	void update()
	{
		do
		{
			print();

			cout << right << setw(29) << "입력 : ";
			cin >> _select;
			system("cls");
		} while (_select < 1 || _select > 2);
	}

	int getSelect() const
	{
		return _select;
	}

private:
	int _select = 0;
	
	void print() const
	{
		cout << "┌───────────────────────────────────────────────┐" << endl;
		cout << "│  ■■■■■  ■■■■  ■      ■  ■■■■■ │" << endl;
		cout << "│      ■      ■          ■  ■        ■     │" << endl;
		cout << "│      ■      ■■■■      ■          ■     │" << endl;
		cout << "│      ■      ■          ■  ■        ■     │" << endl;
		cout << "│      ■      ■■■■  ■      ■      ■     │" << endl;
		cout << left << setw(49) << "│" << "│" << endl;
		cout << "│          ■■■    ■■■      ■■           │" << endl;
		cout << "│          ■    ■  ■    ■  ■               │" << endl;
		cout << "│          ■■■    ■■■    ■  ■■         │" << endl;
		cout << "│          ■  ■    ■        ■    ■         │" << endl;
		cout << "│          ■    ■  ■          ■■           │" << endl;
		cout << left << setw(49) << "│" << "│" << endl;
		cout << left << setw(49) << "│" << "│" << endl;
		cout << left << setw(20) << "│" << left << setw(29) << " 1. 시작하기" << "│" << endl;
		cout << left << setw(49) << "│" << "│" << endl;
		cout << left << setw(20) << "│" << left << setw(29) << " 2. 종료하기" << "│" << endl;
		cout << left << setw(49) << "│" << "│" << endl;
		cout << "└───────────────────────────────────────────────┘" << endl << endl;
	}
};