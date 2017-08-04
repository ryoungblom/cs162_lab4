/*********************************************************************
 ** Program name: university.hpp
 ** Author: reuben youngblom
 ** Date: 2/5/17
 ** Description: university header file for Lab 4
 *********************************************************************/

#include <iostream>
#include <cstring>
#include <vector>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

enum type {student, instructor};  //sets type for people, for easier access later

class University  //creates University class
{
private:
    string uniName;  //takes in name, number of buildings, and number of people
    int uniNumBuild;
    int uniNumPeople;
public:
    University (string, int, int);  //prototype
    
};
