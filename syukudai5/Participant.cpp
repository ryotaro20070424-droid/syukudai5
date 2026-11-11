#include<iostream>
#include"Player.h"
#include"common.h"
#include"Participant.h"
#include"Shoe.h"
using namespace std;

void Participant::hit(Shoe* shoe)
{
	Cardnum = shoe->Takecard();
}

int Participant::getNumber()
{
	return Cardnum % 100;
}

int Participant::getsort()
{
	return Cardnum / 100 - 1;
}
