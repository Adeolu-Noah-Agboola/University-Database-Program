#pragma once
#include "Person.h"
#include <iostream>
using namespace std;
class Faculty : public Person {
public:
	Faculty();
	~Faculty(); 
	virtual void printInfo();
	virtual void userInput();
protected:
	string DepName;
	bool FacultyType;

};

