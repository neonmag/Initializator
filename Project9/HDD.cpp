#include "HDD.h"
#include <iostream>

using namespace std;

HDD::HDD(const char* modelHDD, int countOfTurns, int sizeHDD)
{
	if (this->modelHDD != nullptr)
	{
		delete[]this->modelHDD;
	}
	this->modelHDD = new char[strlen(modelHDD) + 1];
	strcpy_s(this->modelHDD, strlen(modelHDD) + 1, modelHDD);
	this->countOfTurns = countOfTurns;
	this->sizeHDD = sizeHDD;
}

void HDD::Input()
{
	cout << endl << "Enter model: ";
	cin.getline(this->modelHDD, 20);
	cout << endl << "Enter count of turns: ";
	cin >> this->countOfTurns;
	cout << endl << "Enter size: ";
	cin >> this->sizeHDD;
}

void HDD::Print() const
{
	cout << "\nModel: " << this->modelHDD;
	cout << "\nCount of turns: " << this->countOfTurns;
	cout << "\nSize: " << this->sizeHDD;
}

HDD::~HDD()
{
	delete[]this->modelHDD;
	this->modelHDD = nullptr;
}
