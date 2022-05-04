#include "Graduate.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
Graduate::Graduate() {
	firstName = "StudentFirst";
	lastName = "StudentLast";
	personType = true;			// Student

	DepName = "Unknown";
	GPA = 0;
	studentType = false;
	regType = false;
	supervisorName="";
	numPublications=0;
	TA=false;
	 hoursAssigned=0;
}
Graduate::~Graduate() {
	firstName = "StudentFirst";
	lastName = "StudentLast";
	personType = false;			// Student

	DepName = "Unknown";
	GPA = 0.0f;
	studentType = false;
	regType = false;
	supervisorName = "";
	numPublications = 0;
	TA = false;
	hoursAssigned = 0;
}
void Graduate::printInfo() {
	cout << "Welcome to BIT2400 Polymorphism software!" << endl;
	cout << "Apparently you are a Grad!" << endl << endl;
	cout << "Grad name is: " << firstName << " " << lastName << endl;
	cout << "Grad is a " << age << " years old " << gender << endl;
	cout << "Grad is a ";
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
	cout<<"Grad supervisor name is : "<<supervisorName<<endl;
	cout << "number of publications : " << numPublications << endl;
	TAType();
	if (TAType() == true) {
		cout << "TA type return is true"<<endl;
	}
	else {
		cout << "Ta type return is false" << endl;
	}
	cout << "number of hours assigned : " << hoursAssigned << endl;
	cout << DepName << " student" << endl << endl;

	
	ofstream file("Graduate.csv");
	if (file.is_open()) {

		//outputting the base classs to the csv
		file << Student::firstName << ",";
		file << Student::lastName << ",";
		file << Student::age << ",";
		file << Student::gender << ",";
		file << Student::regType << ",";
		file << Student::personType << endl;

		//outputting the dervied class to the csv
		file << Graduate::firstName << ",";
		file <<Graduate::lastName << ",";
		file <<Graduate::age << ",";
		file << Graduate::gender << ",";
		file << Graduate::regType << ",";
		file << Graduate::personType << ",";
		file << Graduate::calcGPA() << ",";
		file << Graduate::supervisorName << ",";
		file << Graduate::numPublications << ",";
		file << Graduate::TA << ",";
		file << Graduate::hoursAssigned <<endl;
		

		file.close();
	}
}
void Graduate::userInput() {
	Student::userInput();
	cout << "Enter supervisor name :" ;
	cin >> supervisorName;

	cout << "Enter number of publications : ";
	cin >> numPublications;
	
	cout << "Enter hours assigned : ";
	cin >> hoursAssigned;
}

bool Graduate::TAType() {
	if (hoursAssigned > 65) {
		return false;
	}
	if (hoursAssigned < 65) {
		return true;
	}
}

string Graduate::calcGPA() {
	string CGPA;

	if (GPA >= 95) {
		CGPA = "A+";
		return CGPA;
	}
	if (GPA >= 90 && GPA <= 94) {
		CGPA = "A";
		return CGPA;
	}
	if (GPA >= 85 && GPA <= 94) {
		CGPA = "A-";
		return CGPA;
	}
	if (GPA >= 80 && GPA <=84) {
		CGPA = "B+";
		return CGPA;
	}
	if (GPA >= 75 && GPA <= 79) {
		CGPA = "B";
		return CGPA;
	}
	if (GPA >= 70 && GPA <= 74) {
		CGPA = "B-";
		return CGPA;
	}
	if (GPA >= 65 && GPA <= 69) {
		CGPA = "C+";
		return CGPA;
	}
	if (GPA >= 60 && GPA <= 64) {
		CGPA = "C";
		return CGPA;
	}
	if (GPA <60) {
		CGPA = "F";
		return CGPA;
	}
}
