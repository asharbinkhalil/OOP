/*
 * ControlUnit.h
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */

#ifndef CONTROLUNIT_H_
#define CONTROLUNIT_H_

class ControlUnit {
private:
	float clock;
public:
	ControlUnit();
	ControlUnit(float c);
	float getClock() ;
	void setClock(float clock);
};

#endif /* CONTROLUNIT_H_ */
