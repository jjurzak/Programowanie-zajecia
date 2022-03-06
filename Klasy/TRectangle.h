#pragma once
#include "TPoint.h"
class TRectangle
{
private:
	TPoint p1, p2;
public:
	TRectangle(const TPoint& p1, const TPoint& p2);
	TRectangle(const TRectangle& other);

	void Display() const;
	TPoint GetP1() const;
	TPoint GetP2() const;

	double Area() const;
	double Perimeter() const;

	void MoveBy(double dx, double dy);
	TRectangle& operator =(const TRectangle& other);

};

ostream& operator<< (ostream& out, const TRectangle& other);