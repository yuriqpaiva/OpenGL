//#include <GL/glew.h>
//#include <GL/glut.h>  
//#include <iostream>
//
//void display() {  // Display function will draw the image.
//
//    glClearColor(0, 0, 0, 1);  // Background RGB
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    glBegin(GL_TRIANGLES);
//
//    glVertex2f(-0.8, -0.8);
//    glVertex2f(0.8, -0.8);
//    glVertex2f(0, 0.8);
//
//    glColor3f(0.1, 0.5, 100); 
//
//    glEnd();
//
//    glutSwapBuffers(); // Required to copy color buffer onto the screen.
//
//}
//
//
//int main(int argc, char** argv) {  // Initialize GLUT and 
//
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE);    // Use single color buffer and no depth buffer.
//    glutInitWindowSize(500, 500);         // Size of display area, in pixels.
//    glutInitWindowPosition(200, 200);     // Location of window in screen coordinates.
//    glutCreateWindow("OpenGL Triangle"); // Parameter is window title.
//    glutDisplayFunc(display);            // Called when the window needs to be redrawn.
//
//    glutMainLoop(); // Run the event loop!  This function does not return.
//                    // Program ends when user closes the window.
//    return 0;
//
//}

//#include <GL/glew.h>
//#include <GL/glut.h>
//#include <cstdio>
//
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);
//    glutCreateWindow("Mostrar Vers�o OpenGL");
//
//    glewInit();
//    const GLubyte* renderer = glGetString(GL_RENDERER);
//    const GLubyte* vendor = glGetString(GL_VENDOR);
//
//    GLint major, minor;
//    glGetIntegerv(GL_MAJOR_VERSION, &major);
//    glGetIntegerv(GL_MINOR_VERSION, &minor);
//
//    printf("Dados sobre o OpenGL do sistema: \n\n");
//    printf("Fornecedor     = %s\n", vendor);
//    printf("Renderizador   = %s\n", renderer);
//    printf("Versao         = %d.%d\n", major, minor);
//}


