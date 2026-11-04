#pragma once

class Player
{
private:
	char Name[20];
	int Cardnum;
public:
	Player(const char* name);
	void hit(int* pcard);
	int getNumber();
	int getsort();
	void showNumber();
};
