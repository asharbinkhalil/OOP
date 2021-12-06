/*
 * CPU.cpp
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */

#include "CPU.h"
#include "ControlUnit.h"
#include "ALU.h"
CPU::CPU()
	{
		alu = new ALU();
		clu = new ControlUnit();
	}
CPU::CPU(int NoOfAdders, int NoOfSubtractor,int NoOfRegisters,int sizeOfRegisters,float clocck)
	   {
		   alu= new ALU();
		   clu= new ControlUnit;
		   alu->setNoOfAdders(NoOfAdders);
		   alu->setNoOfSubtractors(NoOfSubtractor);
		   alu->setNoOfRegisters(NoOfRegisters);
		   alu->setsizeOfRegisters(sizeOfRegisters);
		   clu->setClock(clocck);
	   }
	   void CPU::setAlu(ALU *aluu) {
	   			this->alu = aluu;
	   		}
	   ALU& CPU::getAlu()  {
	   			return *alu;
	   		}
	ControlUnit& CPU::getCu() {
		return *clu;
	}

	void CPU::setCu(ControlUnit *clu) {
		this->clu = clu;
	}
	CPU::~CPU()
		{
			delete alu;
		   delete clu;
		}
