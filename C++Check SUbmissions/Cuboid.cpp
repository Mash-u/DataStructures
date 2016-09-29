#include "Cuboid.h"

/****************************************************************************************************************************************************************
* NAME         : Cuboid
* DESCRIPTION  : This is the default contructor for the Cuboid class. Height, Length, and Width dimensions are set to 0.
* RETURN VALUE : no return value
* --------------------------------------------------------------------------------------------------------------------------------------------------------------*
****************************************************************************************************************************************************************/

Cuboid::Cuboid()
{
	height = 0;
	length = 0;
	width  = 0;
}

/****************************************************************************************************************************************************************
* NAME         : Cuboid(double newHeight, double newLenght, double newWidth)
* DESCRIPTION  : Contructor for the Cuboid class that takes three doubles as parameters. Values for newHeight, newLength and newWIdth will be assigned to
*                instance vairable members height, length, and width.
* RETURN VALUE : no return value
* --------------------------------------------------------------------------------------------------------------------------------------------------------------*
****************************************************************************************************************************************************************/

Cuboid::Cuboid(double newHeight, double newLength, double newWidth)
{
	setDimensions(newHeight, newLength, newWidth);
}

/****************************************************************************************************************************************************************
* NAME         : setDimensions(double newHeight, double newLength, double newWidth)
* DESCRIPTION  : This method takes in 3 user entered double values which it assigns to 3 local variables newHeight, newLength, and newWidth. The values stored
*                in these variables are then assigned to the Cuboid instance variable members height, length, and width.
* RETURN VALUE : no return value
* --------------------------------------------------------------------------------------------------------------------------------------------------------------*
****************************************************************************************************************************************************************/

void Cuboid::setDimensions(double newHeight, double newLength, double newWidth)
{
	height = newHeight;
	length = newLength;
	width = newWidth;
}

/****************************************************************************************************************************************************************
* NAME         : getHeight()
* DESCRIPTION  : This method returns the value for Cuboid instance variable member height.
* RETURN VALUE : double
* ---------------------------------------------------------------------------------------------------------------------------------------------------------------*
*****************************************************************************************************************************************************************/

double Cuboid::getHeight()
{
	return height;
}

/*****************************************************************************************************************************************************************
* NAME         : getLength()
* DESCRIPTION  : This method returns the value for Cuboid instance variable member length.
* RETURN VALUE : double
* ---------------------------------------------------------------------------------------------------------------------------------------------------------------*
*****************************************************************************************************************************************************************/

double Cuboid::getLength()
{
	return length;
}

/*****************************************************************************************************************************************************************
* NAME         : getWidth()
* DESCRIPTION  : This method returns the value for Cuboid instance variable member width.
* RETURN VALUE : double
* ---------------------------------------------------------------------------------------------------------------------------------------------------------------*
*****************************************************************************************************************************************************************/

double Cuboid::getWidth()
{
	return width;
}

/*****************************************************************************************************************************************************************
* NAME         : volume()
* DESCRIPTION  : This method calculates the volume for a cuboid object. It multiplies the  height * length * width  variables and assigns the resulting value 
*                to the local variable volume. It then returns volume to the calling function.
* RETURN VALUE : double
* ---------------------------------------------------------------------------------------------------------------------------------------------------------------*
*****************************************************************************************************************************************************************/

double Cuboid::volume()
{
	double volume;
	volume = (length * width * height);
	return volume;
}

/******************************************************************************************************************************************************************
* NAME         : surfaceArea()
* DESCRIPTION  : This method calculates the surface area for a cuboid object. It utilizes the following equation :  ((length * height) *  2) + (width * height) *2)
*                to calculate a value which it then stores in the local variable surfaceArea. It then returns surfaceArea to the calling function.
* RETURN VALUE : double
* ----------------------------------------------------------------------------------------------------------------------------------------------------------------*
******************************************************************************************************************************************************************/

double Cuboid::surfaceArea()
{
	double surfaceArea;
	surfaceArea = (((length * height) * 2) + (width * height) * 2);
	return surfaceArea;
}

/******************************************************************************************************************************************************************
* NAME         : increaseDimension(double factor)
* DESCRIPTION  : This method takes in a double value that represents the value that the user would like to factor the cuboid dimensions by. It stores this value in
*                local variable factor, and modifies the variables height, length, and width by multiplying the factor value to each and reassigning he updated value
*                to the instance member variables.
* RETURN VALUE : void
* ----------------------------------------------------------------------------------------------------------------------------------------------------------------*
******************************************************************************************************************************************************************/

void Cuboid::increaseDimension(double factor)
{
	length *= factor;
	width  *= factor;
	height *= factor;
}