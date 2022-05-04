#include "FullTime.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
FullTime::FullTime() {
	firstName = "";
	lastName = "";
	age = 0;
	gender = ' ';
	personType = false;
	DepName = "";
	FacultyType = false; //fulltime default
	officeExten=0;
	BaseSalary = 0;
	yearsExp = 0;
}
FullTime::~FullTime() {
	firstName = "";
	lastName = "";
	age = 0;
	gender = ' ';
	personType = false;
	DepName = "";
	FacultyType = false;
	officeExten=0;
	BaseSalary=0;
	 yearsExp=0;

}
float FullTime::salary() {
	return BaseSalary + ((yearsExp * 3) * (BaseSalary / 100));
}
void FullTime::printInfo() {
	cout << "Welcome to BIT2400 Polymorphism software!" << endl;
	cout << "Apparently you are FullTime Faculty !" << endl << endl;
	cout << "Full-Time Faculty name is: " << firstName << " " << lastName << endl;
	cout << "Full-Time Faculty is a " << age << " years old " << gender << endl;
	cout << "Full-Time Faculty is a ";
	switch (FacultyType) {
	case 0:
		cout << "Full time Faculty ";
		break;
	case 1:
		cout << "Part time Faculty ";
		break;
	}
	cout << endl;
	cout << "Full-Time Faculty Office extension number: " << officeExten<<endl;
	cout << "Full-Time Faculty Base Salary: " << BaseSalary<<endl;
	cout << "Full-Time Faculty years experienced: " << yearsExp<<endl;
	cout << DepName << " Faculty" << endl << endl;
	ofstream file("FullTime.csv");
	if (file.is_open()) {
		//parent base class
		file << Faculty::firstName << ",";
		file << Faculty::lastName << ",";
		file << Faculty::age << ",";
		file << Faculty::gender << ",";
		file << Faculty::personType;
		file << Faculty::DepName << ",";
		file << Faculty::FacultyType<< endl;

		//child derived class
		file << FullTime::firstName << ",";
		file << FullTime::lastName << ",";
		file << FullTime::age << ",";
		file << FullTime::gender << ",";
		file << FullTime::personType;
		file << FullTime::DepName << ",";
		file << FullTime::FacultyType << ",";
		file << FullTime::salary() << ",";
		file << FullTime::officeExten << ",";
		file << FullTime::BaseSalary << ",";
		file << FullTime::yearsExp;


		file.close();
	}
}
void FullTime::userInput() {
	Faculty::userInput();
	cout << "Enter your Office extension: ";
	cin >> officeExten;
	cout << "Enter your Base Salary: ";
	cin >> BaseSalary;
	cout << "Enter your years experienced: ";
	cin >> yearsExp;
}
