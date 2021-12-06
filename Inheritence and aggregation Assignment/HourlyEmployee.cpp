/*
 * HourlyEmployee.cpp
 *
 *  Created on: Nov 30, 2021
 *      Author: asharbinkhalil
 */

#include "HourlyEmployee.h"
HourlyEmployee::HourlyEmployee()
	{}
HourlyEmployee::HourlyEmployee(Employee e): Employee(e)
	{
	}
	void HourlyEmployee::calculateSalary()
	{
		totalSalary=noHours*hourlyRate;
	}
	int HourlyEmployee::getTotalSalary()
		{
			return totalSalary;
		}
	string HourlyEmployee::showDetails()
			{
			string temp;
			temp=employeeId+","+name+","+to_string(getTotalSalary())+","+to_string(pj.getProjectId())+","+pj.getProjectDetails();
	return temp;
			}
	int HourlyEmployee::getHourlyRate() const {
		return hourlyRate;
	}
	void HourlyEmployee::setHourlyRate(int houlyRate) {
		if(houlyRate>=150)
		this->hourlyRate = houlyRate;
		else
			cout<<"You've entered less than required hourly rate 150";
	}

	int HourlyEmployee::getNoOfHours() const {
		return noHours;
	}

	void HourlyEmployee::setNoOfHours(int noHours) {
		if(noHours>=30)
		this->noHours = noHours;
		else
			cout<<"you've entered wrong amount for no of hours 30 is minimum";
	}
