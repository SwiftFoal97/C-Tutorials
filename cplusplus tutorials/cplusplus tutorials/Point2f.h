
#ifndef POINT2F_H_
#define POINT2F_H_

class Point2f
{
private:
    float x;
    float y;

public:
    Point2f();
    Point2f(float, float);
    ~Point2f();

    void setX(float x);
    float getX();

    void setY(float y);
    float getY();
};

#endif

