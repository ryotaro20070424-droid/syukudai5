#pragma once

void initRand();

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

void judge(int num1, int num2, const char* name1, const char* name2);