// D1R3Z.cpp: ���������� ����� ����� ��� ����������� ����������.
//


// else if (var > 15 && var < 30) {} - �
// || - ���
// var == 5 ? cout << "=5" : cout << "=3";
// ���� var = 5, �� ����� "=5", ���� �� ����� 5, �� ����� "=3"
// rand() % 80     - ��������� ����� �� 0 �� 79 ������������
// const float pi = 3.14; // ���������, �� ����� ����������;
#include "stdafx.h"
#include <iostream>
#include <string>
#include <clocale>
#include <Windows.h>
using namespace std;

int main(int argc, const char * argv[]) {
	//setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//char string[] = "this is string - ;
	//cout << "������� ������: ";
	//char in_string[500];
	//gets (in_string);
	//cout << sring << endl;


	cout << "������!" << endl;
	cout << "Hi!" << endl;


	system("pause");
	return 0;
}

int main4(int argc, const char * argv[]) {

	int arr[3][2] = { {23, 32}, {45, 76}, {765, 63} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	//for (int i = 0; i < 3; i++)
	//	cin >> arr[i];

	//for (int i = 0; i < 3; i++)
	//	cout << " " << arr[i];

	system("pause");
	return 0;
}


int main3()
{
	int name1;
	int name2;
	cout << "Enter 1: ";
	cin >> name1;
	cout << "Enter 2: ";
	cin >> name2;
	cout << "name1 * name2 = " << name1 * name2 << endl;
	cout << "name1 / name2 = ";
	try {
		if (name2 == 0)
			throw 123;
		cout << name1 / name2 << endl;
	}
	catch (int i) {
		cout << "Error �" << i << " - divine by 0!!!" << endl;
	}
	system("pause");
	return 0;
}

int main2()
{
	string name;
	cout << "enter your name: ";
	getline(cin, name);
	if (name.length() != 0)
		cout << "your name is " << name << endl;
	else
		cout << "empry " << endl;
	system("pause");
	return 0;
}

int main1()
{
	int var;
	cout << "Starting program ..." << endl;
	cin >> var;
	if (var == 15) {
		cout << var << " ok, lol" << endl;
	}
	else if (var == 10) {
		cout << "hm..." << endl;
	}
	else {
		cout << "error" << endl;
	}

	switch(var) {
		case 1:
			cout << "=1";
			break;
		case 2:
			cout << "=2";
		default:
			cout << "= unknown" << endl;
	}

	system("pause");
    return 0;
}

