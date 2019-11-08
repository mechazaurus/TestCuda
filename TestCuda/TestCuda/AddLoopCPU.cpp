#include "AddLoopCPU.h"
#include <iostream>
#include <ctime>

void addLoopCPU(int *a, int *b)
{
	clock_t startTime = clock();

	int result[_SIZE_];

	for (int i = 0; i < _SIZE_; i++)
	{
		result[i] = a[i] + b[i];
	}
	
	clock_t stopTime = clock();

	std::cout << "Fini(CPU) en : " << stopTime - startTime << " ms" << std::endl;
}