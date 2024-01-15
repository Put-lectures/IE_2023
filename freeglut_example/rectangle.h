#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <GL/freeglut.h>
#include <GL/gl.h>
class Rectangle
{
    float width = 0.5;
    float height = 1;
    float angle = 0;
    float x = 0, y = 0;
    float red = 1, green = 1, blue = 0;
    bool is_visible = true;
    float *tab;

public:
    Rectangle()
        : width(2)
        , height(0.8)
        , angle(0)
    {
        tab = new float[30];
    }
    Rectangle(float scale)
        : width(0.5 * scale)
        , height(1 * scale)
    {}
    Rectangle(float width, float height)
        : width(width)
        , height(height)
        , angle(0)
    {}
    ~Rectangle() {}
    void move(float dx, float dy);

    void rotate(float dalpha);
    // resize
    void display();
    // set_color
    // show
    // hide
    float getWidth() const;
    void setWidth(float newWidth);
};
// void draw_rectangle(const Rectangle &rect)
// {
//     glTranslatef(rect.x, rect.y, 0);
//     glRotatef(rect.angle, 0, 0, 1);
//     glColor3f(rect.red, rect.green, rect.blue);
//     glBegin(GL_POLYGON);
//     glVertex2f(-rect.width / 2, rect.height / 2);
//     glVertex2f(rect.width / 2, rect.height / 2);
//     glVertex2f(rect.width / 2, -rect.height / 2);
//     glVertex2f(-rect.width / 2, -rect.height / 2);
//     glEnd();
// }
#endif // RECTANGLE_H
