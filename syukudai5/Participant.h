#pragma once

#include"Shoe.h"

class Participant
{
protected:
	int Cardnum;
public:
	virtual void hit(Shoe* shoe) = 0;
	int getNumber();
	int getsort();
};