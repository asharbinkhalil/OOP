/*
 * MotherBoard.cpp
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */

#include "MotherBoard.h"
MotherBoard::MotherBoard()
{
	ports=NULL;
	mm= NULL;
}
	MotherBoard::MotherBoard(Port *portt, MainMemory  *mmm)
		{
		this->mm=mmm;
		ports = new Port[100];
			this->ports =portt;

		}
	Port*& MotherBoard::getPorts()
	{
		return ports;
	}
	void MotherBoard::setPorts( Port *port)
	{
		this->ports=port;
	}

 MainMemory*& MotherBoard::getMm(){
		return mm;
	}

	void MotherBoard::setMm( MainMemory *&mm) {
		this->mm = mm;
	}
