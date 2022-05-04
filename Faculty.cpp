#include "Faculty.h"
#include <iostream>
#include <fstream>
using namespace std;
#include <fstream>
Faculty::Faculty() {
	firstName = "";
	lastName = "";
	age = 0;
	gender = ' ';
	personType = false;
	DepName = "";
	FacultyType = false;
}
Faculty::~Faculty() {
	firstName = "";
	lastName = "";
	age = 0;
	gender = ' ';
	personType = false;
	DepName = "";
	FacultyType = false;
}

void Faculty::userInput() {
	Person::userInput();

	cout << "Enter your Department name: ";
	cin >> DepName;
	cout << "Enter 0) for full-time 1) for part-time :"; 
	cin >> FacultyType;
}
void Faculty::printInfo() {
	cout << "Welcome to BIT2400 Polymorphism software!" << endl;
	cout << "Apparently you are Faculty!" << endl << endl;
	cout << "Faculty name is: " << firstName << " " << lastName << endl;
	cout << "Faculty is a " << age << " years old " << gender << endl;
	cout << "Faculty is a ";
	switch (FacultyType) {
		case 0:
			cout << "Full time Faculty ";
			break;
		case 1:
			cout << "Part time Faculty ";
			break;
	}
	cout << DepName << " Faculty" << endl << endl;

	ofstream file("Faculty.csv");
	if (file.is_open()) {
		// outputting the base class to the csv
		file << Person::firstName << ",";
		file << Person::lastName << ",";
		file << Person::age << ",";
		file << Person::gender << ",";
		file << Person::personType<<endl;
		//outputting the dervied classs to the csv
		file << Faculty::firstName << ",";
		file << Faculty::lastName << ",";
		file << Faculty::age << ",";
		file << Faculty::gender << ",";
		file << Faculty::personType;
		file << Faculty::FacultyType;

		file.close();
	}
}