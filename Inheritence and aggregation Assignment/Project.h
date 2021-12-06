/*
 * Project.h
 *
 *  Created on: Nov 30, 2021
 *      Author: asharbinkhalil
 */
#include<iostream>
#include<string.h>
using namespace std;
#ifndef PROJECT_H_
#define PROJECT_H_

class Project
{
protected:
		int projectId;
		string projectDetails;
public:

	Project();
	string showDetails();
	const string& getProjectDetails() const ;
	void setProjectDetails(const string &projectDetails) ;
	int getProjectId() const ;
	void setProjectId(int projectId);
};

#endif /* PROJECT_H_ */
