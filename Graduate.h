#pragma once
#include "Student.h"
#include "iostream"
using namespace std;

class Graduate : public Student{
public:
	Graduate();
	~Graduate();
	void printInfo() final;
	void userInput()final;
	virtual bool TAType() final ;
	virtual string calcGPA() final;
protected:
	string supervisorName;
	int numPublications;
	bool TA;
	unsigned short int hoursAssigned;


};

