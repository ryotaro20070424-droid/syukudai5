#include<iostream>
#include"syukudai5.h"
using namespace std;

int main()
{
	initRand();

	char name1[30];
	cout << "名前を入力してください＝＞";
	cin >> name1;
	Player player1(name1);
	player1.showNumber();

	char name2[30];
	cout << "名前を入力してください＝＞";
	cin >> name2;
	Player player2(name2);
	player2.showNumber();

	int num1 = player1.getNumber();
	int num2 = player2.getNumber();

	judge(num1, num2, name1, name2);
}