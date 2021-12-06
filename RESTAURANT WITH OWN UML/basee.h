/*
 * basee.h
 *
 *  Created on: Dec 5, 2021
 *      Author: asharbinkhalil
 */

#ifndef BASEE_H_
#define BASEE_H_
#include <iostream>
using namespace std;
class basee
{
public:
	const string& getBasename() const {
		return basename;
	}

	void setBasename(const string &basename) {
		this->basename = basename;
	}

private:
	string basename;

};
class sauce
{
	string name;
	int quantity;
};
class topping
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
#endif /* BASEE_H_ */
