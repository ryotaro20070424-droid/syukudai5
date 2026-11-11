#pragma once

#include"Shoe.h"

class Participant
{
protected:
	int Cardnum;
public:
	void hit(Shoe* shoe);
	int getNumber();
	int getsort();
};