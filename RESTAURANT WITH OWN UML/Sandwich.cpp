/*
 * Sandwich.cpp
 *
 *  Created on: Dec 5, 2021
 *      Author: asharbinkhalil
 */

#include "Sandwich.h"

 string Sandwich::getName()
 {
	return name;
}

void Sandwich::setName( string &name) {
	this->name = name;
}

 string Sandwich::getPieces()
 {
	return pieces;
}

void Sandwich::setPieces( string &pieces) {
	this->pieces = pieces;
}
