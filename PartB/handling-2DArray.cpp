/*****************************************************************//**
 * \file   handling-2DArray.cpp
 * \brief  File to define all features related to 2-D array
 * 
 * \author Matheus
 * \date   December 2024
 *********************************************************************/
#include "handling-2DArray.h"
#include <iostream>

using namespace std;
void Handling2DArray()
{
	int twoD[3][5]
	{
		{1,2,3,4,5},
		{3,62,23,14,25},
		{10,20,30,40,50},
	};

	//Running into the rows
	for (int i = 0; i < 3; i++) {

		cout << "| ";
		//Running into the columns
		for (int j = 0; j < 5; j++) {
			cout << twoD[i][j] << " ";
		}

		cout << "|" << endl;
	}
}
