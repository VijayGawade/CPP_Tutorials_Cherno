#pragma once

#include<iostream>



class DataTypes
{
	// Charactor data-types
	char ch = 'A';
	char numChar = 65;
	const char* str = "Hello World!";

	// Integert
	short int a1;
	int a2;
	long int a3;
	long long int a4;
	unsigned int a5;
	long a6;

	// deciamal numbers
	float f1 = 4.5f;
	double d1 = 56.34;
	long float lf=42.3f;
	long double ld=784545.54632119;

	// Boolean
	bool b1 = true;

public:
	void displayAllDataTypes() {
		std::cout << "\n\nChar Data Types:" << std::endl;
		std::cout << "Size of Char is " << sizeof(char) << std::endl;
		std::cout << "ch="<<ch << std::endl;
		std::cout << "numChar="<< numChar << std::endl;

		std::cout << "Size of double is " << sizeof(double) << std::endl;
		std::cout << "Size of long double is " << sizeof(long double) << std::endl;
		std::cout << "ld=" << ld << std::endl;
	}
};

