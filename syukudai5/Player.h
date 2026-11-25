#pragma once

#include "Participant.h"

class Player:public Participant
{
private:
	char Name[20];
public:
	Player();
	void SetName(const char* name);
	void ShowPNumber();
	void hit(Shoe* shoe)override;
	void ShowName();
};
