#include<iostream>
using namespace std;

void initRand()
{
	srand((unsigned int)time(nullptr));
}

class Player
{
private:
	char Name[20];
	int Cardnum;
public:
	Player(const char* name);
	void hit();
	int getNumber();
	void showNumber();
};

Player::Player(const char* name)
{
	strcpy_s(Name, sizeof(Name), name);
	Cardnum = 0;
}

void Player::hit()
{
	Cardnum = rand() % 13 + 1;
}

int Player::getNumber()
{
	return Cardnum;
}

void Player::showNumber()
{
	cout << Name << "の手は＝＞" << getNumber() << endl;
}

void judge(int num1,int num2,const char* name1,const char* name2)
{
	if (num1 == num2)
	{
		cout << "引き分け"<< endl;
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
