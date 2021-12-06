/*
 * Computer.h
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */

#ifndef COMPUTER_H_
#define COMPUTER_H_
#include "PhysicalMemory.h"
#include "MotherBoard.h"
#include "CPU.h"
class Computer {
private:
	PhysicalMemory *pm;
	MotherBoard *mb;
	CPU *cpu;
public:
	Computer();
	Computer(PhysicalMemory *pm,MotherBoard *mb, CPU *cpu);
	 CPU* getCpu()  ;
	void setCpu( CPU *&cpu) ;
	 MotherBoard* getMb() ;
	void setMb( MotherBoard *&mb) ;
	PhysicalMemory* getPm() ;
	void setPm(PhysicalMemory *pm);
};

#endif /* COMPUTER_H_ */
