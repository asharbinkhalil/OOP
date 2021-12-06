/*
 * pickup.h
 *
 *  Created on: Dec 5, 2021
 *      Author: asharbinkhalil
 */
#include <iostream>
using namespace std;
#ifndef PICKUP_H_
#define PICKUP_H_

class pickup
{
public:
	const string& getCustname() const {
		return custname;
	}

	void setCustname(const string &custname) {
		this->custname = custname;
	}

	const string& getCustphone() const {
		return custphone;
	}

	void setCustphone(const string &custphone) {
		this->custphone = custphone;
	}

private:
	string custname;
	string custphone;
};
#endif /* PICKUP_H_ */
