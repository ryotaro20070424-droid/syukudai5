#include<iostream>
#include"Player.h"
#include "Participant.h"
using namespace std;

const char* sort[]
{
	"スペード",
	"ダイヤ",
	"クローバー",
	"ハート",
};

void initRand()
{
	srand((unsigned int)time(nullptr));
};

void judge(int num1, Player* player,int size)
{
	int Playermax = player[0].getNumber();
	int Namenum = 0;
	for (int i = 1;i < size;i++)
	{
		if (Playermax <= player[i].getNumber())
		{
			Playermax = player[i].getNumber();
			Namenum = i;
		}
	}
	
	if (num1 >= Playermax)
	{
		cout << "Dealerの勝ち" << endl;
	}
	else
	{
		player[Namenum].ShowName();
		cout << "の勝ち" << endl;
	}
	cout << "============================" << endl;
}

void Inicards(int* cards)
{
	for (int i = 0;i < 52;i++)
	{
		cards[i] = (i / 13 + 1) * 100 + (i % 13 + 1);
	}
}

void ShowCardType(Participant* participant)
{
	cout << sort[participant->getsort()] << endl;
}