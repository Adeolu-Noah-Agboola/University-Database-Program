#include "UnderGrad.h"
#include <iostream>
#include <fstream>
using namespace std;
UnderGrad::UnderGrad() {
	firstName = "";
	lastName = "";
	personType = true;			// Student

	DepName = "";
	GPA = 4.0;
	studentType = false;
	regType = false;
	ProgramName = "";
	numCourses=0;
	yearStanding=0;
	classOf=0;
}

UnderGrad::~UnderGrad() {
	firstName = "";
	lastName = "";
	personType = true;			// Student

	DepName = "";
	GPA = 0.0f;
	studentType = false;
	regType = false;
	ProgramName = "";
	numCourses = 0;
	yearStanding = 0;
	classOf = 0;
}
void UnderGrad::printInfo() {
	cout << "Welcome to BIT2400 Polymorphism software!" << endl;
	cout << "Apparently you are a underGrad!" << endl << endl;
	cout << "UnderGrad name is: " << firstName << " " << lastName << endl;
	cout << "UnderGrad is a " << age << " years old " << gender << endl;
	cout << "UnderGrad is a ";
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
	cout << "Your program names are : "<<ProgramName<<endl;
	cout<<"Your number of courses are : "<< numCourses<<endl;
	cout<<"Your year standing is : "<< yearStanding<<endl;
	cout<<"You are the class of : "<<classOf<<endl;

	cout << DepName << " student" << endl << endl;
	ofstream file("UnderGraduate.csv");
	if (file.is_open()) {

		//outputting the base classs to the csv
		file << Student::firstName << ",";
		file << Student::lastName << ",";
		file << Student::age << ",";
		file << Student::gender << ",";
		file << Student::regType << ",";
		file << Student::personType<<endl;

		//outputting the dervied class to the csv
		file << UnderGrad::firstName << ",";
		file << UnderGrad::lastName << ",";
		file << UnderGrad::age << ",";
		file << UnderGrad::gender << ",";
		file << UnderGrad::regType << ",";
		file << UnderGrad::personType<<",";
		file << UnderGrad::calcCGPA() << ",";
		file << UnderGrad::ProgramName << ",";
		file << UnderGrad::numCourses << ",";
		file << UnderGrad::yearStanding << ",";
		file << UnderGrad::classOf << endl;

		file.close();
	}
}
void UnderGrad::userInput() {
	Student::userInput();
	cout << "Enter course numbers : ";
	cin>> numCourses;
	cout << "Enter your year standing : ";
	cin >>  yearStanding;
	cout << "Enter your class : ";
	cin>>classOf;
}

string UnderGrad::calcCGPA() {
	string CGPA;
	if (GPA >= 90) {
		CGPA = "A+";
		return CGPA;
	}
	if (GPA >= 85 && GPA <= 89) {
		CGPA = "A";
		return CGPA;
	}
	if (GPA >= 80 && GPA <= 84) {

		CGPA = "A-";
		return CGPA;
	}
	if (GPA >= 77 && GPA <= 79) {

		CGPA = "B+";
		return CGPA;
	}
	if (GPA >= 73 && GPA <= 77) {
		CGPA = "B";
		return CGPA;
	}
	if (GPA >= 70 && GPA <= 72) {
		CGPA = "B-";
		return CGPA;
	}
	if (GPA >= 67 && GPA <= 69) {
		CGPA = "C+";
		return CGPA;
	}
	if (GPA >= 63 && GPA <= 66) {

		CGPA = "C";
		return CGPA;
	}
	if (GPA >= 60 && GPA <= 62) {
		CGPA = "C-";
		return CGPA;
	}
	if (GPA >= 57 && GPA <= 59) {
		CGPA = "D+";
		return CGPA;
	}
	if (GPA >= 53 && GPA <= 56) {
		CGPA = "D";
		return CGPA;
	}
	if (GPA >= 50 && GPA <= 52) {
		CGPA = "D-";
		return CGPA;
	}
	if (GPA < 50) {
		CGPA = "F";
		return CGPA;
	}
}
	