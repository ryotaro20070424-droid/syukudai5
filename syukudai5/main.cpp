#include<iostream>
#include"Player.h"
#include"common.h"
using namespace std;

int main()
{
	initRand();
	int cards[52];
	int* pcard = &cards[0];
	Inicards(pcard);

	char name1[30];
	cout << "名前を入力してください＝＞";
	cin >> name1;
	Player player1(name1);
	player1.hit(pcard);
	player1.showNumber();

	char name2[30];
	cout << "名前を入力してください＝＞";
	cin >> name2;
	Player player2(name2);
	player2.hit(pcard);
	player2.showNumber();

	judge(player1.getNumber(), player2.getNumber(), name1, name2);
}