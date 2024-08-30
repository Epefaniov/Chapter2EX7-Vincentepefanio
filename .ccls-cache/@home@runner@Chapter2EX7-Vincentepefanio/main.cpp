/*
  Title: Chapter 2 Excersize 7 - Ocean Levels
  File Name: Chapter2Ex7_Vincent_Epefanio.cpp
  Programmer: Vincent Epefanio
  Date: 9/22/21
  Requirements: Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays: 
The number of millimeters higher than the current level that the ocean’s level will be in 5 years.
The number of millimeters higher than the current level that the ocean’s level will be in 7 years.

• The number of millimeters higher than the current level that the ocean’s level will be in 10 years.
  
*/



#include <iostream>
using namespace std;
const double levelRise = 1.5;




int main()
{

  double YearLevel5 = levelRise * 5;
  double YearLevel7 = levelRise * 7;
  double YearLevel10 = levelRise * 10;
  cout<< "after 5 years the ocean level will have risen "<< YearLevel5<< "millimeters"  <<endl;
  cout<< "after 7 years the ocean level will have risen "<< YearLevel7 << "millimeters" <<endl;
  cout<< "after 10 years the ocean level will have risen "<< YearLevel10<< "millimeters" <<endl;
return 0;





}