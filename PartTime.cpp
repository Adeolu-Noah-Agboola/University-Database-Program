#include "PartTime.h"
#include <iostream>
#include <fstream>
using namespace std;
PartTime::PartTime() {
	firstName = "";
	lastName = "";
	age = 0;
	gender = ' ';
	personType = false;
	DepName = "";
	FacultyType = false; //fulltime default
	hoursWorked = 0;
	hourlyRate = 0.0f;
}
PartTime ::~PartTime() {
	firstName = "";
	lastName = "";
	age = 0;
	gender = ' ';
	personType = false;
	DepName = "";
	FacultyType = false; //fulltime default
	hoursWorked = 0;
	hourlyRate = 0.0f;
}
void PartTime::userInput() {
	Faculty::userInput();
	cout << "Enter your hours worked : ";
	cin >> hoursWorked;
	cout << "Enter your hourly rate :";
	cin >> hourlyRate;
}
void PartTime::printInfo() {
	cout << "Welcome to BIT2400 Polymorphism software!" << endl;
	cout << "Apparently you are Part-Time Faculty !" << endl << endl;
	cout << "Part-Time Faculty name is: " << firstName << " " << lastName << endl;
	cout << "Part-Time Faculty is a " << age << " years old " << gender << endl;
	cout << "Part-Time Faculty is a ";
	switch (FacultyType) {
	case 0:
		cout << "Full time Faculty ";
		break;
	case 1:
		cout << "Part time Faculty ";
		break;
	}
	cout << endl;
	cout << "Part-Time Faculty hours worked : " << hoursWorked << endl;
	cout << "Part-Time Faculty hourly rate: " << hourlyRate << endl;
	cout << DepName << " Faculty" << endl << endl;
	ofstream file("PartTime.csv");
	if (file.is_open()) {
		//parent base class
		file << Faculty::firstName << ",";
		file << Faculty::lastName << ",";
		file << Faculty::age << ",";
		file << Faculty::gender << ",";
		file << Faculty::personType;
		file << Faculty::DepName << ",";
		file << Faculty::FacultyType<<endl;

		//child derived class
		file << PartTime::firstName << ",";
		file << PartTime::lastName << ",";
		file << PartTime::age << ",";
		file <<PartTime::gender << ",";
		file << PartTime::personType;
		file << PartTime::DepName << ",";
		file << PartTime::FacultyType << ",";
		file << PartTime::salary() << ",";
		file << PartTime::hoursWorked << ",";
		file << PartTime::hourlyRate << endl;



		file.close();
	}
}

float PartTime::salary() {
	return hoursWorked * hourlyRate;
}