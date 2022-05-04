#pragma once
#include <iostream>
#include <string>

// base class
class Person {
public:
	Person();			// Constructor to init variables
	~Person();
	virtual void printInfo();	// Printout the user's basic info
	virtual void userInput();	// Get person's info
protected:
	std::string firstName;
	std::string lastName;
	unsigned short int age;
	char gender;
	bool  personType;		// Is it a student or a faculty
};