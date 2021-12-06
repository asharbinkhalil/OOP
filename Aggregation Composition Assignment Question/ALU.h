/*
 * ALU.h
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */

#ifndef ALU_H_
#define ALU_H_

class ALU {
		int NoOfAdders;
		 int NoOfSubtractor;
		 int NoOfRegisters;
		 int sizeOfRegisters;
public:
		ALU();
	ALU(int na, int ns,int nr,int sr);
		 int getNoOfAdders();
		 		void setNoOfAdders(int noOfAdders);
		 		int getNoOfRegisters()  ;
		 		void setNoOfRegisters(int noOfRegisters) ;
		 		int getNoOfSubtractors()  ;
		 		void setNoOfSubtractors(int noOfSubtractor) ;
		 		int getsizeOfRegisters()  ;
		 		void setsizeOfRegisters(int sizeOfRegisters);
};

#endif /* ALU_H_ */
