/*
 * SalariedEmployee.h
 *
 *  Created on: Nov 30, 2021
 *      Author: asharbinkhalil
 */

#ifndef SALARIEDEMPLOYEE_H_
#define SALARIEDEMPLOYEE_H_
#include<iostream>
#include "Employee.h"
class SalariedEmployee : public Employee{
	private:
	int monthlySalary;
public:
	SalariedEmployee();
	SalariedEmployee(Employee  e);
	string showDetails();
	int getMonthlySalary() const;
	void setMonthlySalary(int monthlySalary);
};
#endif /* SALARIEDEMPLOYEE_H_ */
