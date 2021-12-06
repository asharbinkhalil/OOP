/*
 * Sandwich.h
 *
 *  Created on: Dec 5, 2021
 *      Author: asharbinkhalil
 */

#ifndef SANDWICH_H_
#define SANDWICH_H_
#include<iostream>
using namespace std;
class Sandwich {
public:
	 string getName() ;
	void setName( string &name);
	 string getPieces() ;
	void setPieces( string &pieces);
private:
	string name;
	string pieces;



};

#endif /* SANDWICH_H_ */
