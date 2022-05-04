#include "Person.h"
#include <iostream>
using namespace std;

// Constructor to init variables
Person::Person() {
	firstName = "DefaultFirst";
	lastName = "DefaultLast";
	age = 0;
	gender = 'U';	// ASCII = 85 dec
	personType = false;		// default is Faculty
}
Person::~Person() {
	firstName="";
	lastName="";
	age=0;
	gender=' ';
	personType=false;

}

// Printout the user's basic info
void Person::printInfo() {
	cout << "Welcome to BIT2400 Polymorphism software!" << endl;
	cout << "Apparently you are a person!\n\n";
	cout << "Your name is " << firstName << " " << lastName << "\n";
	cout << "You are " << gender << " and " << age << " years old" << endl;
	switch (personType) {
	case 0:
		cout << "You are a Faculty" << endl;
		break;
	case 1:
		cout << "You are a student" << endl;
		break;
	}
	cout << endl;
}

// Get person's info
void Person::userInput() {
	cout << "Enter your first name: ";
	cin >> firstName;

	cout << "Enter your last name: ";
	cin >> lastName;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Enter your gender (M, F or U): ";
	cin >> gender;

	cout << "Enter 0) for Faculty 1) for Student: ";
	cin >> personType;

	cout << endl;
}