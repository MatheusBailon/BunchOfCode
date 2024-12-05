// Removed necessary Asserts codes, testing only when it is necessary


/*****************************************************************//**
 * \file   FileHandler.cpp
 * \brief  Responsible to handle files creation and read their contents
 * 
 * \author mathe
 * \date   December 2024
 *********************************************************************/

#include "FileHandler.h"
#include <string>
#include <fstream>
#include <iostream>
#include <cassert>

using namespace std;

void createFile(string filename)
{
	//Creation of the file and insert a message
	ofstream fout(filename);
	fout << "That is the first content of the file";
	fout.close();
}

void readFile(string filename)
{
	assert(("File name can not be empty!", !filename.empty()));

	string content;
	char character;
	ifstream file(filename);

	//getting the file from beginning, working as array, then in this case will be at the 5 position
	file.seekg(5, ios::beg);
	getline(file, content);
	
	assert(("No data found in the file!", !content.empty()));


	cout << content << endl;


	//getting the file from the end.
	file.seekg(-8, ios::end);
	file.get(character);
			
	cout << character << endl;

	//Now it will move from the current position.
	file.seekg(2, ios::cur);
	getline(file, content);
	
	cout << content << endl;

	//After finish the sequences of tasks in the file, it will be closed
	file.close();

	//adding content at the end of the file
	fstream updateFile(filename, ios::in | ios::out);
	updateFile.seekp(0, ios::end);
	updateFile << "\nThis will be at the second line";

	//Using a while, we can read all lines in the file, finishing when we reach its end
	updateFile.seekg(0, ios::beg);
	while (getline(updateFile, content)){
		cout << content << endl;
	}

	//Closed it again, after finish the file usage
	file.close();
}