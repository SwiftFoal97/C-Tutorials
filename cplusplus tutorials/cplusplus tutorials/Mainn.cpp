
#include <iostream>
#include "Point2f.h"

using namespace std;

int main()
{
    cout << "Testing Point2f class" << endl;

    // Task 2: Create a static object
    Point2f point;

    // Task 3: Test the setters
    point.setX(10.5f);
    point.setY(20.5f);

    // Test the getters
    cout << "Static Point: "
        << point.getX() << ", "
        << point.getY() << endl;

    // Task 4: Create a dynamic object
    Point2f* dynamicPoint;

    dynamicPoint = new Point2f();

    // Test the setters
    dynamicPoint->setX(30.5f);
    dynamicPoint->setY(40.5f);

    // Test the getters
    cout << "Dynamic Point: "
        << dynamicPoint->getX() << ", "
        << dynamicPoint->getY() << endl;

    // Release dynamically allocated memory
    delete dynamicPoint;

    // Task 5: Test overloaded constructor
    Point2f anotherPoint(50.5f, 60.5f);

    cout << "Overloaded Constructor: "
        << anotherPoint.getX() << ", "
        << anotherPoint.getY() << endl;

    return 0;
}
