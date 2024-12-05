/*****************************************************************//**
 * \file   FileHandler.h
 * \brief  Definition of the FileHander
 * 
 * \author Matheus Bailon
 * \date   December 2024
 *********************************************************************/

#pragma once
#include <string>

/**
 * @brief Creates a file in the current directory.
 * @param filename The name of the file to be created.
 * If not provided, a default value will be used.
 */
void createFile(std::string filename = "defaultFile.txt");

/** 
* @brief Reads the file content and print it
* to the terminal.
* @param filename The name of the file which will be read.
* If not provided, a default value will be used.
*/
void readFile(std::string filename = "defaultFile.txt");
