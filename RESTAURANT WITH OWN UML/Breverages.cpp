/*
 * Breverages.cpp
 *
 *  Created on: Dec 5, 2021
 *      Author: asharbinkhalil
 */

#include "Breverages.h"

Breverages::Breverages() {
	// TODO Auto-generated constructor stub

}

const string& Breverages::getName() const {
	return name;
}

void Breverages::setName(const string &name) {
	this->name = name;
}

bool Breverages::isSugarfree() const {
	return sugarfree;
}

void Breverages::setSugarfree(bool sugarfree) {
	this->sugarfree = sugarfree;
}

Breverages::~Breverages() {
	// TODO Auto-generated destructor stub
}

