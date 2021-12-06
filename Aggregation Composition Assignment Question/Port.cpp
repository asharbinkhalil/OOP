/*
 * Port.cpp
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */

#include "Port.h"

Port::Port()
	{
		baud_rate=0;
		type="";
	}
Port::Port( string porttype,int br)
	{
		baud_rate=br;
		type=porttype;
	}
	int Port::getBaudRate()
	{
		return baud_rate;
	}
	void Port::setBaudRate(int baudRate)
	{
		baud_rate = baudRate;
	}

	 string& Port::getType()
	{
		return type;
	}

	void Port::setType(const string &type)
	{
		this->type = type;
	}
