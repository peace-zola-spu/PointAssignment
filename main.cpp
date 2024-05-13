#include <iostream>
#include <math.h>
#include "Point.h"
#include "Point.cpp"
using std::cout;
using std::endl;
double Distance(const Point& p1, const Point& p2) {
    double total;
    total = (p1.GetX() - p2.GetX())*(p1.GetX() - p2.GetX());
    total += (p1.GetY() - p2.GetY())*(p1.GetY() - p2.GetY());
    total += (p1.GetZ() - p2.GetZ())*(p1.GetZ() - p2.GetZ());
    return sqrt(total);
}
int main() {
    Point point1;
    Point point2;
    point1.SetX(1.0);
    point1.SetY(0.0);
    point1.SetZ(0.0);
    point2.SetX(0.0);
    point2.SetY(1.0);
    point2.SetZ(0.0);
    cout << Distance(point1, point2) << endl;
    return 0;
}
