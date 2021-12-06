/*
 * mainfunctionfile.cpp
 *
 *  Created on: Dec 2, 2021
 *      Author: asharbinkhalil
 */
#include "Employee.h"
#include "CommissionEmployee.h"
#include "SalariedEmployee.h"
#include "Project.h"

#include "HourlyEmployee.h"
int main()
 {
	Project p;
	p.setProjectDetails("NETWORK SECURITY");
	p.setProjectId(707);
Employee e;
e.setProject(p);
e.setName("ASHAR");
e.setEmployeeId("20K1724");
cout<<e.showDetails();
cout<<"\n";
SalariedEmployee se(e);
se.setMonthlySalary(50000);
cout<<se.showDetails();
cout<<"\n";
CommissionEmployee ce(e);
ce.setGrossSales(10000);
ce.setBaseSalary(40000);
ce.calculateSalary();
cout<<ce.showDetails();
cout<<"\n";
HourlyEmployee he(e);
he.setHourlyRate(170);
he.setNoOfHours(31);
he.calculateSalary();
cout<<he.showDetails();
cout<<"\n";
}
