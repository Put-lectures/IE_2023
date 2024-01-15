/**
 * @file Figure.hpp
 * @brief Definition of the Figure, Circle, and Rectangle classes for a simple graphics library.
 */
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <GL/freeglut.h>
#include <GL/gl.h>

/**
 * @class Figure
 * @brief Base class representing a geometric figure with common properties and methods.
 */
class Figure
{
protected:
    //! Rotation angle in degrees.
    float angle = 0;

    float x = 0, y = 0;
    //! Color components in the range <0;1>.
    float red = 1, green = 1, blue = 0;
    bool is_visible = true;

public:
    /**
     * @brief Constructor for the Figure class.
     * @param angle Initial rotation angle in degrees.
     */
    Figure(float angle = 0);

    /**
     * @brief Moves the object by a specified vector.
     * @param dx The change in the x-coordinate.
     * @param dy The change in the y-coordinate.
     */
    void move(float dx, float dy);

    /**
     * @brief Rotates the figure by a specified angle in degrees.
     * @param dalpha The angle in degrees.
     */
    void rotate(float dalpha);

    /**
     * @brief Pure virtual function to display the figure.
     */
    virtual void display() = 0;
};

/**
 * @class Triangle
 * @brief Derived class representing a triangle, inheriting from the Figure class.
 */
class Triangle : public Figure
{
    float side_length; //!< Length of each side of the triangle.

public:
    /**
     * @brief Constructor for the Triangle class.
     * @param side Length of each side of the triangle.
     */
    Triangle(float side);

    /**
     * @brief Function to display the triangle.
     */
    void display();
};

/**
 * @class Circle
 * @brief Derived class representing a circle, inheriting from the Figure class.
 */
class Circle : public Figure
{
    float radius; //!< Radius of the circle.

public:
    /**
     * @brief Constructor for the Circle class.
     * @param r Radius of the circle.
     */
    Circle(float r = 0.5);

    /**
     * @brief Function to display the circle.
     */
    void display();
};

/**
 * @class Rectangle
 * @brief Derived class representing a rectangle, inheriting from the Figure class.
 */
class Rectangle : public Figure
{
    float width = 0.5; //!< Width of the rectangle.
    float height = 1;  //!< Height of the rectangle.

public:
    /**
     * @brief Default constructor for the Rectangle class.
     */
    Rectangle();

    /**
     * @brief Constructor for the Rectangle class with a scale factor.
     * @param scale Scale factor to determine width and height.
     */
    Rectangle(float scale);

    /**
     * @brief Constructor for the Rectangle class with specified width and height.
     * @param width Width of the rectangle.
     * @param height Height of the rectangle.
     */
    Rectangle(float width, float height);

    /**
     * @brief Destructor for the Rectangle class.
     */
    ~Rectangle();

    /**
     * @brief Function to resize the rectangle.
     */
    void display();

    /**
     * @brief Getter function to retrieve the width of the rectangle.
     * @return Width of the rectangle in meters.
     */
    float getWidth() const;

    /**
     * @brief Setter function to set a new width for the rectangle.
     * @param newWidth New width of the rectangle.
     */
    void setWidth(float newWidth);
};

#endif // RECTANGLE_H
