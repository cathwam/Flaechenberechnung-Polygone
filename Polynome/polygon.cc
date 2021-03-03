
#include "polygon.hh"
#include "point.hh"
#include <vector>


// Konstruktor mit Liste von Eckpunkten
Polygon::Polygon(const std::vector<Point>& corners)
    : _corner_vec(corners)
{}

// Konstruktor mit Liste von x und y
Polygon::Polygon(const std::vector<double>& x, const std::vector<double>& y) {
    int length = std::min(x.size(), y.size());

    for (int i = 0; i < length; i++)
        _corner_vec.push_back(Point(x[i], y[i]));
}


std::size_t Polygon::corners() const {
    return _corner_vec.size();
}


const Point& Polygon::corner(std::size_t i) const {
    return _corner_vec[i];
}



double Polygon::volume() const {
    int size = this->corners();
    if (size <= 2)
        return 0;

    double A = 0;
    for (int i = 0; i < size; i++) 
        A += this->corner(i).x() * this->corner(i == size - 1 ? 0 : i + 1).y() - this->corner(i == size - 1 ? 0 : i + 1).x() * this->corner(i).y();

    return A/2;
}
