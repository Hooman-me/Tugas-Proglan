#include <iostream>
#include <math.h>

#include "include/point2d.hpp"

namespace MyGeo{

Point2D::Point2D() : _x(0), _y(0), _z(0) { }

Point2D::Point2D(float x, float y, float z) : _x(x), _y(y), _z(z) { }

Point2D Point2D::operator+(const Point2D inp) 
{
    Point2D out;

    out.SetX( this->_x + inp.GetX() );
    out.SetY( this->_y + inp.GetY() );
    out.SetZ( this->_z + inp.GetZ() );

    return out;
}

Point2D Point2D::operator-(const Point2D inp) 
{
    Point2D out;

    out.SetX( this->_x - inp.GetX() );
    out.SetY( this->_y - inp.GetY() );
    out.SetZ( this->_z - inp.GetZ() );

    return out;
}

Point2D Point2D::operator*(const Point2D inp) 
{
    Point2D out;

    out.SetX( this->_x * inp.GetX() );
    out.SetY( this->_y * inp.GetY() );
    out.SetZ( this->_z * inp.GetZ() );

    return out;
}
float Point2D::DistanceTo(const Point2D& other) const {
        float dx = this->_x - other.GetX();
        float dy = this->_y - other.GetY();
        return sqrt(dx*dx + dy*dy);
    }
}