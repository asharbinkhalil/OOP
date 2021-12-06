/*
 * CPU.h
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */

#include "ControlUnit.h"

#include "ALU.h"
#ifndef CPU_H_
#define CPU_H_

class CPU {
private:
	ALU *alu;
	ControlUnit *clu;
public:
	CPU();
	   CPU(int NoOfAdders, int NoOfSubtractor,int NoOfRegisters,int sizeOfRegisters,float clocck);
	   void setAlu(ALU *aluu) ;
	   ALU& getAlu() ;
	ControlUnit& getCu() ;
	void setCu(ControlUnit *clu) ;
	~CPU();
};

#endif /* CPU_H_ */
