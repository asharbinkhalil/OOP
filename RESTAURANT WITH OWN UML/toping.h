/*
 * toping.h
 *
 *  Created on: Dec 5, 2021
 *      Author: asharbinkhalil
 */

#ifndef TOPING_H_
#define TOPING_H_
#include <iostream>
using namespace std;
class toping
{
	string toppingname;
	int toppingquantity;
public:
	const string& getToppingname() const {
		return toppingname;
	}

	void setToppingname(const string &toppingname) {
		this->toppingname = toppingname;
	}

	int getToppingquantity() const {
		return toppingquantity;
	}

	void setToppingquantity(int toppingquantity) {
		this->toppingquantity = toppingquantity;
	}
};
#endif /* TOPING_H_ */
