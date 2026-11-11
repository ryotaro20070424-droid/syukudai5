#include<iostream>
#include"Player.h"
#include"common.h"
#include"Shoe.h"
using namespace std;

Shoe::Shoe()
{
	for (int i = 0;i < 52;i++)
	{
		cards[i] = (i / 13 + 1) * 100 + (i % 13 + 1);
	}
}

int Shoe::Takecard()
{
	int box;
	int Count = 0;
	for (int i = 0;i < 52;i++)
	{
		if (cards[i] != 0)
		{
			Count++;
		}
	}
	if (Count == 0)
	{
		Inicards(&cards[0]);
	}

	do
	{
		box = rand() % 52;
	} while (cards[box] == 0);
	int card = cards[box];
	cards[box] = 0;
	return card;
}