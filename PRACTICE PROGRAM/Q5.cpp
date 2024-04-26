//File Name: Q1.cpp 
//Author: Kirubel Solomon.
//Email Address: kirubelsolomon2005@gmail.com
//Assignment Number: 1
//Description: A program that will convert agiven gallon in to a liter.
//Last Changed: April 26,2024
#include <iostream>
using namespace std;
int main()
{
 const double LITERS_PER_GALLON = 3.78533;//1gallon is equal to 3.78533 litters
 double gallons, liters;
 cout << "Enter the number of gallons:\n";
 cin >> gallons;
 liters = gallons*LITERS_PER_GALLON;//formula to converst gallon to litters
 cout << "There are " << liters << " in "
 << gallons << " gallons.\n";
 return 0;
}