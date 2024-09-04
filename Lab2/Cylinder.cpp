#include "Cylinder.h"
#include <cmath>

//Constructor sets defualt values
Cylinder::Cylinder() {

	radius = 0.0;
	height = 0.0;
	Pi = 3.14159265;
}

Cylinder::~Cylinder()
{
}

//Setters
void Cylinder::setRadius(double r)
{
	radius = r;
}

void Cylinder::setHeight(double h)
{
	height = h;
}

//Getters
double Cylinder::getRadius()
{
	return radius;
}

double Cylinder::getHeight()
{
	return height;
}

//Methods
double Cylinder::calculateVolume()
{
	return Pi*pow(radius,2)*height;
}

double Cylinder::calculateSurfaceArea()
{
	return ((Pi * pow(radius, 2))*2)+((Pi * 2 * radius) * height);
}
