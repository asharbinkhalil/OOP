/*
 * Shop.h
 *
 *  Created on: Dec 4, 2021
 *      Author: asharbinkhalil
 */
#include "PhysicalMemory.h"
#include "MotherBoard.h"
#include "CPU.h"
#include "Computer.h"
#include "ControlUnit.h"
#include "MainMemory.h"
#include<iostream>
using namespace std;
#ifndef SHOP_H_
#define SHOP_H_

class Shop
{
	Computer *cp;
public:
	void manufactureComputer();
	void viewList();
};
#endif /* SHOP_H_ */
