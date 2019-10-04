/***********************************************************
Name: Landon Schneider
Assignment: 03
Purpose: The purpose of this program is to

Notes: N/A
***********************************************************/

#include "main.h"

int main() {

    /*
     * this is your test data. it uses a concept called parallel arrays 
     */
    
    char names[NUMPEOPLE][NAMESIZE] = {"marge", "homer", "maggie", "bart", "lisa"};
    int ages[NUMPEOPLE] = {37, 42, 1, 10, 7};
    bool female[NUMPEOPLE] = {true, false, true, false, true};

    // Create an array of empty persons of size NUMPEOPLE called "family"

    Person family[NUMPEOPLE];

    // Load the data into the array of empty persons

    for (int i=0; i<NUMPEOPLE; i++){

        family[i].setName(names[i]);
        family[i].setAge(ages[i]);
        family[i].setFemale(female[i]);

    }

    /* List all people in the family using the C++ string of the names
     * when you call getName() here pass NOTHING to the method
     */

    cout << "List of all family members stored" << endl;
    cout << "=================================" << endl;

    for (int i=0; i<NUMPEOPLE; i++){

        cout << "\t";
        cout << family[i].getName() << ": "; 
        cout << family[i].getAge() << ": "; 
        if (family[i].isFemale()==1){
            cout<<"female"<<endl;
        }
        else if(family[i].isFemale()==0){
            cout<<"not female"<<endl;
        }
        
    }

    /* Print out the last person in the list using the uppercase version
     * of the name. i.e pass true to the getName() method
     */

    cout << "\nThe last person in the list is: ";
    cout << family[NUMPEOPLE-1].getName(true) << "\n\n";

    
    // Count and print out the number of people under ADULT age
    // You must use the define ADULT for this.

    int counter = 0;
        for (int i=0; i<NUMPEOPLE; i++){

            if (family[i].getAge() <= ADULT)
                counter+=1;
            else{
            }
        }
    cout << "The number of people in the family under 18 is: " << counter;


    return 0;
}
