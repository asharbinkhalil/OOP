/*
 * Port.h
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */

#ifndef PORT_H_
#define PORT_H_
#include<iostream>
#include<string>
using namespace std;
class Port {
	int baud_rate;
	string type;
public:
	Port();
	Port( string porttype,int br);
	int getBaudRate();
	void setBaudRate(int baudRate);
	 string& getType();
	void setType(const string &type);
};

#endif /* PORT_H_ */
