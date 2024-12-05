/*****************************************************************//**
 * \file   UsingPassByReference.cpp
 * \brief  To show how to use a passing by reference function
 * 
 * \author Matheus Bailon
 * \date   December 2024
 *********************************************************************/

#include "UsingPassByReference.h"
#include <string>
#include <iostream>

using namespace std;
void SecondFunction(string &changebleVariable)
{
	changebleVariable = "NEW TEXT!!!";
}

void FirstFunction()
{
	string text = "This is a string";
	cout << "Initial Value: " << text << endl;

	SecondFunction(text);
	
	cout << "After Function: " << text << endl;
}
