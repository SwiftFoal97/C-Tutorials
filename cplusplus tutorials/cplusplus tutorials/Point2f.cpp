
#include "Point2f.h"

Point2f::Point2f()
{
    x = 0.0f;
    y = 0.0f;
}

Point2f::Point2f(float x, float y)
{
    setX(x);
    setY(y);
}

Point2f::~Point2f()
{

}

void Point2f::setX(float x)
{
    this->x = x;
}

float Point2f::getX()
{
    return x;
}

void Point2f::setY(float y)
{
    this->y = y;
}

float Point2f::getY()
{
    return y;
}
