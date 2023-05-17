#include "Point.hpp"
#include <iostream>
using namespace ariel;
using namespace std;

// constractor
Point ::Point(double x_cor, double y_cor)
{
    this->x_cor = x_cor;
    this->y_cor = y_cor;
};

// Point ::Point(Point &point)
// {
// }
Point ::Point()
{
}
double Point ::distance(Point secondPoint)
{
    return 0;
}
string Point ::printPoint()
{
    return "";
}
Point Point ::moveTowards(Point sourcePoint, Point destPoint, double distance)
{
    Point a(1,2);
    return a;
}
bool Point::operator==(const Point& secondPoint) const
{
    return true;       
};
