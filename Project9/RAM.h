#pragma once
class RAM
{
	char* modelRAM;
	char* typeOfSpeed;
	int sizeRAM;
	int speedRAM;
public:
	RAM(const char* modelRAM, const char* typeOfSpeed, int sizeRAM, int speedRAM);
	void Input();
	void Print()const;// Constant methods for read
	~RAM();
};

