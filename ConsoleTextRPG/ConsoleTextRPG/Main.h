#pragma once
#include "Header.h"

class Main
{
public:
	Main() = default;
	~Main() = default;
	Main(const Main& other) = delete;
	Main& operator=(const Main& other) = delete;

	void print()
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

	void start()
	{
		do
		{
			print();

			cout << right << setw(29) << "입력 : ";
			cin >> _select;
			system("cls");
		} while (_select < 1 || _select > 2);

		if (_select == 1)
		{
			// 캐릭터 생성
		}
		else
		{
			cout << "게임이 종료되었습니다.\n";
			exit(1);
		}
	}

private:
	int _select = 0;
};