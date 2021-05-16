#include<iostream>
#include "GL/glut.h"

void reshape (int w, int h)
{
  float ratio = w * 1.0 / h;

  glMatrixMode(GL_PROJECTION);

  glLoadIdentity();
  
  glViewport(0,0,(GLsizei)w,(GLsizei)h);

  gluPerspective(45, ratio,1,100);

  glutPostRedisplay();
}

void display(void)
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  glBegin(GL_TRIANGLES);
//    glVertex3f(-2, -2, -5.0);
//    glVertex3f(2, 0.0, -5.0);
//    glVertex3f(0.0, 2, -5.0);
  glEnd();

  glutSwapBuffers();
}

int main(int argc, char** argv)
  {
  std::cout<< "Hello world!" << std::endl;

  // Initialize GLUT with command line parameters.
  glutInit(&argc, argv);

  // Set display mode
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  // Set window size
  glutInitWindowSize(300, 300);

  // Window position
  glutInitWindowPosition(0,0);

  // Drawable Viewport
  glViewport(0,0,300,300);

  // Create window
  glutCreateWindow("Example window");

  // Initialise GLUT (callbacks)
  glutDisplayFunc(display);
  glutReshapeFunc(reshape);
  // Enter the GLUT event loop
  glutMainLoop();
  return 0;
}
