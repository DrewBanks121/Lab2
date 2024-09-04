#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {

public:

	// Constructor and Destructor
	Cylinder();
	~Cylinder();

	//Setters
	void setRadius(double r);
	void setHeight(double h);
	

	//Getters
	double getRadius();
	double getHeight();

	//Methods
	double calculateVolume();
	double calculateSurfaceArea();
private:
	//Attributes
	double radius;
	double height;
	double Pi;
};

#endif // !CYLINDER_H
