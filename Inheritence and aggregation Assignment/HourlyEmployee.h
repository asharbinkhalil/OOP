/*
 * HourlyEmployee.h
 *
 *  Created on: Nov 30, 2021
 *      Author: asharbinkhalil
 */

#ifndef HOURLYEMPLOYEE_H_
#define HOURLYEMPLOYEE_H_
#include "Employee.h"
#include<iostream>
using namespace std;
class HourlyEmployee :public Employee
{
	int noHours;
	int hourlyRate;
	int totalSalary;
public:
	HourlyEmployee();
	HourlyEmployee(Employee e);
	void calculateSalary();
	int getTotalSalary();
	string showDetails();
	int getHourlyRate() const;
	void setHourlyRate(int houlyRate);
	int getNoOfHours() const;
	void setNoOfHours(int noHours) ;

};

#endif /* HOURLYEMPLOYEE_H_ */
