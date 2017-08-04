/*********************************************************************
 ** Program name: people.hpp
 ** Author: reuben youngblom
 ** Date: 2/5/17
 ** Description: people header file for Lab 4
 *********************************************************************/

#include "building.hpp"

class People  //creates people class
{
public:
    string pName;  //variables to hold name, type.
    type pType;
    void do_work (int);  //work function
    string getNameP();  //get Name function
    type checkType();  //checks what type (student or instructor)
};

class Student:public People  //student inherits from People
{
private:
    string studName;  //has a name
public:
    Student (string, int, double, type);  //prototype
};

class Instructor:public People  //Instructor also inherits from people
{
private:
    string instructName;  //takes Name
public:
    Instructor (string, int, double, type);  //constructor

};


