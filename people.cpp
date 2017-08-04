/*********************************************************************
 ** Program name: people.cpp
 ** Author: reuben youngblom
 ** Date: 2/5/17
 ** Description: people implementation file for Lab 4
 *********************************************************************/

#include "people.hpp"



Student::Student (string sN, int sA, double sX, type sT) //constructor.
{
    pName = sN;  //sets parameters equal to variables
    pType = sT;
}

Instructor::Instructor (string iN, int iA, double iX, type iT)  //constructor
{
    pName = iN; //sets parameters equal to variables
    pType = iT;
}


/*
 This function takes in an int, and makes a person do that amount of work.  Sends the person off to check their type, and varies output message based on type.
 */


void People::do_work (int R)  //takes in integer
{
    cout << getNameP() << " did " << R << " hours of";  //prints name and hours (int)
    
    if (pType == student)  //if they're of type Student,
    { cout << " homework." << endl;}  //they get this message
    else  //but if they're instructors,
    {cout << " grading papers." << endl;}  //they get this message.
    
    
}


type People::checkType()  //this function checks the type, and returns the type.
{
    
    return pType;
}


string People::getNameP()  //getName function.  returns the person's name
{
    return pName;
}




