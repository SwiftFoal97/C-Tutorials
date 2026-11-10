/*
* Example Implementation File (Colour.cpp)
*/

#include "colour.hpp"

Colour::Colour()
{
    red = MAX;
    blue = MAX;
    green = MAX;
    alpha = 1.0f;
}

Colour::Colour(unsigned char r, unsigned char g, unsigned char b, float a)
{
    setRed(r);
    setGreen(g);
    setBlue(b);
    setAlpha(a);
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
void Colour::setAlpha(float alpha)
{
    this->alpha = alpha;
}

float Colour::getAlpha()
{
    return alpha;
}
void Colour::brighten(void)
{
    if (red < MAX)
    {
        red++;
    }

    if (green < MAX)
    {
        green++;
    }

    if (blue < MAX)
    {
        blue++;
    }
}