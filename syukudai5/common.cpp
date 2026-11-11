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

void judge(int num1, int num2, const char* name1)
{
	if (num1 == num2)
	{
		cout << "引き分け" << endl;
	}
	else if (num1 > num2)
	{
		cout << name1 << "の勝ち" << endl;
	}
	else
	{
		cout << "Dealerの勝ち" << endl;
	}
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