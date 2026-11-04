#include<iostream>
#include"Player.h"
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

void judge(int num1, int num2, const char* name1, const char* name2)
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
		cout << name2 << "の勝ち" << endl;
	}
}

void Inicards(int* cards)
{
	for (int i = 0;i < 52;i++)
	{
		cards[i] = (i / 13 + 1) * 100 + (i % 13 + 1);
	}
}