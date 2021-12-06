/*
 * delivered.h
 *
 *  Created on: Dec 5, 2021
 *      Author: asharbinkhalil
 */
#include <iostream>
using namespace std;
#ifndef DELIVERED_H_
#define DELIVERED_H_

class delivered
{
	string deliveryadress;
	string custName;
public:
	const string& getCustName() const {
		return custName;
	}

	void setCustName(const string &custName) {
		this->custName = custName;
	}

	const string& getDeliveryadress() const {
		return deliveryadress;
	}

	void setDeliveryadress(const string &deliveryadress) {
		this->deliveryadress = deliveryadress;
	}
};
#endif /* DELIVERED_H_ */
