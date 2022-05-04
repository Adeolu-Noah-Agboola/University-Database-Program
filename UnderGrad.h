#pragma once
#include "Student.h"
using namespace std;
class UnderGrad :public Student{
public:
	UnderGrad();
	~UnderGrad();
	virtual void printInfo() final;
	virtual void userInput() final;
	 virtual string calcCGPA() final;
protected:
	string ProgramName;
	unsigned short int numCourses;
	unsigned short int yearStanding;
	unsigned short int classOf;

};

