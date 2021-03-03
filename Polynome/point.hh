
#ifndef POINT_HH
#define POINT_HH

class Point {
    // die Member-Variablen sind private (default)
    const double _x;
    const double _y;

    public:
        // Default-Konstruktor
        Point();
        // Konstruktor mit x und y
        Point(double x, double y);

        // Accessor-Methode von x
        double x() const;
        // Accessor-Methode von y
        double y() const;
};
#endif // POINT_HH
