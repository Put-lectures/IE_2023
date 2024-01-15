#include "rectangle.h"
#include <cmath>
float Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(float newWidth)
{
    if (newWidth > 0)
        width = newWidth;
}

void Figure::move(float dx, float dy)
{
    x += dx;
    y += dy;
}

void Figure::rotate(float dalpha)
{
    angle += dalpha;
}

void Circle::display()
{
    glPushMatrix();
    glTranslatef(x, y, 0);
    glRotatef(angle, 0, 0, 1);
    glColor3f(red, green, blue);
    glBegin(GL_POLYGON);
    for (float a = 0; a < 360; a += 5) {
        glVertex2f(radius * sin(a / 180 * M_PI), radius * cos(a / 180 * M_PI));
    }
    glEnd();
    glPopMatrix();
}

void Rectangle::display()
{
    glPushMatrix();
    glTranslatef(x, y, 0);
    glRotatef(angle, 0, 0, 1);
    glColor3f(red, green, blue);
    glBegin(GL_POLYGON);
    glVertex2f(-width / 2, height / 2);
    glVertex2f(width / 2, height / 2);
    glVertex2f(width / 2, -height / 2);
    glVertex2f(-width / 2, -height / 2);
    glEnd();
    glPopMatrix();
}
