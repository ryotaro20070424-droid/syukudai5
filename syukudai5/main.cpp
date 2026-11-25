#include<iostream>
#include"Player.h"
#include"common.h"
#include"Participant.h"
#include"Shoe.h"
#include"Dealer.h"
using namespace std;

int main()
{
	initRand();
	Shoe shoe;

	int check = 0;
	int NumberOfPeople = 2;
	Player* players = new Player[NumberOfPeople];
	cout << "============================" << endl;
	for (int i = 0;i < NumberOfPeople;i++)
	{
		char name[20];
		cout << i + 1 << "人目の名前を入れてね" << endl;
		cin >> name;
		players[i].SetName(name);
	}
	cout << "何回やりますか？" << endl << "=>";
	cin >> check;
	if (check >= 100)
	{
		cout << "さすがに多すぎ100回にするね" << endl;
		check = 100;
	}
	else if (check < 0)
	{
		cout << "おしまい" << endl;
		check = 0;
	}
	do
	{
		for (int i = 0;i < NumberOfPeople;i++)
		{
			players[i].hit(&shoe);
			players[i].ShowPNumber();
		}

		Dealer dealer;
		dealer.hit(&shoe);
		dealer.ShowDNumber();

		judge(dealer.getNumber(), &players[0],NumberOfPeople);
		check--;
	} while (check != 0);
	delete[] players;
	players = nullptr;
}