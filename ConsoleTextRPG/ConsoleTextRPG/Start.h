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

			cout << right << setw(29) << "�Է� : ";
			cin >> _select;
			system("cls");
		} while (_select < 1 || _select > 2);

		nextScene();
	}

private:
	int _select = 0;
	
	void print() const
	{
		cout << "��������������������������������������������������������������������������������������������������" << endl;
		cout << "��  ������  �����  ��      ��  ������ ��" << endl;
		cout << "��      ��      ��          ��  ��        ��     ��" << endl;
		cout << "��      ��      �����      ��          ��     ��" << endl;
		cout << "��      ��      ��          ��  ��        ��     ��" << endl;
		cout << "��      ��      �����  ��      ��      ��     ��" << endl;
		cout << left << setw(49) << "��" << "��" << endl;
		cout << "��          ����    ����      ���           ��" << endl;
		cout << "��          ��    ��  ��    ��  ��               ��" << endl;
		cout << "��          ����    ����    ��  ���         ��" << endl;
		cout << "��          ��  ��    ��        ��    ��         ��" << endl;
		cout << "��          ��    ��  ��          ���           ��" << endl;
		cout << left << setw(49) << "��" << "��" << endl;
		cout << left << setw(49) << "��" << "��" << endl;
		cout << left << setw(20) << "��" << left << setw(29) << " 1. �����ϱ�" << "��" << endl;
		cout << left << setw(49) << "��" << "��" << endl;
		cout << left << setw(20) << "��" << left << setw(29) << " 2. �����ϱ�" << "��" << endl;
		cout << left << setw(49) << "��" << "��" << endl;
		cout << "��������������������������������������������������������������������������������������������������" << endl << endl;
	}
	void nextScene() const
	{
		if (_select == 1)
		{
			// ĳ���� ����
			Player p1;
			
			p1.make();
		}
		else
		{
			cout << "������ ����Ǿ����ϴ�.\n";
			exit(0);
		}
	}
};