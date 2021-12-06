/*
 * ControlUnit.cpp
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */

#include "ControlUnit.h"

	ControlUnit::ControlUnit()
	{	clock=0;
	}
	ControlUnit::ControlUnit(float c)
	{	clock=c;
	}
	float ControlUnit::getClock()
		{
			return clock;
		}

		void ControlUnit::setClock(float clock)
		{
			this->clock = clock;
		}
