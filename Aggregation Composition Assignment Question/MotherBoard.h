/*
 * MotherBoard.h
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */
#include "Port.h"
#include "MainMemory.h"
#ifndef MOTHERBOARD_H_
#define MOTHERBOARD_H_

class MotherBoard {
	Port *ports;
	MainMemory *mm;
public:
	MotherBoard();
	MotherBoard(Port *portt, MainMemory  *mmm);
	Port*& getPorts();
	void setPorts( Port *port);
	MainMemory*& getMm();
	void setMm( MainMemory *&mm) ;
};

#endif /* MOTHERBOARD_H_ */
