#include<iostream>
#include"Player.h"
#include"common.h"
#include"Participant.h"
using namespace std;

Player::Player()
{
	strcpy_s(Name, sizeof(Name), "Player");
	Cardnum = 0;
}

void Player::ShowPNumber()
{
	cout << Name << "の手は＝＞" << sort[getsort()] << "の" << getNumber() << endl;
}

void Player::hit(Shoe* shoe)
{
	Cardnum = shoe->Takecard();
}

void Player::SetName(const char* name)
{
	strcpy_s(Name, sizeof(Name), name);
}

void Player::ShowName()
{
	cout << Name;
}