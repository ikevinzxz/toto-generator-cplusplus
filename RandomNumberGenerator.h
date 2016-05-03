#pragma once
#include <string>

class RandomNumberGenerator
{

public:
	RandomNumberGenerator();
	int generate();
	void place(int number , int arraynum);
	void sort();
	void display();
};
