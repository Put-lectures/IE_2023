#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

class Point2D
{
protected:
    float x_;
    float y_;

public:
    Point2D(float x = 0, float y = 0)
        : x_(x)
        , y_(y)
    {}
    virtual void print() { cout << x_ << ", " << y_ << endl; }
    float length() { return sqrt(x_ * x_ + y_ * y_); }
};

class Point3D : public Point2D
{
    float z_;

public:
    Point3D(float x, float y, float z)
        : Point2D(x, y)
        , z_(z)
    {}
    void print()
    {
        // Point2D::print();
        cout << x_ << ", " << y_ << ", " << z_ << endl;
    }
};

int main()
{
    vector<Point2D *> points;
    points.emplace_back(new Point2D(1, 2));
    points.emplace_back(new Point3D(2, 2, 8));
    points.emplace_back(new Point3D(2, 4, 8));
    points.emplace_back(new Point2D(4, 2));

    for (auto &ptr : points) {
        ptr->print();
    }

    return 0;
}
