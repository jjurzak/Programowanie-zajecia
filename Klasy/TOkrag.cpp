#include "TOkrag.h"

TOkrag::TOkrag(const TPoint& p2)
{
	this->p2 = p2;
}

TOkrag::TOkrag(const TOkrag& other)
{
	this->p2 = other.p2;
}

TOkrag TOkrag::GetP2() const
{
	return p2;
}

void TOkrag::Display() const
{
	p2.Display();
}

double TOkrag::Area() const
{
	double dx = fabs(p2.GetX() * p2.GetX());
	double dy = 3.14;

	return dx * dy;
}

double TOkrag::Perimeter() const
{
	double dx = 2 * 3.14;
	double dy = p2.GetY();

	return dx * dy;
}

ostream& operator<<(ostream& out, const TOkrag& other)
{
	out << other.GetP2() << " - ";

	return out;
}
