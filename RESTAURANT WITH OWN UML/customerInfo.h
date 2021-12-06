/*
 * customerInfo.h
 *
 *  Created on: Dec 5, 2021
 *      Author: asharbinkhalil
 */

#ifndef CUSTOMERINFO_H_
#define CUSTOMERINFO_H_
#include <iostream>
using namespace std;
class customerInfo
{
protected:
	string name;
	string phNo;
public:
	const string& getName() const {
		return name;
	}

	void setName(const string &name) {
		this->name = name;
	}

	const string& getPhNo() const {
		return phNo;
	}

	void setPhNo(const string &phNo) {
		this->phNo = phNo;
	}
};

#endif /* CUSTOMERINFO_H_ */
