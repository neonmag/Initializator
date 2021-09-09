#pragma once
#include "CPU.h"
#include "GPU.h"
#include "RAM.h"
#include "HDD.h"

class LAPTOP
{
	char* model;
	double price;
	CPU cpu; // Передаваемые классы
	RAM ram;
	HDD hdd;
	GPU gpu;
public:
	LAPTOP();
	LAPTOP(const char* model, double price, const char* modelCPU, int cores, int ttp, int ghz, const char* modelRAM, const char* typeOfSpeed,
		int sizeRAM, int speedRAM, const char* modelHDD, int countOfTurns, int sizeHDD, const char* modelGPU, int sizeGPU, int countOfVentus);
	void Input();
	void Print() const; // Constant methods for read
	~LAPTOP();
};

