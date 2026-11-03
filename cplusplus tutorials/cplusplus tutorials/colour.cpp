/*
* Example Implementation File (Colour.cpp)
*/

#include "colour.hpp"

Colour::Colour()
{
    red = MAX;
    blue = MAX;
    green = MAX;
}

Colour::Colour(unsigned char r, unsigned char g, unsigned char b)
{
    setRed(r);
    setGreen(g);
    setBlue(b);
}

Colour::~Colour()
{

}
void Colour::setRed(unsigned char red)
{
    this->red = red;
}

unsigned char Colour::getRed()
{
    return this->red;
}

void Colour::setGreen(unsigned char green)
{
    this->green = green;
}

unsigned char Colour::getGreen()
{
    return green;
}

void Colour::setBlue(unsigned char blue)
{
    this->blue = blue;
}

unsigned char Colour::getBlue()
{
    return blue;
}