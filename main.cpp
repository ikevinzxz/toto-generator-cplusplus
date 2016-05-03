#include "RandomNumberGenerator.h"
#include <iostream>
#include <time.h>

using namespace std;

void main()
{
	srand(time(NULL));
	RandomNumberGenerator * num = new RandomNumberGenerator();
	for (int k = 0; k < 7; k++)
	{
		int mynum = num->generate();
		num->place(mynum , k);
	}
	num->sort();
	num->display();
}
