/*********************************************************************
 ** Program name: main.cpp
 ** Author: reuben youngblom
 ** Date: 2/5/17
 ** Description: main implementation file for Lab 4
 *********************************************************************/

#include "people.hpp"

int main()
{
    
    srand (time(NULL));  //seeds the random numbers needed for work function
    
    int age;  //tracks age (of both) as input
    double gpa;  //tracks student gpa
    double rating;  //tracks intructor rating
    int select;  //tracks user selection
    bool checkBool = true;  //bool for checking whether program should end
    
    
    int numPeople = 4;  //my original numbers
    int numBuilding = 2;  //for buildings and people

    
    vector <Building> buildVector;  //vector to track buildings
    vector <People> peopleVector;  //and people
    
    Building cs ("CS", 300, "1 OSU ave");  //instantiations of buildings
    Building bio ("Biology", 500, "2 OSU ave");
    
    buildVector.push_back(cs);  //this puts them into a vector
    buildVector.push_back(bio);
    
    cout << "The first Student is Kim." << endl;  //user instructions
    cout << "How old is she?" << endl;
    cin >> age;  //takes in age
    
    cout << "...and what's her GPA? Please enter in X.XX format." << endl;
    cin >> gpa;  //takes in gpa
    
    Student kim ("Kim", age, gpa, student);  //creates Student kim
    
    cout << "The second Student is Raj." << endl;  //redoes instructions for second student
    cout << "How old is he?" << endl;
    cin >> age;  //takes in age
    
    cout << "...and what's his GPA? Please enter in X.XX format." << endl;
    cin >> gpa;  //and gpa
    
    Student raj ("Raj", age, gpa, student);  //and creates Student raj
    
    peopleVector.push_back(kim);  //and adds them to the vector of all people
    peopleVector.push_back(raj);
    
    
    cout << "The first Instructor is Lee.  How old is he?" << endl;  //instructions for instructors
    cin >> age;  //takes in age
    
    cout << "...and what's his ranking?  Please enter a number between 1-5 in X.XX format." << endl;
    cin >> rating;  //and rating
    
    Instructor lee ("Lee", age, rating, instructor);  //and creates Instructor Lee
    
    
    cout << "The second Instructor is Jon.  How old is he?" << endl;  //instructions
    cin >> age;  //takes in age
    
    cout << "...and what's his ranking?  Please enter a number between 1-5 in X.XX format." << endl;
    cin >> rating;  //and rating
    
    Instructor jon ("Jon", age, rating, instructor);  //and creates Instructor Jon
    
    peopleVector.push_back(lee);  //and adds them to People vector
    peopleVector.push_back(jon);
 

    University OSU ("OSU", numPeople, numBuilding);  //University instantiation.  OSU!!
    
   // int randomHours = rand() % (50-1);  //generates random number.  I figure 50 hours is reasonable for a cap?
    
    
    while (checkBool == true)  //sets bool to true.  Will keep looping unless it turns false
    {

	int randomHours = rand() % (50-1);  //generates random number.  I figure 50 hours is reasonable for a cap?
        
        int buildIterator = 0;  //resets all holder variables for each round
        int peopleIterator = 0;
        int peopleChoice = 1;
        
        
        cout << "Please enter an option from 1-4" << endl;  //instructions
        cout << "To print all buildings, select 1" << endl;
        cout << "To print all people, select 2" << endl; //in the form of a menu
        cout << "To choose someone to do work, press 3" << endl;
        cout << "To exit the program, choose 4" << endl;
        
        cin >> select;  //takes in selection


    switch (select)  //switch menu
    {
        case 1:  //case 1 prints all buildings by looping though and printing their names
        {
            for (vector<Building>::const_iterator i = buildVector.begin(); i != buildVector.end(); ++i)
            {
                cout << buildVector[buildIterator].getNameB() << ' ' << endl;
                buildIterator++;  //and adds one to building tracker (to know which one to print)
            }
            break;  //breaks, if chosen.
        }

        case 2: cout << endl; //for aesthetics
        {   //case 2 prints people, just like above.  Iterates through the vector.
            for (vector<People>::const_iterator i = peopleVector.begin(); i != peopleVector.end(); ++i)
            {
                cout << peopleVector[peopleIterator].getNameP() << ' ' << endl;  //and grabs people names
                peopleIterator++;
            }
            break;
        }
        case 3: {cout << "Who would you like to do work?" << endl;  //user instructions
            cout << "please choose the appropriate number:" << endl;
            //prints names and assigns numbers to them to choose who to make do work
            for (vector<People>::const_iterator i = peopleVector.begin(); i != peopleVector.end(); ++i)
            {
                cout << peopleChoice << ": " << peopleVector[peopleIterator].getNameP() << ' ' << endl;
                peopleChoice++; peopleIterator ++;  //two trackers, because arrays start at 0 but menus start at one, usually.
            }
            int choice;  //creates choice variable
            
            cin >> choice;  //takes in choice
            
            switch (choice)  //and feeds this into a menu
            {
                case 1: {kim.do_work(randomHours); break;}
                case 2: {raj.do_work(randomHours); break;}
                case 3: {lee.do_work(randomHours); break;}
                case 4: {jon.do_work(randomHours); break;}
            //the cases send different people to "do work" function
            }
            break; //and breaks
        }
        
        case 4: //if user chooses this one, bool switches to false and menu loop will end
        {
            checkBool = false;
                    break;
        }
    }
        cout << endl;
        cout << "Thanks! Main Menu:" << endl;  //end note.
        cout << endl;
    
    }
    
       return 0;
}
