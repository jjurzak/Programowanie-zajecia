#pragma once
#include <iostream>
using namespace std;

class TPoint
{
	private:
		double x;	
		double y;
    public:
	  // Konstruktory
		TPoint();
		TPoint(double x, double y);
		TPoint(const TPoint& other);
	  // Destruktor
		~TPoint();

	  // Selektory
		double GetX() const;
		double GetY() const;
		double DistanceToPoint(const TPoint& other) const;

		void Display() const;

	  // Modyfikatory
		void SetX(double x);
		void SetY(double x);
		void MoveBy(double dx, double dy);
		void MoveToPoint(const TPoint& other);

		TPoint& operator=(const TPoint& other);
};

ostream& operator<<(ostream& out, const TPoint& p);