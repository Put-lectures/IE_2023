#include "rectangle.h"

float Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(float newWidth)
{
    if (newWidth > 0)
        width = newWidth;
}

void Rectangle::move(float dx, float dy)
{
    x += dx;
    y += dy;
}

void Rectangle::rotate(float dalpha)
{
    angle += dalpha;
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
