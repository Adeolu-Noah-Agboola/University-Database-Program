#pragma once
#include "Faculty.h"
class PartTime :public Faculty {
public:
	PartTime();
	~PartTime();
	virtual void printInfo() final;
	void userInput() final;
	virtual float salary() final;
protected:
	unsigned short int hoursWorked;
	float hourlyRate;

};

