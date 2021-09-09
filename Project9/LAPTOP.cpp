#include "LAPTOP.h"
#include <iostream>

using namespace std;

LAPTOP::LAPTOP()
{
	this->model = nullptr;
	this->price = 0.0;
}

LAPTOP::LAPTOP(const char* model, double price, const char* modelCPU, int cores, int ttp, int ghz, const char* modelRAM, const char* typeOfSpeed, int sizeRAM, int speedRAM, const char* modelHDD, int countOfTurns, int sizeHDD, const char* modelGPU, int sizeGPU, int countOfVentus):cpu(modelCPU,cores,ttp,ghz),ram(modelRAM,typeOfSpeed,sizeRAM,speedRAM),hdd(modelHDD,countOfTurns,sizeHDD),gpu(modelGPU,sizeGPU,countOfVentus) // Initializator
{
	if (this->model != nullptr)
	{
		delete[]this->model;
	}
	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, model);
	this->price = price;
}

void LAPTOP::Input()
{
	cout << "\nEnter model: ";
	cin.getline(this->model, 20);
	cout << "\nEnter price: ";
	cin >> price;
}

void LAPTOP::Print() const
{
	cout << "\nModel: " << this->model;
	cout << "\nPrice: " << this->price;
	gpu.Print();
	cpu.Print();
	hdd.Print();
	ram.Print();
}

LAPTOP::~LAPTOP()
{
	delete[]this->model;
	this->model = nullptr;
}
