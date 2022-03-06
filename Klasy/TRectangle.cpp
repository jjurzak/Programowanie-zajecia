#include "TRectangle.h"
#include <iostream>

using namespace std;

TRectangle::TRectangle(const TPoint& p1, const TPoint& p2)
{
	this->p1 = p1;
	this->p2 = p2;
}

TRectangle::TRectangle(const TRectangle& other)
{
	this->p1 = other.p1;
	this->p2 = other.p2;
}

void TRectangle::Display() const
{
	//p1.Display();
	//p2.Display();

	cout << p1 << " " << p2 << endl;
}

TPoint TRectangle::GetP1() const
{
	return p1;
}

TPoint TRectangle::GetP2() const
{
	return p2;
}

double TRectangle::Area() const
{
	double dx = fabs(p1.GetX() - p2.GetX());
	double dy = fabs(p1.GetY() - p2.GetY());

	return dx * dy;
}
double TRectangle::Perimeter() const
{
	double dx = fabs(p1.GetX() - p2.GetX());
	double dy = fabs(p1.GetY() - p2.GetY());

	return 2 * dx + 2 * dy;
}

void TRectangle::MoveBy(double dx, double dy)
{
	p1.MoveBy(dx, dy);
	p2.MoveBy(dx, dy);
}

TRectangle& TRectangle::operator=(const TRectangle& other)
{
	this->p1 = other.p1;
	this->p2 = other.p2;
	return *this;
}

ostream& operator<<(ostream& out, const TRectangle& other)
{
	out << other.GetP1() << " - " << other.GetP2();

	return out;
}
