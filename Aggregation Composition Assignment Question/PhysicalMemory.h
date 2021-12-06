/*
 * PhysicalMemory.h
 *
 *  Created on: Nov 29, 2021
 *      Author: asharbinkhalil
 */

#ifndef PHYSICALMEMORY_H_
#define PHYSICALMEMORY_H_

class PhysicalMemory {
	int capacity;
public:
	PhysicalMemory() ;
	PhysicalMemory(int cp) ;
	int getCapacity() const;
	void setCapacity(int capacity) ;
};

#endif /* PHYSICALMEMORY_H_ */
