#include<iostream>
#include"Player.h"
#include"common.h"
using namespace std;

Player::Player(const char* name)
{
	strcpy_s(Name, sizeof(Name), name);
	Cardnum = 0;
}

void Player::hit(int* pcard)
{
	int box;
	int Count = 0;
	for (int i = 0;i < 52;i++)
	{
		if (pcard[i] != 0)
		{
			Count++;
		}
	}
	if (Count == 0)
	{
		Inicards(pcard);
	}

	do 
	{
		box= rand() % 52;
	} while (pcard[box] == 0);
	Cardnum = pcard[box];
	pcard[box] = 0;
}

int Player::getNumber()
{
	return Cardnum % 100;
}

int Player::getsort()
{
	return Cardnum / 100 - 1;
}

void Player::showNumber()
{
	cout << Name << "の手は＝＞" << sort[getsort()] << "の" << getNumber() << endl;
}
