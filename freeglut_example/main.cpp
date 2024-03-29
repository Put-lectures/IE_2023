#include "rectangle.h"
#include <GL/freeglut.h>
#include <GL/gl.h>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

vector<Figure *> figs_;

int active_idx = -1;
void repaint(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    for (auto &el : figs_)
        el->display();

    glPopMatrix();

    glutSwapBuffers(); //used in case of double FBs configuration in case
}
void key(unsigned char _key, int _x, int _y)
{
    switch (_key) {
    case 27: //escape pressed
        exit(0);
    case 'a': // 'a' was pressed
        figs_[active_idx]->move(-0.1, 0);

        break;
    case 'd': // 'a' was pressed
        figs_[active_idx]->move(0.1, 0);
        break;
    case 'w': // 'a' was pressed
        figs_[active_idx]->move(0, 0.1);
        break;
    case 's': // 'a' was pressed
        figs_[active_idx]->move(0, -0.1);
        break;

    case '[': // 'a' was pressed
        figs_[active_idx]->rotate(-1);
        break;

    case ']': // 'a' was pressed
        figs_[active_idx]->rotate(1);
        break;

    case 'n':
        figs_.emplace_back(new Rectangle(0.5, (2 + rand() % 8) / 10.0));
        active_idx = figs_.size() - 1;
        break;
    case 'c':
        figs_.emplace_back(new Circle((2 + rand() % 8) / 20.0));
        active_idx = figs_.size() - 1;
        break;

    case 't':
        figs_.emplace_back(new Triangle((2 + rand() % 8) / 20.0));
        active_idx = figs_.size() - 1;
        break;

    case '+':
        active_idx++;
        if (active_idx >= figs_.size())
            active_idx = figs_.size() - 1;
        break;
    case '-':
        active_idx--;
        if (active_idx < 0)
            active_idx = 0;
        break;
    }

    glutPostRedisplay();
}
int main(int argc, char *argv[])
{
    {
        Rectangle x(2.0);
    }
    glutInit(&argc, argv);
    //initialize OPENGL double FB mode
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    //Creates window of 320x320 size where left top corner is in 100,100
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(620, 620);
    glutCreateWindow("Sample application");
    //Registreing callbacks
    glutDisplayFunc(repaint);
    // glutReshapeFunc(windowSizeChanged);
    glutKeyboardFunc(key);
    glutMainLoop();
}
