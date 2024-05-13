// Title: Point.cpp
// Implementation of the Point class methods
// Author: Peace Kimia Zola
// Created: 2024-05-12
#include "Point.h"

// Constructor implementation
Point::Point(double x, double y, double z) : _x(x), _y(y), _z(z) {}

// Getter Methods
double Point::GetX() const {
    return _x;
}
double Point::GetY() const {
    return _y;
}
double Point::GetZ() const {
    return _z;
}

// Setter Methods
void Point::SetX(double x) {
    _x = x;
}
void Point::SetY(double y) {
    _y = y;
}
void Point::SetZ(double z) {
    _z = z;
}
