#include <iostream>
#include "LAPTOP.h" // Including my header

using namespace std;

int main()
{
	LAPTOP laptop("MSI", 10250.50, "Intel", 8, 70, 3, "Samsung", "GDDR5", 16, 3600, "Kingston", 7200, 4096, "NVidia", 6, 2);
	laptop.Print();
}