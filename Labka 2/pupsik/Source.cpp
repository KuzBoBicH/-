#include "Cone.h"

Cone::Cone()
{
    this->height = 0;
    this->radius = 0;
}

Cone::Cone(double height, double radius)
{
    this->height = height;
    this->radius = radius;
}

Cone::~Cone()
{
}

double Cone::getHeight()
{
    return this->height;
}

double Cone::getRadius()
{
    return this->radius;
}

void Cone::setHeight(double height)
{
    this->height = height;
}

void Cone::setRadius(double radius)
{
    this->radius = radius;
}

double Cone::basisArea()
{
    return 3.14 * (this->radius * this->radius);
}

double Cone::getV()
{
    return (1.0 / 3.0) * basisArea() * this->height;
}

Cone frd(Cone obj1, Cone obj2)
{
    return Cone(obj1.m_radius > obj2.m_radius ? obj1.m_radius : obj2.m_radius, obj1.m_height + obj2.m_height);
}