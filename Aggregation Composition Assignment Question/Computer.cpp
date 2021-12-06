/*
 * Computer.cpp
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */
#include "PhysicalMemory.h"
#include "MotherBoard.h"
#include "CPU.h"
#include "Computer.h"


Computer::Computer()
	{
		pm=NULL;
		mb=NULL;
		cpu=NULL;
	}
Computer::Computer(PhysicalMemory *pm,MotherBoard *mb, CPU *cpu)
	{
		this->pm=pm;
		this->mb=mb;
		this->cpu=cpu;
	}
	 CPU* Computer::getCpu()  {
		return cpu;
	}
	void Computer::setCpu( CPU *&cpu) {
		this->cpu = cpu;
	}

	 MotherBoard* Computer::getMb()  {
		return mb;
	}

	void Computer::setMb( MotherBoard *&mb) {
		this->mb = mb;
	}

	PhysicalMemory* Computer::getPm()  {
		return pm;
	}

	void Computer::setPm(PhysicalMemory *pm) {
		this->pm = pm;
	}
