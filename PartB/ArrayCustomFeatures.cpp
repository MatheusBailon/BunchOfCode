/*****************************************************************//**
 * \file   ArrayCustomFeatures.cpp
 * \brief  Method to use array features like sorting and search
 * 
 * \author Matheus Bailon
 * \date   December 2024
 *********************************************************************/
#include "ArrayCustomFeatures.h"
#include <iostream>

using namespace std;

const int arraySize = 5;

void Sort(int sortedArray[])
{

	//Sorting array
	for (int i = 0; i < arraySize; i++) {

		for (int j = i+1; j < arraySize; j++) {

			int temp;
			if (sortedArray[i] > sortedArray[j]) {
				temp = sortedArray[i];
				sortedArray[i] = sortedArray[j];
				sortedArray[j] = temp;
			}
		}
	}
}

void BinarySearch() {

	int array[arraySize];
	int toSearch = 0;
	bool found = false;
	char choice;
	
	cout << "Inform the " << arraySize << " numbers of the array to be Searched : " << endl;

	//Get Values
	for (int i = 0; i < arraySize; i++) {
		cin >> array[i];
	}

	Sort(array);
	int min = 0;
	int max = arraySize - 1;
	int mid;

	cout << "Order to be searched: " << endl;
	for (auto a : array) {
		cout << a << " ";
	}

	cout << "\nDigite the number to be seached: ";
	cin >> toSearch;

	while (min <= max) {
		mid = (min + max) / 2;

		if (array[mid] == toSearch) {
			found = true;
			break;
		}

		if (array[mid] > toSearch)
			max = mid - 1;
		else
			min = mid + 1;
	}

	if (found)
		cout << "Value " << toSearch << " found it on position " << mid << endl;
	else
		cout << "Not found it T_T " << endl;
}
