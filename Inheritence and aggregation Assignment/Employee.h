/*
 * Employee.h
 *
 *  Created on: Nov 30, 2021
 *      Author: asharbinkhalil
 */
#include<iostream>
using namespace std;
#include<string.h>
#include "Project.h"
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee
{
protected:
	string name;
	string employeeId;
	Project pj;
public:
	void setProject(Project p);
	string showDetails();
	const string& getEmployeeId() const ;
	void setEmployeeId(const string &employeeId);
	const string& getName() const ;
	void setName(const string &name) ;
};

#endif /* EMPLOYEE_H_ */
