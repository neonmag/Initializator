#pragma once
class CPU
{
	char* modelCPU;
	int cores;
	int ttp;
	int ghz;
public:
	CPU(const char* modelCPU, int cores, int ttp, int ghz);
	void Input();
	void Print()const;// Constant methods for read
	~CPU();
};

