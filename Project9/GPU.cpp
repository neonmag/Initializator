#include "GPU.h"
#include <iostream>

using namespace std;

GPU::GPU(const char* modelGPU, int sizeGPU, int countOfVentus)
{
	if (this->modelGPU != nullptr)
	{
		delete[]this->modelGPU;
	}
	this->modelGPU = new char[strlen(modelGPU) + 1];
	strcpy_s(this->modelGPU, strlen(modelGPU) + 1, modelGPU);
	this->sizeGPU = sizeGPU;
	this->countOfVentus = countOfVentus;
}

void GPU::Input()
{
	cout << "\nEnter model: ";
	cin.getline(this->modelGPU, 20);
	cout << "\nEnter size: ";
	cin >> this->sizeGPU;
	cout << "\nEnter countOfVentus: ";
	cin >> this->countOfVentus;
}

void GPU::Print() const
{
	cout << "\nModel: " << this->modelGPU;
	cout << "\nSize: " << this->sizeGPU;
	cout << "\nCount of ventus: " << this->countOfVentus;
}

GPU::~GPU()
{
	delete[]this->modelGPU;
	this->modelGPU = nullptr;
}
