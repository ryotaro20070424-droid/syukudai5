#include<iostream>
#include"Player.h"
#include"common.h"
#include"Participant.h"
#include"Shoe.h"
#include"Dealer.h"
using namespace std;

void Dealer::ShowDNumber()
{
	cout << "Dealerの手は＝＞" << sort[getsort()] << "の" << getNumber() << endl;
}