/*********************************************************************
 ** Program name: building.hpp
 ** Author: reuben youngblom
 ** Date: 2/5/17
 ** Description: building header file for Lab 4
 *********************************************************************/

#include "university.hpp"

class Building
{
private:
    string buildName;  //takes in name, square feet, and address
    int buildFeet;
    string buildAddress;
public:
    Building (string, int, string);  //prototype
    string getNameB();  //and name Get function
};
