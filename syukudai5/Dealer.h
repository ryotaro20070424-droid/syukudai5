#pragma once

#include "Participant.h"
class Dealer : public Participant
{
public:
	void ShowDNumber();
	void hit(Shoe* shoe);
};