#pragma once
#include <string>
#include <iostream>

using namespace std;
namespace ariel
{
}
    class Point
    {
    private:
        double x_cor;
        double y_cor;

    public:
        Point(double x_cor, double y_cor);
        // Point(Point &point);
        Point();
        double distance(Point secondPoint);
        string printPoint();
        static Point moveTowards(Point sourcePoint, Point destPoint, double distance);
        bool operator==(const Point& secondPoint) const;
    };
