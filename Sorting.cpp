#include "stdafx.h"
#include "Sorting.h"
#include <iostream>
#include <array>

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

void Sorting::quickSort(std::vector<int> &a)
{}

void Sorting::bogoSort(std::vector<int> &a)
{}
void Sorting::selectionSort(std::vector<int> &a)
{
	std::vector<int>::iterator tmp = a.begin();
	int min;
	for (std::vector<int>::iterator i = a.begin(); i != a.end(); ++i)
	{
		min = *i;
		for (std::vector<int>::iterator it = i /*a.begin() + (i - a.begin())*/; it != a.end(); ++it)
		{
			//std::cout << i - a.begin();
			if (*it < min) 
			{
				min = *it;
				tmp = it;
			}
		}

		//using min as helping variable
		*tmp = *i;
		*i = min;
	}
}
void Sorting::insertionSort(std::vector<int> &a)
{
	
}
void Sorting::mergeSort(std::vector<int> &a)
{}
void Sorting::heapSort(std::vector<int> &a)
{}
void Sorting::redixSort(std::vector<int> &a)
{}
void Sorting::stableSort(std::vector<int> &a)
{}
void Sorting::shellSort(std::vector<int> &a)
{}
void Sorting::coctailShakerSort(std::vector<int> &a)
{
	int tmp = 0;
	bool done = false;
	while (!done)
	{
		done = true;
		for (std::vector<int>::iterator it = a.begin(); it != a.end() - 1; ++it)
		{
			if (*it > *(it + 1))
			{
				tmp = *it;
				*it = *(it + 1);
				*(it + 1) = tmp;

				done = false;
			}
		}

		for (std::vector<int>::iterator it = a.end()-1; it != a.begin() + 1; --it)
		{
			if (*it < *(it - 1))
			{
				tmp = *it;
				*it = *(it - 1);
				*(it - 1) = tmp;

				done = false;
			}
		}
	}
}

void Sorting::gnomeSort(std::vector<int> &a)
{
	int tmp;
	std::vector<int>::iterator i = a.begin();
	std::vector<int>::iterator j = a.begin() + 1;
	while (j != a.end())
	{
		if (*i <= *j)
		{
			++i;
			++j;
		}
		else
		{
			tmp = *i;
			*i = *j;
			*j = tmp;
			if (i != a.begin()) { --i; --j; }	
		}
	}
}

void Sorting::bitonicSort(std::vector<int> &a)
{}

void Sorting::gravitySort(std::vector<int> &a)
{
	int max = a.at(0);
	bool ** data = new bool*[a.size()]; // for storing numbers 


	for (std::vector<int>::iterator it = a.begin(); it != a.end(); ++it) // finding maximum
	{
		if (*it > max)
			max = *it;
	}

	for (int i = 0; i < a.size(); ++i)
	{
		data[i] = new bool[max];
		for (int j = 0; j < max; ++j)
		{
			if (a.at(i) != 0)
			{
				data[i][j] = true;
				--a.at(0);
			}
			else
				data[i][j] = false;
		}
	}

	for (int i = 0; i < a.size(); ++i)
	{
		a.at(i) = 0;
		for (int j = 0; j < max; ++j)
			if (data[i][j])
				++a.at(i);
	}




}