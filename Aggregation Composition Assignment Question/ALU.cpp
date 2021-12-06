/*
 * ALU.cpp
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */

#include "ALU.h"
ALU::ALU() {
		 	NoOfAdders=0;
		 				NoOfSubtractor=0;
		 				NoOfRegisters=0;
		 			 sizeOfRegisters=0;
		 }
ALU::ALU(int na, int ns,int nr,int sr)
		 		{
		 			NoOfAdders=na;
		 			NoOfSubtractor=ns;
		 			NoOfRegisters=nr;
		 		 sizeOfRegisters=sr;
		 		}
		 int ALU::getNoOfAdders()
		 		{
		 			return NoOfAdders;
		 		}

		 		void ALU::setNoOfAdders(int noOfAdders) {
		 			NoOfAdders = noOfAdders;
		 		}

		 		int ALU::getNoOfRegisters()  {
		 			return NoOfRegisters;
		 		}

		 		void ALU::setNoOfRegisters(int noOfRegisters) {
		 			NoOfRegisters = noOfRegisters;
		 		}

		 		int ALU::getNoOfSubtractors()  {
		 			return NoOfSubtractor;
		 		}

		 		void ALU::setNoOfSubtractors(int noOfSubtractor) {
		 			NoOfSubtractor = noOfSubtractor;
		 		}

		 		int ALU::getsizeOfRegisters()  {
		 			return sizeOfRegisters;
		 		}

		 		void ALU::setsizeOfRegisters(int sizeOfRegisters) {
		 			this->sizeOfRegisters = sizeOfRegisters;
		 		}
