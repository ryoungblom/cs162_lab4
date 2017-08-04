/*********************************************************************
 ** Program name: building.cpp
 ** Author: reuben youngblom
 ** Date: 2/5/17
 ** Description: building implementation file for Lab 4
 *********************************************************************/

#include "building.hpp"

Building::Building (string n, int f, string a)  //constructor
{
    buildName = n;  //sets parameters equal to variables
    buildFeet = f;
    buildAddress = a;
    
}


string Building::getNameB()  //and get function returns the name
{
    
    return buildName;
}
