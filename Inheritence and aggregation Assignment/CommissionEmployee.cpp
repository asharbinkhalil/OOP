/*
 * CommissionEmployee.cpp
 *
 *  Created on: Nov 30, 2021
 *      Author: asharbinkhalil
 */

#include "CommissionEmployee.h"
	CommissionEmployee::CommissionEmployee()
	{}
	CommissionEmployee::CommissionEmployee(Employee  e): Employee(e)
	{}
	int CommissionEmployee::getTotalSalary()
		{		return TotalSalary;}
	string CommissionEmployee::showDetails()
				{
				string temp;
				temp=employeeId+","+name+","+to_string(getTotalSalary())+","+to_string(pj.getProjectId())+","+pj.getProjectDetails();
		return temp;
				}
void CommissionEmployee::calculateSalary()
{	double commission=0;
		if(grossSales>10000)
			{commission=grossSales*0.015;
	TotalSalary=baseSalary+commission;}
	else
			TotalSalary=baseSalary;
}
	int CommissionEmployee::getBaseSalary() const {
		return baseSalary;
	}
	void CommissionEmployee::setBaseSalary(int baseSalary) {
		if(baseSalary>20000)
		this->baseSalary = baseSalary;
		else
			cout<<"you've entered less base salary\n";
	}

	int CommissionEmployee::getGrossSales() const {
		return grossSales;
	}
	void CommissionEmployee::setGrossSales(int grossSales) {
		if(grossSales>0)
			this->grossSales = grossSales;
				else
					cout<<"you've entered less gross sales\n";

	}
