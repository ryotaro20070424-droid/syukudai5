#include<iostream>
#include"Player.h"
#include"common.h"
#include"Shoe.h"
using namespace std;

Shoe::Shoe()
{
	Count = 0;
	for (int i = 0;i < 52;i++)
	{
		cards[i] = (i / 13 + 1) * 100 + (i % 13 + 1);
	}
	Shuffle();
}

void Shoe::Shuffle()
{
	for (int i = 51; i > 0; i--)
	{
		int box = rand() % (i + 1);
		int temp = cards[box];
		cards[box] = cards[i];
		cards[i] = temp;
	}
}

int Shoe::Takecard()
{
	if (Count >= 52)
	{
		Shuffle();
		cout << "カードがシャッフルされました" << endl;
		Count = 0;
	}
	int card = cards[Count];
	Count++;
	return card;
}


//int box;
//int Count = 0;
//for (int i = 0;i < 52;i++)
//{
//	if (cards[i] != 0)
//	{
//		Count++;
//	}
//}
//if (Count == 0)
//{
//	Inicards(&cards[0]);
//}
//
//do
//{
//	box = rand() % 52;
//} while (cards[box] == 0);
//int card = cards[box];
//cards[box] = 0;
//return card;