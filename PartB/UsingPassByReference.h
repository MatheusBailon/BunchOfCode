/*****************************************************************//**
 * \file   UsingPassByReference.h
 * \brief  Definition of the Using Pas By Reference
 * 
 * \author Matheus Bailon
 * \date   December 2024
 *********************************************************************/
#pragma once
#include <string>

/**
 * @brief Function to receive the parameter by reference, using the option '&' after the type of the parameter.
 * @param changebleVariable Variable which will receive a value, updated and keep it is value to next spet of the code
 */
void SecondFunction(std::string& changebleVariable);

/**
 * @brief Function where the variable will be created and set up its first value.
 */
void FirstFunction();




