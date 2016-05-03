#include "RandomNumberGenerator.h"
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
int myarray[7];
RandomNumberGenerator::RandomNumberGenerator()
{
	
	
}

int RandomNumberGenerator::generate()
{
	
	int newnumber = rand() % 49 + 1;
	return newnumber;
}
void RandomNumberGenerator::place(int number , int arraynum)
{
	myarray[arraynum] = number;
}

void RandomNumberGenerator::sort()
{
	for (int i = 0; i < 8; i++)
	{
		for (int k = i + 1; k < 7; k++)
		{
				if (myarray[i] > myarray[k])          
				{
					int temp = myarray[i];          
					myarray[i] = myarray[k];
					myarray[k] = temp;
				}
			
		}
		
	}
}

void RandomNumberGenerator::display()
{
	for (int j = 0; j < 7; j++)
	{
		cout << myarray[j] << "  ";
	}
}
