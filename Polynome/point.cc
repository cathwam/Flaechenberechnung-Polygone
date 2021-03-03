// Loris Wilwert, Raphael Julien Ebner, Catherine Wampach
#include "point.hh"


/* ----- Punkt a ----- */

// Default-Konstruktor
Point::Point()
    : _x(0), _y(0)
{}

// Konstruktor mit x und y
Point::Point(double x, double y)
    : _x(x), _y(y)
{}

// Accessor-Methode von x
double Point::x() const {
    return _x;
}

// Accessor-Methode von y
double Point::y() const {
    return _y;
}