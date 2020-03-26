#include "objekti.h"

void draw_axes(float len) {
    glDisable(GL_LIGHTING);
  
    glBegin(GL_LINES);
        glColor3f(0.8,0,0);
        glVertex3f(0,0,0);
        glVertex3f(len,0,0);

        glColor3f(0,0.8,0);
        glVertex3f(0,0,0);
        glVertex3f(0,len,0);

        glColor3f(0,0,0.8);
        glVertex3f(0,0,0);
        glVertex3f(0,0,len);
    glEnd();
  
    glEnable(GL_LIGHTING);
}
void draw_seperation_lines(float len) {
	glDisable(GL_LIGHTING);

	glTranslatef(0,0.1,0);
	glBegin(GL_LINES);
		glColor3f(1,1,1);
        glVertex3f(0,0,0.35);
        glVertex3f(len,0,0.35);

        glVertex3f(0,0,-0.35);
        glVertex3f(len,0,-0.35);
    glEnd();

    glTranslatef(0,-0.1,0);


    
    glEnable(GL_LIGHTING);    
}
void draw_box(){
glPushMatrix();
  glLineWidth(2);
    glTranslatef(2,0.28,0);
    glRotatef(45,0,1,0);
    glColor3f(0.3254,0.035294,0.2196);
    glutWireCube(0.3);
    glColor3f(0.3254,0.035294,0.2196);
    glutSolidCube(0.3);
    
glPopMatrix();   

}
void draw_path(){
    glPushMatrix();
        glColor3f(0.31, 0.25490, 0.290196); 
        glScalef(100, 0.1, 0.7);
        glutSolidCube(1);
    glPopMatrix();
}
void draw_ball(){
    glPushMatrix();
        glTranslatef(0,0.15,0);
        glColor3f(0.37, 0.12, 0.250); 
        glutSolidSphere(0.08,100,50);
    glPopMatrix();
}
void draw_sky(){
    glPushMatrix();
       glColor3f(0, 0, 0.2); 
       glTranslatef(4,1,0);
       glScalef(3.2, 1, -7);
       glutSolidCube(1);
    glPopMatrix();
      
}

void draw_ground(){
glPushMatrix();
		glColor3f(0.85, 0.511, 0.9);
		glTranslatef(3,0,8);
		glScalef(100,0.1,20);
		glutSolidCube(0.7);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.85, 0.511, 0.9);
		glTranslatef(3,0,-8);
		glScalef(100,0.1,20);
		glutSolidCube(0.7);
	glPopMatrix();

}

void draw_scene() {

	//draw_seperation_lines(50);
	glPushMatrix();
    	draw_path();
    	glTranslatef(0,0,0.7);
    	draw_path();
    	glTranslatef(0,0,-1.4);
    	draw_path();
    glPopMatrix();

    glPushMatrix();
    	draw_ground();
    glPopMatrix();

    
}

void draw_boxes() {
   glPushMatrix();
	draw_box();
	    for(int i = 0 ; i < 100; i++)
	    {
	    	glTranslatef(9,0,0);
	    	draw_box();
	    }
    glPopMatrix();

    glPushMatrix();
    	glTranslatef(3,0,0.6);
    	draw_box(); 
    	for(int i = 0 ; i < 100 ; i++)
	    {
	    	glTranslatef(9,0,0);
	    	draw_box();
	    }
    glPopMatrix();

    glPushMatrix();
    	glTranslatef(5,0,-0.6);
    	draw_box(); 
    	for(int i = 0 ; i < 100 ; i++)
	    {
	    	glTranslatef(9,0,0);
	    	draw_box();
	    }
    glPopMatrix();

}

