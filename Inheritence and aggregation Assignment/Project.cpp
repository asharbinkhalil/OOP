/*
 * Project.cpp
 *
 *  Created on: Nov 30, 2021
 *      Author: asharbinkhalil
 */

#include "Project.h"
#include<iostream>
using namespace std;
Project::Project()
	{
		projectId=0;
		projectDetails= new char[200];
	}
	string Project::showDetails()
	{
	string temp;
	temp=to_string(projectId)+","+projectDetails;
	return temp;
	}
	const string& Project::getProjectDetails() const {
		return projectDetails;
	}

	void Project::setProjectDetails(const string &projectDetails) {
		this->projectDetails = projectDetails;
	}

	int Project::getProjectId() const {
		return projectId;
	}
	void Project::setProjectId(int projectId)
	{
		this->projectId = projectId;
	}
