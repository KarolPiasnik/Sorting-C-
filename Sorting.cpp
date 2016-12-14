#include "stdafx.h"
#include "Sorting.h"
#include <iostream>
void Sorting::bubbleSort(std::vector<int> &a) 
{
	int tmp = 0;
	bool done=false;
	while (!done) 
	{
		done = true;
		for (std::vector<int>::iterator it = a.begin(); it != a.end() - 1;++it)
		{
			if (*it > *(it + 1))
			{
				tmp = *it;
				*it = *(it + 1);
				*(it+1) = tmp;
			
				done = false;
			}
		}
	}
}

void quickSort(std::vector<int> &a)
{}

void bogoSort(std::vector<int> &a) 
{}
void selectionSort(std::vector<int> &a) 
{}
void insertionSort(std::vector<int> &a) 
{}
void mergeSort(std::vector<int> &a) 
{}
void heapSort(std::vector<int> &a) 
{}
void redixSort(std::vector<int> &a)
{}
void stableSort(std::vector<int> &a) 
{}
void shellSort(std::vector<int> &a)
{}
void coctailShakerSort(std::vector<int> &a)
{}
void gnomeSort(std::vector<int> &a) 
{}
void bitonicSort(std::vector<int> &a) 
{}
void gravitySort(std::vector<int> &a) 
{}