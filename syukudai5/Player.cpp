#include<iostream>
#include"Player.h"
#include"common.h"
#include"Participant.h"
using namespace std;

Player::Player(const char* name)
{
	strcpy_s(Name, sizeof(Name), name);
	Cardnum = 0;
}

void Player::ShowPNumber()
{
	cout << Name << "の手は＝＞" << sort[getsort()] << "の" << getNumber() << endl;
}