#include "RAM.h"
#include <iostream>

using namespace std;

RAM::RAM(const char* modelRAM, const char* typeOfSpeed, int sizeRAM, int speedRAM)
{
	if (this->modelRAM != nullptr)
	{
		delete[]this->modelRAM;
	}
	if (this->typeOfSpeed != nullptr)
	{
		delete[]this->typeOfSpeed;
	}
	this->modelRAM = new char[strlen(modelRAM) + 1];
	strcpy_s(this->modelRAM, strlen(modelRAM) + 1, modelRAM);
	this->typeOfSpeed = new char[strlen(typeOfSpeed) + 1];
	strcpy_s(this->typeOfSpeed, strlen(typeOfSpeed) + 1, typeOfSpeed);
	this->sizeRAM = sizeRAM;
	this->speedRAM = speedRAM;
}

void RAM::Input()
{
	cout << "\nEnter model: ";
	cin.getline(this->modelRAM, 20);
	cout << "\nEnter type of speed: ";
	cin.getline(this->typeOfSpeed, 20);
	cout << "\nEnter size of RAM: ";
	cin >> this->sizeRAM;
	cout << "\nEnter speed of RAM: ";
	cin >> this->speedRAM;
}

void RAM::Print() const
{
	cout << "\nModel: " << this->modelRAM << endl;
	cout << "Type of speed: " << this->typeOfSpeed << endl;
	cout << "Size of RAM: " << this->sizeRAM << endl;
	cout << "Speed of RAM: " << this->speedRAM << endl;
}

RAM::~RAM()
{
	delete[]this->modelRAM;
	this->modelRAM = nullptr;
	delete[]this->typeOfSpeed;
	this->typeOfSpeed = nullptr;
}

