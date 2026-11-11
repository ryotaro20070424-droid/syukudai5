#pragma once
class Shoe {
private:
	int cards[52];
	int Count;
public:
	Shoe();
	void Shuffle();
	int Takecard();
};