/*
 * Breverages.h
 *
 *  Created on: Dec 5, 2021
 *      Author: asharbinkhalil
 */

#ifndef BREVERAGES_H_
#define BREVERAGES_H_
#include<iostream>
using namespace std;
class Breverages {
private:
	string name;
	bool sugarfree;

public:
	Breverages();
	virtual ~Breverages();
	const string& getName() const;
	void setName(const string &name);
	bool isSugarfree() const;
	void setSugarfree(bool sugarfree);
};

#endif /* BREVERAGES_H_ */
