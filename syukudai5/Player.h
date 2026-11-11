#pragma once

#include "Participant.h"

class Player:public Participant
{
private:
	char Name[20];
public:
	Player(const char* name);
	void ShowPNumber();
};
