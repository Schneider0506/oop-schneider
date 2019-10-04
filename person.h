/***********************************************************
Name: Landon Schneider
Assignment: 03
Purpose: The purpose of this program is to

Notes: N/A
***********************************************************/

#ifndef PERSON_H
#define PERSON_H
#include <ctype.h>
#include <string>

using std::string;

class Person{

public:		

//constructor

	Person();

//Setters

	void setName(string);
	void setAge(int);
	void setFemale(bool);
	
//Getters
	
	string getName(bool = false);
	int getAge();
	bool isFemale();
	
private:

	string name;
	int age;
	bool female;

};


#endif //PERSON_H