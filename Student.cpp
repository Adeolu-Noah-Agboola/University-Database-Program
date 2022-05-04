#include "Student.h"
#include <fstream>
using namespace std;

Student::Student() {
	firstName = "StudentFirst";
	lastName = "StudentLast";
	personType = true;			// Student

	DepName = "Unknown";
	GPA = 0;
	studentType = false;
	regType = false;
}
Student::~Student() {
	firstName = "";
	lastName = "";
	personType = false;			
	DepName = "";
	GPA = 0.0f;
	studentType = false;
	regType = false;
}

// Printout the student's basic info
void Student::printInfo() {
	cout << "Welcome to BIT2400 Polymorphism software!" << endl;
	cout << "Apparently you are a student!" << endl << endl;
	cout << "Student name is: " << firstName << " " << lastName << endl;
	cout << "Student is a " << age << " years old " << gender << endl;
	cout << "Student is a ";
	switch (regType)
	{
	case 0:
		cout << "full time ";
		break;
	case 1:
		cout << "part time ";
		break;
	}
	switch (studentType)
	{
	case 0:
		cout << "under graduate ";
		break;
	case 1:
		cout << "graduate ";
	}
	cout << DepName << " student" << endl << endl;
	ofstream file("Student.csv");
	if (file.is_open()) {
		// outputting the base class to the csv
		file << Person::firstName << ",";
		file << Person::lastName << ",";
		file << Person::age << ",";
		file << Person::gender << ",";
		file << Person::personType << endl;
		//outputting the dervied classs to the csv
		file << Student::firstName << ",";
		file << Student::lastName << ",";
		file << Student::age << ",";
		file << Student::gender << ",";
		file << Student::regType << ",";
		file << Student::personType;

		file.close();
	}
}

// Get student's info
void Student::userInput() {

	Person::userInput();

	cout << "Enter your Department name: ";
	cin >> DepName;

	cout << "Enter your GPA: ";
	cin >> GPA;

	cout << "Enter 0) for Undergrad Student 1) for Grad student: ";
	cin >> studentType;

	cout << "Enter 0) for full time student 1) for part time: ";
	cin >> regType;
	cout << endl;
}