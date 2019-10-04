/***********************************************************
Name: Landon Schneider
Assignment: 03
Purpose: The purpose of this program is to

Notes: N/A
***********************************************************/

#include "person.h"

Person::Person(){
	setName("");
	setAge(0);
	setFemale(false);


}

void Person::setName(string n){
	name = n;
}

void Person::setAge(int a){
	age = a;
}

void Person::setFemale(bool g){
	female = g;
}

int Person::getAge() {
	if(age>0){
		return age;
	}
	else{
		return 0;
	}
}

bool Person::isFemale() {
	return female;
}

string Person::getName(bool n) {
	
	if (n==true){
		int length = name.length();

		char *upCaseString = new char[length+1];

		for (int i = 0; i < length; i++){

			upCaseString[i] = toupper(name.at(i));
		}

		upCaseString[length] = '\0';

		return upCaseString;
	}

	else{

		return name;

	}
}
