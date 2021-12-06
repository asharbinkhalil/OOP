/*
 * CommissionEmployee.h
 *
 *  Created on: Nov 30, 2021
 *      Author: asharbinkhalil
 */

#ifndef COMMISSIONEMPLOYEE_H_
#define COMMISSIONEMPLOYEE_H_
#include<iostream>
#include "Employee.h"
using namespace std;
class CommissionEmployee  :public Employee {
	int grossSales;
	int baseSalary;
	float TotalSalary;
public:
	CommissionEmployee();
	CommissionEmployee(Employee  e);
	int getTotalSalary();
	string showDetails();
void calculateSalary();
	int getBaseSalary() const;
	void setBaseSalary(int baseSalary) ;
	int getGrossSales() const ;
	void setGrossSales(int grossSales);
};

#endif /* COMMISSIONEMPLOYEE_H_ */
