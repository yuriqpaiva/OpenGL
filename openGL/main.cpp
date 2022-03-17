#include <GL/glew.h>
#include <GL/glut.h>  


void display() {  // Display function will draw the image.

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);

    glVertex2f(-0.8, -0.8);
    glVertex2f(0.8, -0.8);
    glVertex2f(0, 0.8);

    glColor3f(0.1, 0.5, 100); 

    glEnd();

    glutSwapBuffers(); // Required to copy color buffer onto the screen.

}


int main(int argc, char** argv) {  // Initialize GLUT and 

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);    // Use single color buffer and no depth buffer.
    glutInitWindowSize(500, 500);         // Size of display area, in pixels.
    glutInitWindowPosition(200, 200);     // Location of window in screen coordinates.
    glutCreateWindow("OpenGL Triangle"); // Parameter is window title.
    glutDisplayFunc(display);            // Called when the window needs to be redrawn.

    glutMainLoop(); // Run the event loop!  This function does not return.
                    // Program ends when user closes the window.
    return 0;

}
