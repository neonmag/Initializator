#pragma once
class HDD
{
	char* modelHDD;
	int countOfTurns;
	int sizeHDD;
public:
	HDD(const char* modelHDD, int countOfTurns, int sizeHDD);
	void Input();
	void Print()const;// Constant methods for read
	~HDD();
};

