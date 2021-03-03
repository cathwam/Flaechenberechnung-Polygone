// Loris Wilwert, Raphael Julien Ebner, Catherine Wampach
// Aufgabe 1
#include "polygon.hh"
#include "point.hh"
#include <iostream>
#include <vector>
#include <cmath>


int main() {
    /* ----- Punkt d ----- */
    const double pi = M_PI;
    
    for (int n = 1; n <= 10; n++) {
        std::vector<Point> corners;
        for (int i = 0; i < n; i++) 
            corners.push_back(Point(std::cos((double) i/n * 2 * pi), std::sin((double) i/n * 2 * pi)));
        
        Polygon pol(corners);
        double real_volume = n <= 2 ? 0 : ((double) n/2 * std::sin(2 * pi / n));
        std::cout << "Regelmäßiges " << n << "-Eck: " << std::endl;
        std::cout << "Richtige Fläche: " << real_volume << std::endl;
        std::cout << "Berechnete Fläche: " << pol.volume() << std::endl << std::endl;
    }

    /* ----- Punkt e ----- */
    std::vector<Point> ueberschlagen = {Point(0,0), Point(1,0), Point(0,1), Point(1,1)};
    Polygon ueberschlagen_pol(ueberschlagen);
    std::cout << "Überschlagenes Polygon mit den Punkten (0,0), (1,0), (0,1), (1,1):" << std::endl;
    std::cout << "Berechnete Fläche: " << ueberschlagen_pol.volume() << std::endl;
    // Die berechnete Fläche für das Beispiel ist 0, d.h. bei überschlagenen Polygonen wird die überschlagene Fläche wieder abgezogen.

    return 0;
}