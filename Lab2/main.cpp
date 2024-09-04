/*
	Andrew Banks
	Computer Science Fall 2024
	Due: 9/17/2024
	Lab2 - Lab 2 Exploring Output and Classes
	Create a cylinder that stores radius and height. Calculate volume and surface area.
*/

#include <iostream>
//Allows access to everything in "Cylinder.h" file
#include "Cylinder.h"

int main() {
	//Sets the attributes values
	Cylinder c;
	c.setHeight(10);
	c.setRadius(7);
	//Outputs the sentence and Method answer
	std::cout << "With a Height of " << c.getHeight() << " and a Radius of " << c.getRadius() << std::endl;
	std::cout << "The volume of the cylinder is :" << c.calculateVolume() << std::endl;
	std::cout << "The Surface Area of the cylinder is :" << c.calculateSurfaceArea() << std::endl;
	
	return 0;
}