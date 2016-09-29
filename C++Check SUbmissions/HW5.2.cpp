/************************************************************************************************************************************************************
* Name                : Matthew Ramirez
* Assignment #5.2     : Cuboid Object Instantiation/Initialization + Array of Objects Pratice
* Class               : CS 37
* Section             : 6:00pm - 10:00 pm
* Date                : 9/23/2016
*************************************************************************************************************************************************************/
#include "Cuboid.h"
#include <iostream>
#include <iomanip>

/************************************************************************************************************************************************************
*
*                                         HW #5.2 Cuboid Object Instantiation/ Initialization + Array of Objects Practice
_____________________________________________________________________________________________________________________________________________________________
* This program instantiates and intializes a cuboid object and an array of cuboid objects using the Class Cuboid. A cuboid object is intialized with 3 parameters:
* height, length and width, and an array of 2 cuboid objects is instantiated. THe user is then asked to set the height, length, and width dimensions via the 
* setDimensions() method for both objects in the array. Both cuboid objects in the array have their instance variable members height, length, and width modified 
* by the userDimensionReFactor() method which the user provides a value for (it multiplies the 3 dimensions by a factor of whatever value the user enters).
* Lastly, the 3 dimensions, volume, and surface area for the three cuboid objects are  printed on screen.
_____________________________________________________________________________________________________________________________________________________________________
*   Inputs                   :
*         userHeight         : double variable that holds the height value entered by the user (will be passed as an argument for the cuboids in the array).
*         userLength         : double variable that holds the length value entered by the user (will be passed as an argument for the cuboids in the array).
*         userWidth          : double variable that holds the width value entered by the user (will be passed as an argument for the cuboids in the array).
*         userDimensionFactor: double value that holds the refactoring value that the user wishes to use. It will be passed into the increaseDimension() 
*                              method and will be used to modify the Cuboid object dimensions.
*
*   Outputs                  :
*        NONE                : dimensions, surface area, and volume of cuboid objects will be returned via the Methods that return their values.
*   
/********************************************************************************************************************************************************************/

using namespace std;

int main()
{
	double userHeight;                     // double value that holds user value for height dimension of a cuboid object.
	double userLength;                     // double value that holds user value for length dimension of a cuboid object.
	double userWidth;                      // double value that holds user value for width dimension of a cuboid object.
	double userDimensionFactor;            // double value that holds user value for the factor that the user would like to increase array cuboid dimensions by.
	Cuboid userCuboid(1, 2, 3);            // instantiation of cuboid object as well as initialzation of height, length and width for said object.
	Cuboid cuboidArray[2];                 // instantation of an array of cuboid objects of size 2.

	for (int i = 0; i < 2; i++)
	{//Being FOR
		cout << "Please enter the height, length and width for your 1st cuboid (in that order): " << endl;
		cin >> userHeight >> userLength >> userWidth;
		cuboidArray[i].setDimensions(userHeight, userLength, userWidth);   //modification of cuboid dimensions in array.
	}//End FOR

	cout << "Please enter the factor that you'd like to increase your cuboid dimensions by: " << endl;
	cin >> userDimensionFactor;
	cuboidArray[0].increaseDimension(userDimensionFactor);                //factor value is passed to increaseDimension() method. Cuboid dimensions wil be multiplied by the factor value.
	cuboidArray[1].increaseDimension(userDimensionFactor);

	cout << "" << endl;                                                   //First Cuboid object (Alpha Cuboid) dimensions, volume and surface Area are printed out.
	cout << left << setw(20) << "Dimensions" << setw(15) << "Height" << setw(15) << "Length" << setw(15) << "Width" << setw(15) << "Volume" << setw(15) << "surface area" << endl;
	cout << setw(20) << "Alpha cuboid" << setw(15) << userCuboid.getHeight() << setw(15) << userCuboid.getLength();
	cout << setw(15) << userCuboid.getWidth() << setw(15) << userCuboid.volume() << setw(15) << userCuboid.surfaceArea() << endl;

	for (int i = 0; i < 2; i++)                                          // Dimensions, volume and surface area for the 2 cuboid objects in the cuboidArray are printed out.
	{
		cout << setw(13) << "Array cuboid" << setw(7) << (i+1);
		cout << setw(15) << cuboidArray[i].getHeight() << setw(15) << cuboidArray[1].getLength() << setw(15) << cuboidArray[i].getWidth();
		cout << setw(15) << cuboidArray[i].volume() << setw(15) << cuboidArray[i].surfaceArea() << endl;
	}
}