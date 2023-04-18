#ifndef Swordsman_h
#define Swordsman_h

#include <GLFW/glfw3.h>
#include <GLUT/GLUT.h>
#include <thread>
#include <chrono>

void drawSwordsman(bool isMy = true, bool isMoving = false, float xMov = 0, float yMov = 0)
{
    
    glBegin(GL_TRIANGLES);
    if(isMoving == false)
    {
        glColor3ub(105, 105, 105);
        glVertex2f(-0.5, 0.3);
        glVertex2f(0.5, 0.3);
        glVertex2f(0.0, -0.6);
        
        glColor3ub(0, 0, 0);
        glVertex2f(-0.3, 0.2);
        glVertex2f(-0.1, 0.2);
        glVertex2f(-0.1, -0.1);
        
        glColor3ub(0, 0, 0);
        glVertex2f(0.3, 0.2);
        glVertex2f(0.1, 0.2);
        glVertex2f(0.1, -0.1);
        
        glColor3ub(119,136,153);
        glVertex2f(0.1, -0.1);
        glVertex2f(0.15, -0.2);
        glVertex2f(0.7, -0.1);
        
        glColor3ub(153,76,0);
        glVertex2f(0.05, -0.2);
        glVertex2f(0.1, -0.1);
        glVertex2f(0.15, -0.2);
    }
   /* else
    {
        for(short i = 0; i<255; i++)
        {
            
            glColor3ub(105, 105, 105);
            glVertex2f(-0.5+xMov, 0.3+yMov);
            glVertex2f(0.5+xMov, 0.3+yMov);
            glVertex2f(0.0+xMov, -0.6+yMov);
            
            glColor3ub(0, 0, 0);
            glVertex2f(-0.3+xMov, 0.2+yMov);
            glVertex2f(-0.1+xMov, 0.2+yMov);
            glVertex2f(-0.1+xMov, -0.1+yMov);
            
            glColor3ub(0, 0, 0);
            glVertex2f(0.3+xMov, 0.2+yMov);
            glVertex2f(0.1+xMov, 0.2+yMov);
            glVertex2f(0.1+xMov, -0.1+yMov);
            
            glColor3ub(119,136,153);
            glVertex2f(0.1+xMov, -0.1+yMov);
            glVertex2f(0.15+xMov, -0.2+yMov);
            glVertex2f(0.7+xMov, -0.1+yMov);
            
            glColor3ub(153,76,0);
            glVertex2f(0.05+xMov, -0.2+yMov);
            glVertex2f(0.1+xMov, -0.1+yMov);
            glVertex2f(0.15+xMov, -0.2+yMov);
            xMov++;
            yMov++;
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
               
        }
    }*/
    
    glEnd();
}



#endif /* Swordsman_h */
