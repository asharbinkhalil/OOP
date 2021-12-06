/*
 * MainMemory.h
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */

#ifndef MAINMEMORY_H_
#define MAINMEMORY_H_
#include<iostream>
#include<string>
using namespace std;
class MainMemory
{
	int capacity;
	string technologyType;

public:
	MainMemory();
	MainMemory(int cpc, string ttype);
	int  getCapacity() const;
		void setCapacity(int capacity);
		const string& getTechnologyType() const;
		void setTechnologyType(const string &technologyType);

};

#endif /* MAINMEMORY_H_ */
