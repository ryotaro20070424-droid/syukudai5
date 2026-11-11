#include<iostream>
#include"Player.h"
#include"common.h"
#include"Participant.h"
#include"Shoe.h"
#include"Dealer.h"
using namespace std;

int main()
{
	initRand();
	Shoe shoe;

	char name1[30];
	cout << "名前を入力してください＝＞";
	cin >> name1;
	Player player1(name1);
	player1.hit(&shoe);
	player1.ShowPNumber();

	Dealer dealer;
	dealer.hit(&shoe);
	dealer.ShowDNumber();

	judge(player1.getNumber(), dealer.getNumber(), name1);
}