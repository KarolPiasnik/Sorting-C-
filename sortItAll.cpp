

#include "stdafx.h"
#include "Sorting.h"
#include <vector>
#include <iostream>
using namespace std;
//program written to practise sorting alghorithms

int main()
{	
	Sorting sorter;
	vector<int> vi = { 7,42,432,432,43,1243,43,4,23,12,2,5,152,7,2,25,5,543,54,3,32,7,4,43,433,345,7,522,2,2,12,2,32,25,542,52,52,52,452,2,5452,4,5,542,542 };
	for (std::vector<int>::iterator it = vi.begin(); it != vi.end() - 1; ++it)
		cout << *it<<" ";
	sorter.coctailShakerSort(vi);
	cout << endl;
	for (std::vector<int>::iterator it = vi.begin(); it != vi.end() - 1; ++it)
		cout << *it<<" ";

	return 0;
}

