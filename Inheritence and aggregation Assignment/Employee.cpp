/*
 * Employee.cpp
 *
 *  Created on: Nov 30, 2021
 *      Author: asharbinkhalil
 */

#include "Employee.h"
#include "Project.h"
void Employee::setProject(Project  p)
	{
	   this->pj=p;
	}
string Employee::showDetails()
		{
		string temp;
		temp=employeeId+","+name+","+to_string(pj.getProjectId())+","+pj.getProjectDetails();
return temp;
		}
	const string& Employee::getEmployeeId() const {
		return employeeId;
	}
	void Employee::setEmployeeId(const string &employeeId)
	{
		if((employeeId[0]-48)>=1)
		this->employeeId = employeeId;
		else
			cout<<"error in id of employee";
	}
	const string& Employee::getName() const {
		return name;
	}
	void Employee::setName(const string &name) {
		this->name = name;
	}
