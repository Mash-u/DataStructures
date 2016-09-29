#include "Point.h"
#include <math.h>

/************************************************************************************************************************************************************
* NAME         : Point() 
* DESCRIPTION  : This is the default contructor for the Point class. x and y instance variable members are initialized to 0. 
* RETURN VALUE : no return value
* -----------------------------------------------------------------------------------------------------------------------------------------------------------*
*************************************************************************************************************************************************************/
Point::Point()
{
	x = 0;
	y = 0;
}
/************************************************************************************************************************************************************
* NAME         : Point(double newX, double newY)
* DESCRIPTION  : This is an alternate constructor for the Point class that takes in user-defined values for instance variables x and y. This constructor calls
                 upon the setXCoordinate() and setYCoordinate() methods to set the x and y = newX and newY.
* RETURN VALUE : No return value.
* -----------------------------------------------------------------------------------------------------------------------------------------------------------*
*************************************************************************************************************************************************************/
	
Point::Point(double newX, double newY)
{
	setXCoordinate(newX);
	setYCoordinate(newY);
}

/************************************************************************************************************************************************************
* NAME         : setXCoordinate(double newX)
* DESCRIPTION  : This function takes in a double value as a parameter, assigns it to variable newX (new x coordinates) and assigns it to the instance variable x.
* RETURN VALUE : Returns void
* -----------------------------------------------------------------------------------------------------------------------------------------------------------*
*************************************************************************************************************************************************************/

void Point::setXCoordinate(double newX)
{
	x = newX;
}

/************************************************************************************************************************************************************
* NAME         : setYCoordinate(double newY)
* DESCRIPTION  : This function takes in a double value as a parameter, assigns it to variable newY (new x coordinates) and assigns it to the instance variable x.
* RETURN VALUE : Returns void
* -----------------------------------------------------------------------------------------------------------------------------------------------------------*
*************************************************************************************************************************************************************/

void Point::setYCoordinate(double newY)
{
	y = newY;
}

/************************************************************************************************************************************************************
* NAME         : getXCoordinate()
* DESCRIPTION  : This function returns the value of instance variable member x.
* RETURN VALUE : Returns a double.
* -----------------------------------------------------------------------------------------------------------------------------------------------------------*
*************************************************************************************************************************************************************/

double Point::getXCoordinate()
{
	return x;
}

/************************************************************************************************************************************************************
* NAME         : getYCoordinate()
* DESCRIPTION  : This function returns the value of instance variable member y.
* RETURN VALUE : Returns void
* -----------------------------------------------------------------------------------------------------------------------------------------------------------*
*************************************************************************************************************************************************************/

double Point::getYCoordinate()
{
	return y;
}

/************************************************************************************************************************************************************
* NAME         : distance()
* DESCRIPTION  : This function utilizes the pythagorean theorem to find the distane of the x and y coordinate pair from the origin (0,0). the square root of 
*                x squared + y squared is assigned to double variable distance which is than returned to the calling function. (the sqrt() is used from the 
                 math.h library.
* -----------------------------------------------------------------------------------------------------------------------------------------------------------*
*************************************************************************************************************************************************************/

double Point::distance() 
{
	double distance = 0;
	distance = sqrt(x * x	+ y * y);
	return distance;
}

