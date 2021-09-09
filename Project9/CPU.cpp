#include "CPU.h"
#include <iostream>

using namespace std;

CPU::CPU(const char* modelCPU, int cores, int ttp, int ghz)
{
	if (this->modelCPU != nullptr)
	{
		delete[]this->modelCPU;
	}
	this->modelCPU = new char[strlen(modelCPU) + 1];
	strcpy_s(this->modelCPU, strlen(modelCPU) + 1, modelCPU);
	this->cores = cores;
	this->ttp = ttp;
	this->ghz = ghz;
}

void CPU::Input()
{
	cout << "Enter model: ";
	cin.getline(this->modelCPU, 19);
	cout << endl << "Enter count of cores: ";
	cin >> this->cores;
	cout << endl << "Enter amount of ttp: ";
	cin >> this->ttp;
	cout << endl << "Enter amount of ghz: ";
	cin >> this->ghz;
	cout << endl;
}

void CPU::Print() const
{
	cout << "\nModel: " << this->modelCPU;
	cout << "\nCount of cores: " << this->cores;
	cout << "\nAmount of ttp: " << this->ttp;
	cout << "\nAmount of ghz: " << this->ghz;
}

CPU::~CPU()
{
	delete[]this->modelCPU;
	this->modelCPU = nullptr;
}
