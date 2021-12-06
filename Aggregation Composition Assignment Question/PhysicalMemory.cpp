/*
 * PhysicalMemory.cpp
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */

#include "PhysicalMemory.h"
	PhysicalMemory::PhysicalMemory() {
		// TODO Auto-generated constructor stub
		capacity=0;
	}
	PhysicalMemory::PhysicalMemory(int cp) {
		capacity=cp;
		// TODO Auto-generated destructor stub
	}
	int PhysicalMemory::getCapacity() const {
		return capacity;
	}
	void PhysicalMemory::setCapacity(int capacity) {
		this->capacity = capacity;
	}
