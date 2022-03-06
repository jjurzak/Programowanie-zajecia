// P_II_lab_Pon_1230.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "TPoint.h"
#include "TRectangle.h"
#include "TOkrag.h"

int main()
{
	const TPoint p;

	TPoint p2(1, 5);
	TPoint p3 = p2;

	p3 = p;

	p3.~TPoint();

	cout << p.GetX() << " " << p.GetY() << endl;
	cout << p2.GetX() << " " << p2.GetY() << endl;
	cout << p3.GetX() << " " << p3.GetY() << endl;
	cout << p3.DistanceToPoint(p) << endl;
	p2.SetX(2);
	p3.MoveBy(10, 20);

	p2.MoveToPoint(p);
	p.Display();
	p2.Display();
	p3.Display();

	cout << p.DistanceToPoint(p3) << endl;

	TRectangle r1(p2, p3);
	TRectangle r2(r1);

	r1.Display();
	r2.Display();

	r2.MoveBy(20, 11);

	cout << r1 << endl;
	cout << r2 << endl;

	cout << " Pole= " << r1.Area() << " Obw=" << r1.Perimeter() << endl;
	cout << " Pole= " << r2.Area() << " Obw=" << r2.Perimeter() << endl;

	TOkrag o1(p2);

	o1.Display();

	cout << o1 << endl;

	cout << " Pole= " << o1.Area() << " Obw=" << o1.Perimeter() << endl;

}

