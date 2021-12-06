/*
 * Deserts.h
 *
 *  Created on: Dec 5, 2021
 *      Author: asharbinkhalil
 */

#ifndef DESERTS_H_
#define DESERTS_H_
#include<iostream>
using namespace std;
class Deserts
{
	string name;
	string type;
	bool sugarfree;
public:
	Deserts();
	virtual ~Deserts();
	Deserts(const Deserts &other);
	const string& getName() const;
	void setName(const string &name);
	bool isSugarfree() const;
	void setSugarfree(bool sugarfree);
	const string& getType() const;
	void setType(const string &type);
};

#endif /* DESERTS_H_ */
