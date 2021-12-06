/*
 * Deserts.cpp
 *
 *  Created on: Dec 5, 2021
 *      Author: asharbinkhalil
 */

#include "Deserts.h"

Deserts::Deserts() {
	// TODO Auto-generated constructor stub

}

Deserts::~Deserts() {
	// TODO Auto-generated destructor stub
}

const string& Deserts::getName() const {
	return name;
}

void Deserts::setName(const string &name) {
	this->name = name;
}

bool Deserts::isSugarfree() const {
	return sugarfree;
}

void Deserts::setSugarfree(bool sugarfree) {
	this->sugarfree = sugarfree;
}

const string& Deserts::getType() const {
	return type;
}

void Deserts::setType(const string &type) {
	this->type = type;
}

Deserts::Deserts(const Deserts &other) {
	// TODO Auto-generated constructor stub

}

