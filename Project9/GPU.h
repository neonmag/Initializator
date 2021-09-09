#pragma once
class GPU 
{
	char* modelGPU;
	int sizeGPU;
	int countOfVentus;
public:
	GPU(const char* modelGPU, int sizeGPU, int countOfVentus);
	void Input();
	void Print()const; // Constant methods for read
	~GPU();
};

