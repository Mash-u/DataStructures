
/************************************************************************************************************************************************************
* Name                : Matthew Ramirez
* Assignment #5.1     : Object Instantiation & Object Pointer Dereferencing Practice
* Class               : CS 37
* Section             : 6:00pm - 10:00 pm
* Date                : 9/22/16
*************************************************************************************************************************************************************/
#include "Point.h"
#include <iostream>

/************************************************************************************************************************************************************
*
*                                                 Object Instantiation & Object Pointer Dereferencing Practice
_____________________________________________________________________________________________________________________________________________________________
* This program utilizez the Point class to instantiate a point object utilizing the parameterized constructor. It also uses a pointer to modify the x and y 
  coordinates of the Point object, and accesses the distance() to print out the distance of the newly modified coordinates from the origin. (Distance is calc-
  ulated through the use of the pythagorean theorem.
_____________________________________________________________________________________________________________________________________________________________
*   Inputs             :
*         userX        : double variable that holds the user coordinate value for x (will be used as an argument when constructing a point object).
*         userY        : double variable that holds the user coordinate value for y (will be used as an argument when constructing a point object).
*
*   Outputs            :
*        NONE          : distance from origin is the return value from a call to the distance method.
*
/************************************************************************************************************************************************************/
using namespace std;

int main()
{
	double userX;                                                  // int variable to hold value of user entered x coordinate.
	double userY;	                                               // int variable to hold value of user entered y coordinate.
	
	cout << "Please enter x and y coordinates: " << endl;
	cin >> userX >> userY;                                         

	Point userCoordinates(userX, userY);                           // Point object userCoordinate is instantiated and initialize with values userX and userY passed in as arguments. 
	Point* pointPtr = &userCoordinates;                            // Point pointer is instantiated and initialized to hold the memory address of object userCoordinates.
	pointPtr->setXCoordinate(7);                                   // Instance double variable member x is modified by the setXCoordinate method (pointPtr is dereferenced to access it).
	pointPtr->setYCoordinate(4);	                               // INstance double variable member y is modified by the setYCoordinate method (pointPtr is dereferenced to access it).
	cout << pointPtr->distance() << endl;                          // Dereferencing of pointPtr to access distance(). The double value returned is displayed on screen (it is the distance from the origin).
}

