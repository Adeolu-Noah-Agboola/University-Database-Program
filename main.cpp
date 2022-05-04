#include <iostream>
#include <string>
#include "Faculty.h"
#include "Person.h"
#include "Student.h"
#include "FullTime.h"
#include "PartTime.h"
#include "UnderGrad.h"
#include "Graduate.h"
#include <string>
using namespace std;
Person* ProcessPerson(Person* person) {
	unsigned short int inp;
	enum choice { Grad = 1, underGrad = 2, Stud = 3, FTime = 4, PTime = 5, Fac = 6,Per=7};
	cout << "Welcome, which employee would you like to change the information for? (Type 1 for Grad| Type 2 for underGrad| Type 3 for Student| Type 4 for FullTime| Type 5 for PartTime| Type 6 for Faculty| Type 7 for Person | ";
	cin >> inp;
	if (inp == Grad) {
		person = new Graduate;
		person->userInput();
	}
	if (inp == underGrad) {
		person = new UnderGrad;
		person->userInput();
	}
	if (inp == Stud) {
		person = new Student;
		person->userInput();
	}
	if (inp == FTime) {
		person = new FullTime;
		person->userInput();
	}
	if (inp == PTime) {
		person = new PartTime;
		person->userInput();

	}
	if (inp == Fac) {
		person = new Faculty;
		person->printInfo();
	}
	if (inp == Per) {
		person = new Person;
		person->userInput();
	}
	return person;
}
int main() {
	Person* personPointer;
	Person person1;
	
	//Function can take input and choose what info to edit based on the class.
	personPointer=ProcessPerson(&person1);
	personPointer->printInfo();
	
	
	



}



