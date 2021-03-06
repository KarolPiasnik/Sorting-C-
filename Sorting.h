#pragma once
#include "stdafx.h"
#include <vector>

class Sorting 
{
	public:
		//sorting int vectors ascending
		void bubbleSort(std::vector<int>&);
		void quickSort(std::vector<int>&);
		void bogoSort(std::vector<int>&);
		void selectionSort(std::vector<int>&);
		void insertionSort(std::vector<int>&);
		void mergeSort(std::vector<int>&);
		void heapSort(std::vector<int>&);
		void radixSort(std::vector<int>&);
		//std::sort
		void stableSort(std::vector<int>&);
		void shellSort(std::vector<int>&);
		void coctailShakerSort(std::vector<int>&);
		void gnomeSort(std::vector<int>&);
		void bitonicSort(std::vector<int>&);
		void gravitySort(std::vector<int>&);
	private:
		void _quickSort(std::vector<int>&, std::vector<int>::iterator, std::vector<int>::iterator);

};