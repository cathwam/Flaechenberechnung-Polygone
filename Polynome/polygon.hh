// Loris Wilwert, Raphael Julien Ebner, Catherine Wampach
#include "point.hh"
#include <vector>

#ifndef POLYGON_HH
#define POLYGON_HH

/* ----- Punkt b ----- */
class Polygon {
    // die Member-Variablen sind private (default)
    std::vector<Point> _corner_vec;

    public:
        // Konstruktor mit Liste von Eckpunkten
        Polygon(const std::vector<Point>& corners);
        // Konstruktor mit Liste von x und y
        Polygon(const std::vector<double>& x, const std::vector<double>& y);

        std::size_t corners() const;

        const Point& corner(std::size_t i) const;

        /* ----- Punkt c ----- */
        double volume() const;
};
#endif // POLYGON_HH