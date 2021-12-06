/*
 * SalariedEmployee.cpp
 *
 *  Created on: Nov 30, 2021
 *      Author: asharbinkhalil
 */

#include "SalariedEmployee.h"

	SalariedEmployee::SalariedEmployee()
	{
	}
	SalariedEmployee::SalariedEmployee(Employee  e): Employee(e)
	{
	}
	string SalariedEmployee::showDetails()
			{
			string tempse;
			tempse=employeeId+","+name+","+to_string(monthlySalary)+","+to_string(pj.getProjectId())+","+pj.getProjectDetails();
	return tempse;
			}
	int SalariedEmployee::getMonthlySalary() const {
		return monthlySalary;
	}
	void SalariedEmployee::setMonthlySalary(int monthlySalary) {
		if(monthlySalary>30000)
		this->monthlySalary = monthlySalary;
		else
		{cout<<"you entered less  salary";
		}
	}
