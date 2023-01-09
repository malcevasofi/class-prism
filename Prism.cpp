/*
	Prism.cpp
	Maltseva S.A., 04.01.2023
*/

#include "Prism.h"

// method for calculating the volume
double Prism::Volume() const 
{
	return (height * Square());
}

// method for calculating the square
double Box::Square() const 
{
	return (width * width);
}

