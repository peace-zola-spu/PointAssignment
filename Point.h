// Title: Point.h
// Declaration of the Point class
// Author: Peace Kimia Zola
// Created: 2024-05-12
#ifndef POINTCLASS_POINT_H
#define POINTCLASS_POINT_H

class Point {
public:
    // Constructor with parameters
    Point(double x = 0.0, double y = 0.0, double z = 0.0);

    void SetX(double x);
    void SetY(double y);
    void SetZ(double z);
    double GetX() const;
    double GetY() const;
    double GetZ() const;

private:
    double _x;
    double _y;
    double _z;
};

#endif //POINTCLASS_POINT_H