/*
* Example Interface / Header File (Colour.h)
*/
#ifndef COLOUR_H_
#define COLOUR_H_

class Colour
{

private:
    unsigned char red;
    unsigned char green;
    unsigned char blue;
public:
    Colour();    //Constructor
    Colour(unsigned char, unsigned char, unsigned char); //Overloaded
    ~Colour();   //Destructor

    //Access methods
    void setRed(unsigned char red);
    unsigned char getRed();

    void setGreen(unsigned char green);
    unsigned char getGreen();

    void setBlue(unsigned char blue);
    unsigned char getBlue();

    static const unsigned char MAX = 255;
};
#endif