/*
 * MainMemory.cpp
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */





#include "MainMemory.h"

	MainMemory::MainMemory()
	{
		capacity=0;
		technologyType="";
	}
	MainMemory::MainMemory(int cpc, string ttype)
{
	capacity=cpc;
	technologyType= ttype;

}
	int  MainMemory::getCapacity() const
		{
			return capacity;
		}

		void MainMemory::setCapacity(int capacity)

		{
			this->capacity = capacity;
		}

		const string& MainMemory::getTechnologyType() const
		{
			return technologyType;
		}

		void MainMemory::setTechnologyType(const string &technologyType)
		{
			this->technologyType = technologyType;
		}
