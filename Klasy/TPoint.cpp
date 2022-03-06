#include "TPoint.h"
#include <iostream>
using namespace std;

TPoint::TPoint() :x(0), y(0)
{
}

TPoint::TPoint(double x, double y)
{
	this->x = x;
	this->y = y;
}

TPoint::TPoint(const TPoint& other)
{
	this->x = other.x;
	this->y = other.y;
}

TPoint::~TPoint()
{
	//cout << "Dziala destruktor" << endl;
}

double TPoint::GetX() const
{
	return x;
}
double TPoint::GetY() const
{
	return y;
}

double TPoint::DistanceToPoint(const TPoint& other) const
{
	double dx = this->x - other.x;
	double dy = this->y - other.y;

	return sqrt(dx * dx + dy * dy);
}

void TPoint::Display() const
{
	cout << "(" << x << " , " << y << ")" << endl;
}

void TPoint::SetX(double x)
{
	this->x = x;
}
void TPoint::SetY(double y)
{
	this->y = y;
}

void TPoint::MoveBy(double dx, double dy)
{
	x += dx;
	y += dy;
}

void TPoint::MoveToPoint(const TPoint& other)
{
	this->x = other.x;
	 this->y = other.y;
}



TPoint& TPoint::operator=(const TPoint& other)
{
	this->x = other.x;
	SetY(other.GetY());

	return *this;
}

ostream& operator<<(ostream& out, const TPoint& p) {
	out <<"("<< p.GetX() << "," << p.GetY() <<")";

	return out;
}

