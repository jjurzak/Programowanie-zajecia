#pragma once
#include "TPoint.h"
#include <math.h>

class TOkrag
{
private:
	TPoint p2;
public:
	TOkrag(const TPoint& p2);
	TOkrag(const TOkrag& other);
	TOkrag GetP2() const;

	void Display() const;

	double Area() const;
	double Perimeter() const;
};

ostream& operator<< (ostream& out, const TOkrag& other);