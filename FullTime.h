#pragma once
#include "Faculty.h"
class FullTime : public Faculty {
public :
	FullTime();
	~FullTime();
	void printInfo() final;
	void  userInput()final;
	virtual float salary() final;
protected:
	unsigned short int officeExten;
	unsigned short int BaseSalary;
	unsigned short int yearsExp;

};

