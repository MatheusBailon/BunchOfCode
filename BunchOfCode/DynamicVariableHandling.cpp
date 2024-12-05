#include <iostream>

using namespace std;

//Function to be used
void DynamicVariableHandling() {

	//To manipulate the quantity of the array dynamically will be used to define the array size
	int numberOfItems;

	//Declaration as a pointer to be the memory address that will be allocated
	int* myDynamic;
	cout << "Inform the number of items to be added into our array: ";
	cin >> numberOfItems;

	//Allocating block in memory for this array
	myDynamic = new int[numberOfItems];


	for (int i = 0; i < numberOfItems; i++) {

		cout << "Enter a value: ";
		cin >> myDynamic[i];
	}

	cout << "Showing the values bellow: \n\n";

	//Showing the values
	for (int i = 0; i < numberOfItems; i++) {
		cout << myDynamic[i] << " ";
	}

	//Destroy or deallocate the memory, allowing this space to be used again and not be corrupted
	delete[] myDynamic;
}