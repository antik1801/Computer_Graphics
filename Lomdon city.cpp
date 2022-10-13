#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.1415926535897932384

//int i;
GLfloat a;  /// For Lodon Eye To Rotate
GLfloat x;
GLfloat y;
GLfloat i = 0.0f;
GLfloat radius;
int triangleAmount;
GLfloat twicePi ;
 int lineAmount;






 GLfloat positionBirdAtMorning = 0.0f; /// For Bird Position At Morning
 GLfloat speedBirdAtMorning = 0.05f;    /// For Bird Speed At Morning

 GLfloat positionDifferentShipAtMorning = 0.5f; /// For Different Shape Ship Position At Morning
 GLfloat speedDifferentShipAtMorning = 0.03f;    /// For Different Shape Ship Speed At Morning

 GLfloat positionSunAtMorning = 0.0f;  /// For Sun  Position At Morning
 GLfloat speedSunAtMorning = 0.05f;    /// For Sun Speed At Morning

 GLfloat positionCarAtMorning = 0.0f; /// For Car Position At Morning
 GLfloat speedCarAtMorning = 0.04f;   /// For Car Speed At Morning




 GLfloat positionCloud1 = 0.0f;   ///  Right Cloud Moving Position At Day
 GLfloat speedCloud1= 0.03f;     /// Right Cloud Moving Speed At Day

 GLfloat positionCloud2 = 0.0f;   ///  Left Cloud Moving Position At Day
 GLfloat speedCloud2= 0.03;    /// Left Cloud Moving Speed At Day

 GLfloat positionPlaneAtDay = 0.0f;   /// Plane Flying Position At Day
 GLfloat speedPlaneAtDay = 0.04f;     /// Plane Flying Speed At Day

 GLfloat positionCarAtDay = 0.0f;  /// Car position At Day
 GLfloat speedCarAtDay=0.04f;       /// Car Speed At Day

 GLfloat positionBigShipAtDay = 0.0f;  /// Big Ship Position at Day
 GLfloat speedBigShipAtDay = 0.03f;     /// Big Ship Speed at Day

 GLfloat positionSmallShipAtDay = 0.0f;    /// Small Ship Position at Day
 GLfloat speedSmallShipAtDay = 0.03f;     /// Small Ship Speed at Day

 GLfloat positionDifferentShipAtDay = 0.0f;   /// Different Shape Ship Position at Day
 GLfloat speedDifferentShipAtDay = 0.04f;      /// Different Shape Ship Speed at Day





 GLfloat positionBigShipAtEvening = 0.0f; /// For BIG ship Position At Evening
 GLfloat speedBigShipAtEvening = 0.01f;    /// For BIG ship Speed At Evening

 GLfloat positionSmallShipAtEvening = 0.0f; /// For Small ship Position At Evening
 GLfloat speedSmallShipAtEvening = 0.04f;    /// For Small ship Speed At Evening

 GLfloat positionPlaneAtEvening = 0.0f;  /// For Plane  Position At Evening
 GLfloat speedPlaneAtEvening = 0.05f;    /// For Plane Speed At Evening

 GLfloat positionCarAtEvening = 0.0f; /// For Car Position At Evening
 GLfloat speedCarAtEvening = 0.04f;   /// For Car Speed At Evening





 GLfloat positionCloud1Night = 0.0f; /// Right Cloud Moving Position At Night
 GLfloat speedCloud1Night= 0.03f;   /// Right Cloud moving Speed At Night

 GLfloat positionCloud2Night = 0.0f;  /// Left Cloud moving Position At Night
 GLfloat speedCloud2Night= 0.03f;    /// Left Cloud moving Speed At Night

 GLfloat positionCarAtNight = 0.0f; /// For Car Position At Night
 GLfloat speedCarAtNight = 0.04f;   /// For Car Speed At Night

 GLfloat positionRain = 0.0f; /// For Rain Position At Night
 GLfloat speedRain = 0.1f;   /// For Rain Speed At Night

 GLfloat positionBigShipAtNight = 0.0f; /// For BIG ship Position At Night
 GLfloat speedBigShipAtNight = 0.04f;    /// For BIG ship Speed At Night

 GLfloat positionSmallShipAtNight = 0.0f; /// For Small ship Position At Night
 GLfloat speedSmallShipAtNight = 0.02f;    /// For Small ship Speed At Night













 void updateSunAtMorning(int value)  /// For  Sun rising In The Morning

{

    if(positionSunAtMorning <0.88) /// <0.88

        positionSunAtMorning = 1.0f;

    positionSunAtMorning = speedSunAtMorning;

    glutPostRedisplay();

	glutTimerFunc(100, updateSunAtMorning, 0);


}



void updateBirdAtMorning(int value)  /// For Car At Evening

{

    if(positionBirdAtMorning > 1.0)
        positionBirdAtMorning = -1.0f;

    positionBirdAtMorning += speedBirdAtMorning;

	glutPostRedisplay();


	glutTimerFunc(100, updateBirdAtMorning, 0);
}





void updateCarAtMorning(int value)  /// For Car At Evening

{

    if(positionCarAtMorning > 1.0)
        positionCarAtMorning = -1.0f;

    positionCarAtMorning += speedCarAtMorning;

	glutPostRedisplay();


	glutTimerFunc(100, updateCarAtMorning, 0);
}



void updateCloud1(int value)  /// For Right Cloud At Day
 {
     if(positionCloud1 < -1.0)
        positionCloud1 = 1.0f;

     positionCloud1 -=speedCloud1;

     glutPostRedisplay();

     glutTimerFunc(100,updateCloud1,0);
 }



 void updateCloud2(int value2)   /// For Left Cloud At Day
 {
     if(positionCloud2 >1.0)
        positionCloud2 = -1.0f;

     positionCloud2 +=speedCloud2;

     glutPostRedisplay();

     glutTimerFunc(100,updateCloud2,0);
 }



 void updatePlaneAtDay(int value3)  /// PLane Flying In Day

 {
     if(positionPlaneAtDay < -1.0f)
        positionPlaneAtDay = 1.0f;

     positionPlaneAtDay -=speedPlaneAtDay;

     glutPostRedisplay();

     glutTimerFunc(100,updatePlaneAtDay,0);
 }



 void updateCarAtDay(int value4)      /// Car Moving In Day
 {
     if(positionCarAtDay < -1.0)
        positionCarAtDay = 1.0f;

     positionCarAtDay -=speedCarAtDay;

     glutPostRedisplay();

     glutTimerFunc(100,updateCarAtDay,0);
 }




 void updateBigShipAtDay(int value5)     /// Big Ship Moving At Day
 {
     if(positionBigShipAtDay >1.0)
        positionBigShipAtDay = -1.0f;

     positionBigShipAtDay +=speedBigShipAtDay;

     glutPostRedisplay();

     glutTimerFunc(100,updateBigShipAtDay,0);
 }



 void updateSmallShipAtDay(int value6)  /// Small Ship Moving In Day
 {
     if(positionSmallShipAtDay >1.0)
        positionSmallShipAtDay = -1.0f;

     positionSmallShipAtDay +=speedSmallShipAtDay;

     glutPostRedisplay();

     glutTimerFunc(100,updateSmallShipAtDay,0);
 }



 void updateDifferentShipAtDay(int value7)  /// Different Shaped Ship Moving At Day
 {
     if(positionDifferentShipAtDay >1.0)
        positionDifferentShipAtDay = -1.0f;

     positionDifferentShipAtDay +=speedDifferentShipAtDay;

     glutPostRedisplay();

     glutTimerFunc(100,updateDifferentShipAtDay,0);
 }



void updateCarAtEvening(int value)  /// For Car At Evening

{

    if(positionCarAtEvening > 1.0)
        positionCarAtEvening = -1.0f;

    positionCarAtEvening += speedCarAtEvening;

	glutPostRedisplay();


	glutTimerFunc(100, updateCarAtEvening, 0);
}



void updateCarAtNight(int value)  /// For  Green Car Moving At Night

{

    if(positionCarAtNight <-1.0)
        positionCarAtNight = 1.0f;

    positionCarAtNight -= speedCarAtNight;

	glutPostRedisplay();


	glutTimerFunc(100, updateCarAtNight, 0);

}


void updateDifferentShipAtMorning(int value)  /// For Car At Evening

{

    if(positionDifferentShipAtMorning < -1.0)
        positionDifferentShipAtMorning = 1.0f;

    positionDifferentShipAtMorning -= speedDifferentShipAtMorning;

	glutPostRedisplay();


	glutTimerFunc(100, updateDifferentShipAtMorning, 0);
}



void updateBigShipAtEvening(int value)  /// For  Green Car Moving At Night

{

    if(positionBigShipAtEvening <-1.0)
        positionBigShipAtEvening = 1.0f;

    positionBigShipAtEvening -= speedBigShipAtEvening;

	glutPostRedisplay();


	glutTimerFunc(100, updateBigShipAtEvening, 0);

}



void updateSmallShipAtEvening(int value)  /// For  Green Car Moving At Night

{

    if(positionSmallShipAtEvening <-1.0)
        positionSmallShipAtEvening = 1.0f;

    positionSmallShipAtEvening -= speedSmallShipAtEvening;

	glutPostRedisplay();


	glutTimerFunc(100, updateSmallShipAtEvening, 0);

}



void updateBigShipAtNight(int value)  /// For Big Ship

{

    if(positionBigShipAtNight > 1.0)
        positionBigShipAtNight = -1.0f;

    positionBigShipAtNight += speedBigShipAtNight;

	glutPostRedisplay();


	glutTimerFunc(100, updateBigShipAtNight, 0);
}



void updateSmallShipAtNight(int value)  /// For Big Ship

{

    if(positionSmallShipAtNight > 1.0)
        positionSmallShipAtNight = -1.0f;

    positionSmallShipAtNight += speedSmallShipAtNight;

	glutPostRedisplay();


	glutTimerFunc(100, updateSmallShipAtNight, 0);
}




void updatePlaneAtEvening(int value)  /// For  Green Car Moving At Night

{

    if(positionPlaneAtEvening <-1.0)
        positionPlaneAtEvening = 1.0f;

    positionPlaneAtEvening -= speedPlaneAtEvening;

	glutPostRedisplay();


	glutTimerFunc(100, updatePlaneAtEvening, 0);

}


void updateCloud1AtNight(int value) /// Right Cloud At Night
 {
     if(positionCloud1Night < -1.0)
        positionCloud1Night = 1.0f;

     positionCloud1Night -=speedCloud1Night;

     glutPostRedisplay();

     glutTimerFunc(100,updateCloud1AtNight,0);
 }


 void updateCloud2AtNight(int value2)     /// Left Cloud At Night
 {
     if(positionCloud2Night >1.0)
        positionCloud2Night = -1.0f;

     positionCloud2Night +=speedCloud2Night;

     glutPostRedisplay();

     glutTimerFunc(100,updateCloud2AtNight,0);
 }



 void updateRain(int value)  /// For Rain At Night (To Move The Rain From Top To Bottom)

{

    if(positionRain <-1.0)

        positionRain = 1.0f;

    positionRain -= speedRain;

    glutPostRedisplay();

	glutTimerFunc(100, updateRain, 0);


}




void Idle()
{
    glutPostRedisplay(); //// marks the current window as needing to be redisplayed
}




void init()

 {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}



void Night_View()

{

    //glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClearColor(0.24f, 0.24f, 0.24f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);



    ///============================================= Field ====================================== ///

              //glColor3ub(36, 134, 13);
              glColor3ub(1, 122, 9);
              glBegin(GL_QUADS);
              glVertex2f(1,-0.25);
              glVertex2f(-1,-0.25);
              glVertex2f(-1,0);
              glVertex2f(1,0);
              glEnd();



    /// =============================== River At Night =========================================== ///

              glTranslatef(0.0f,0.05f,0.0f);
              glColor3ub(2, 30, 97);
              //glColor3ub (21, 46, 107);
              glBegin(GL_QUADS);
              glVertex2f(1,-.25);
              glVertex2f(-1,-.25);
              //glColor3ub(20, 106, 184);
              glColor3ub (9, 95, 176);
              glVertex2f(-1,-0.75);
              glVertex2f(1,-0.75);
              glEnd();
              glLoadIdentity();

     /// ====================================== Sky At Night  ======================================= ///

              //glColor3ub(246, 221, 204 );
              glColor3ub(0,0,0);
              glBegin(GL_QUADS);
              glVertex2f(1,1);
              glVertex2f(-1,1);
              //glColor3ub(240, 178, 122 );
              glColor3ub(0,0,0);
              glVertex2f(-1,0);
              glVertex2f(1,0);
              glEnd();



     /// ====================================== MOON  ==================================== ///

	x=.74f; y=.71f; radius =.11f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glLoadIdentity();


	x=.71f; y=.71f; radius =.11f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(0,0,0);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glLoadIdentity();


	/// ====================== MOON END ================================= ///




	 /// =============================== Railing +++++++++++++++++++++++++++++++++++///


    /// LEFT MOST

    glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.96f,-0.07f);
          glVertex2f(-0.96f,-0.2f);
          glEnd();

          x=-.96f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(247, 11, 2); /// Red Color
	//glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



    ////////1st

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.88f,-0.07f);
          glVertex2f(-0.88f,-0.2f);
          glEnd();

          x=-.88f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(247, 11, 2); /// Red Color
    glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/////2nd

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.8f,-0.07f);
          glVertex2f(-0.8f,-0.2f);
          glEnd();

          x=-.8f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(247, 11, 2); /// Red Color
	//glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/////////3rd


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.7f,-0.07f);
          glVertex2f(-0.7f,-0.2f);
          glEnd();

          x=-.7f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//////////4th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.6f,-0.07f);
          glVertex2f(-0.6f,-0.2f);
          glEnd();

          x=-.6f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(247, 11, 2); /// Red Color
	//glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//////////5th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.5f,-0.07f);
          glVertex2f(-0.5f,-0.2f);
          glEnd();

          x=-.5f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




	//////////6th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.4f,-0.07f);
          glVertex2f(-0.4f,-0.2f);
          glEnd();

          x=-.4f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(247, 11, 2); /// Red Color
	//glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	///////////7th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.3f,-0.07f);
          glVertex2f(-0.3f,-0.2f);
          glEnd();

          x=-.3f; y=-0.07f; radius =.01f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	///////////8th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.2f,-0.07f);
          glVertex2f(-0.2f,-0.2f);
          glEnd();

          x=-.2f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(247, 11, 2); /// Red Color
	//glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	///////////9th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.1f,-0.07f);
          glVertex2f(-0.1f,-0.2f);
          glEnd();

          x=-.1f; y=-0.07f; radius =0.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////////////10th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.0f,-0.07f);
          glVertex2f(-0.0f,-0.2f);
          glEnd();

          x=-.0f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(247, 11, 2); /// Red Color
	//glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();



	//////////11th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.1f,-0.07f);
          glVertex2f(0.1f,-0.2f);
          glEnd();

          x=.1f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//////////12th
             glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.2f,-0.07f);
          glVertex2f(0.2f,-0.2f);
          glEnd();

          x=.2f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(247, 11, 2); /// Red Color
	//glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////////////13th

	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.3f,-0.07f);
          glVertex2f(0.3f,-0.2f);
          glEnd();

          x=.3f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////////////14th
	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.4f,-0.07f);
          glVertex2f(0.4f,-0.2f);
          glEnd();

          x=.4f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(247, 11, 2); /// Red Color
	//glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/////////////15th
         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.5f,-0.07f);
          glVertex2f(0.5f,-0.2f);
          glEnd();

          x=.5f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//////////////////////16th

	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.6f,-0.07f);
          glVertex2f(0.6f,-0.2f);
          glEnd();

          x=.6f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(247, 11, 2); /// Red Color
	//glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//////////////////////17th

         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.7f,-0.07f);
          glVertex2f(0.7f,-0.2f);
          glEnd();

          x=.7f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



    ///////////////////////////18th

             glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.8f,-0.07f);
          glVertex2f(0.8f,-0.2f);
          glEnd();

          x=.8f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(247, 11, 2); /// Red Color
	//glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




	////////////////////////////////19th

	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.88f,-0.07f);
          glVertex2f(0.88f,-0.2f);
          glEnd();

          x=.88f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// Main yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// LAST Right Most

	   glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.96f,-0.07f);
          glVertex2f(0.96f,-0.2f);
          glEnd();

          x=.96f; y=-0.07f; radius =.019f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(247, 11, 2); /// Red Color
	//glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/// ============================= Railing End ====================================== ///






  /// ======================== CLOUDS AT NIGHT ========================================================== ///


  /// Cloud Right ///

     glPushMatrix();
     glTranslatef(positionCloud1Night,0.0f,0.0f);
     //glTranslatef(-0.8,-0.05,0.0);
     glTranslatef(-0.2,-0.05,0.0);  /// -0.8,-0.05,0.0 This Position is Perfect For the Clouds

	x=.9f; y=.8f; radius =.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;



	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 153);
	//glColor3ub(130, 127, 127); Main
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

////////////////////////
	x=.8f; y=.9f; radius =.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 153);
	//glColor3ub(130, 127, 127); Main
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	///////////////////////

	x=.7f; y=.8f; radius =.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 153);
	//glColor3ub(130, 127, 127); Main
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
/////////////////////////////

x=.6f; y=.8f; radius =.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 153);
	//glColor3ub(130, 127, 127); Main
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	///////////////////////////

	x=.78f; y=.8f; radius =.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 153);
	//glColor3ub(130, 127, 127); Main
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glPopMatrix();
glLoadIdentity();



   /// Cloud Left ///


     glPushMatrix();
     glTranslatef(positionCloud2Night,0.0f,0.0f);
     glTranslatef(0.6,-0.03,0.0);

    x=-.8f; y=.9f; radius =.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 153);
	//glColor3ub(130, 127, 127); Main
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	////////////////////

	x=-.7f; y=.83f; radius =.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 153);
	//glColor3ub(130, 127, 127); Main
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	////////////////

	x=-.8f; y=.83f; radius =.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 153);
	//glColor3ub(130, 127, 127); Main
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	/////////////////////////

		x=-.9f; y=.83f; radius =.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 153);
	//glColor3ub(130, 127, 127); Main
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



glPopMatrix();

glLoadIdentity();



  /// ================================ CLOUDS END =============================== ///




  /// =============================== building1 (Left Most )  ========================================== ///


              /// =============== building1 ============================= ///

              glTranslatef(-0.4f,0.0f,0.0f);
              glScalef(0.6,2,0);
              glBegin(GL_QUADS);
              //glColor3ub(169,169,169); // Main Ash Color
              glColor3ub(129, 142, 143);
              //glColor3ub(116, 122, 121);
              glVertex2f(-.6,.35);
              glVertex2f(-1,.35);
              glVertex2f(-1,0);
              glVertex2f(-.6,0);
              glEnd();


              glBegin(GL_QUADS);
              //glColor3ub(128,128,128); /// Main Ash Color
              glColor3ub(10, 135, 173);
              glVertex2f(-.5,.32);
              glVertex2f(-.6,.35);
              glVertex2f(-.6,0);
              glVertex2f(-.5,0);
              glEnd();

/// windows
                  glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.62,.33);
              glVertex2f(-.64,.33);
              glVertex2f(-.64,.3);
              glVertex2f(-.62,.3);
              glEnd();


     glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.33);
              glVertex2f(-.68,.33);
              glVertex2f(-.68,.3);
              glVertex2f(-.66,.3);
              glEnd();


  glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.7,.33);
              glVertex2f(-.72,.33);
              glVertex2f(-.72,.3);
              glVertex2f(-.7,.3);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.33);
              glVertex2f(-.76,.33);
              glVertex2f(-.76,.3);
              glVertex2f(-.74,.3);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.78,.33);
              glVertex2f(-.8,.33);
              glVertex2f(-.8,.3);
              glVertex2f(-.78,.3);
              glEnd();


                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.33);
              glVertex2f(-.84,.33);
              glVertex2f(-.84,.3);
              glVertex2f(-.82,.3);
              glEnd();


                   glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.86,.33);
              glVertex2f(-.88,.33);
              glVertex2f(-.88,.3);
              glVertex2f(-.86,.3);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.33);
              glVertex2f(-.92,.33);
              glVertex2f(-.92,.3);
              glVertex2f(-.9,.3);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.94,.33);
              glVertex2f(-.96,.33);
              glVertex2f(-.96,.3);
              glVertex2f(-.94,.3);
              glEnd();


                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.33);
              glVertex2f(-.997,.33);
              glVertex2f(-.997,.3);
              glVertex2f(-.98,.3);
              glEnd();


/// 2nd //

   glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.62,.28);
              glVertex2f(-.64,.28);
              glVertex2f(-.64,.25);
              glVertex2f(-.62,.25);
              glEnd();

  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.28);
              glVertex2f(-.68,.28);
              glVertex2f(-.68,.25);
              glVertex2f(-.66,.25);
              glEnd();


  glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.7,.28);
              glVertex2f(-.72,.28);
              glVertex2f(-.72,.25);
              glVertex2f(-.7,.25);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.28);
              glVertex2f(-.76,.28);
              glVertex2f(-.76,.25);
              glVertex2f(-.74,.25);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.78,.28);
              glVertex2f(-.8,.28);
              glVertex2f(-.8,.25);
              glVertex2f(-.78,.25);
              glEnd();



                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.28);
              glVertex2f(-.84,.28);
              glVertex2f(-.84,.25);
              glVertex2f(-.82,.25);
              glEnd();

                   glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.86,.28);
              glVertex2f(-.88,.28);
              glVertex2f(-.88,.25);
              glVertex2f(-.86,.25);
              glEnd();


                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.28);
              glVertex2f(-.92,.28);
              glVertex2f(-.92,.25);
              glVertex2f(-.9,.25);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.94,.28);
              glVertex2f(-.96,.28);
              glVertex2f(-.96,.25);
              glVertex2f(-.94,.25);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.28);
              glVertex2f(-.997,.28);
              glVertex2f(-.997,.25);
              glVertex2f(-.98,.25);
              glEnd();

/// 3rd

 glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.62,.23);
              glVertex2f(-.64,.23);
              glVertex2f(-.64,.2);
              glVertex2f(-.62,.2);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.23);
              glVertex2f(-.68,.23);
              glVertex2f(-.68,.2);
              glVertex2f(-.66,.2);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.7,.23);
              glVertex2f(-.72,.23);
              glVertex2f(-.72,.2);
              glVertex2f(-.7,.2);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.23);
              glVertex2f(-.76,.23);
              glVertex2f(-.76,.2);
              glVertex2f(-.74,.2);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.78,.23);
              glVertex2f(-.8,.23);
              glVertex2f(-.8,.2);
              glVertex2f(-.78,.2);
              glEnd();


                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.23);
              glVertex2f(-.84,.23);
              glVertex2f(-.84,.2);
              glVertex2f(-.82,.2);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.86,.23);
              glVertex2f(-.88,.23);
              glVertex2f(-.88,.2);
              glVertex2f(-.86,.2);
              glEnd();


                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.23);
              glVertex2f(-.92,.23);
              glVertex2f(-.92,.2);
              glVertex2f(-.9,.2);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.94,.23);
              glVertex2f(-.96,.23);
              glVertex2f(-.96,.2);
              glVertex2f(-.94,.2);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.23);
              glVertex2f(-.997,.23);
              glVertex2f(-.997,.2);
              glVertex2f(-.98,.2);
              glEnd();

///4
              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.18);
              glVertex2f(-.64,.18);
              glVertex2f(-.64,.15);
              glVertex2f(-.62,.15);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.66,.18);
              glVertex2f(-.68,.18);
              glVertex2f(-.68,.15);
              glVertex2f(-.66,.15);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.18);
              glVertex2f(-.72,.18);
              glVertex2f(-.72,.15);
              glVertex2f(-.7,.15);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.74,.18);
              glVertex2f(-.76,.18);
              glVertex2f(-.76,.15);
              glVertex2f(-.74,.15);
              glEnd();


                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.18);
              glVertex2f(-.8,.18);
              glVertex2f(-.8,.15);
              glVertex2f(-.78,.15);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.82,.18);
              glVertex2f(-.84,.18);
              glVertex2f(-.84,.15);
              glVertex2f(-.82,.15);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.18);
              glVertex2f(-.88,.18);
              glVertex2f(-.88,.15);
              glVertex2f(-.86,.15);
              glEnd();


                   glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.9,.18);
              glVertex2f(-.92,.18);
              glVertex2f(-.92,.15);
              glVertex2f(-.9,.15);
              glEnd();


                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.18);
              glVertex2f(-.96,.18);
              glVertex2f(-.96,.15);
              glVertex2f(-.94,.15);
              glEnd();


                    glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.98,.18);
              glVertex2f(-.997,.18);
              glVertex2f(-.997,.15);
              glVertex2f(-.98,.15);
              glEnd();
/// 5
       glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.62,.13);
              glVertex2f(-.64,.13);
              glVertex2f(-.64,.1);
              glVertex2f(-.62,.1);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.13);
              glVertex2f(-.68,.13);
              glVertex2f(-.68,.1);
              glVertex2f(-.66,.1);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.7,.13);
              glVertex2f(-.72,.13);
              glVertex2f(-.72,.1);
              glVertex2f(-.7,.1);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.13);
              glVertex2f(-.76,.13);
              glVertex2f(-.76,.1);
              glVertex2f(-.74,.1);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.78,.13);
              glVertex2f(-.8,.13);
              glVertex2f(-.8,.1);
              glVertex2f(-.78,.1);
              glEnd();


                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.13);
              glVertex2f(-.84,.13);
              glVertex2f(-.84,.1);
              glVertex2f(-.82,.1);
              glEnd();


                   glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.86,.13);
              glVertex2f(-.88,.13);
              glVertex2f(-.88,.1);
              glVertex2f(-.86,.1);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.13);
              glVertex2f(-.92,.13);
              glVertex2f(-.92,.1);
              glVertex2f(-.9,.1);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.94,.13);
              glVertex2f(-.96,.13);
              glVertex2f(-.96,.1);
              glVertex2f(-.94,.1);
              glEnd();


                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.13);
              glVertex2f(-.997,.13);
              glVertex2f(-.997,.1);
              glVertex2f(-.98,.1);
              glEnd();
///6
     glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.62,.08);
              glVertex2f(-.64,.08);
              glVertex2f(-.64,.05);
              glVertex2f(-.62,.05);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.08);
              glVertex2f(-.68,.08);
              glVertex2f(-.68,.05);
              glVertex2f(-.66,.05);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.7,.08);
              glVertex2f(-.72,.08);
              glVertex2f(-.72,.05);
              glVertex2f(-.7,.05);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.08);
              glVertex2f(-.76,.08);
              glVertex2f(-.76,.05);
              glVertex2f(-.74,.05);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.78,.08);
              glVertex2f(-.8,.08);
              glVertex2f(-.8,.05);
              glVertex2f(-.78,.05);
              glEnd();


                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.08);
              glVertex2f(-.84,.08);
              glVertex2f(-.84,.05);
              glVertex2f(-.82,.05);
              glEnd();

                   glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.86,.08);
              glVertex2f(-.88,.08);
              glVertex2f(-.88,.05);
              glVertex2f(-.86,.05);
              glEnd();


                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.08);
              glVertex2f(-.92,.08);
              glVertex2f(-.92,.05);
              glVertex2f(-.9,.05);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.94,.08);
              glVertex2f(-.96,.08);
              glVertex2f(-.96,.05);
              glVertex2f(-.94,.05);
              glEnd();


                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.08);
              glVertex2f(-.997,.08);
              glVertex2f(-.997,.05);
              glVertex2f(-.98,.05);
              glEnd();
              //glLoadIdentity();


/// =============================== building2 (Left Small)Building  ========================================= ///

         glScalef(2.4,.6,0);
         glTranslatef(0.13f,0.0f,0.0f);
         glBegin(GL_QUADS);
             //glColor3ub(166, 172, 175 ); Main Ash Color
             glColor3ub(242, 237, 245);
              glVertex2f(-.155,.32);
              glVertex2f(-.3,.31);
              glVertex2f(-.3,0);
              glVertex2f(-.155,0);
              glEnd();



/// windows1 ///

   glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.3);
              glVertex2f(-.3,.3);
              glVertex2f(-.3,.27);
              glVertex2f(-.29,.27);
              glEnd();

   glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.3);
              glVertex2f(-.28,.3);
              glVertex2f(-.28,.27);
              glVertex2f(-.26,.27);
              glEnd();



  glBegin(GL_QUADS);
            glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.3);
              glVertex2f(-.25,.3);
              glVertex2f(-.25,.27);
              glVertex2f(-.23,.27);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.3);
              glVertex2f(-.22,.3);
              glVertex2f(-.22,.27);
              glVertex2f(-.2,.27);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.3);
              glVertex2f(-.19,.3);
              glVertex2f(-.19,.27);
              glVertex2f(-.17,.27);
              glEnd();



/// window2 ///
   glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.25);
              glVertex2f(-.3,.25);
              glVertex2f(-.3,.22);
              glVertex2f(-.29,.22);
              glEnd();


          /////
            glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.25);
              glVertex2f(-.28,.25);
              glVertex2f(-.28,.22);
              glVertex2f(-.26,.22);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.25);
              glVertex2f(-.25,.25);
              glVertex2f(-.25,.22);
              glVertex2f(-.23,.22);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.25);
              glVertex2f(-.22,.25);
              glVertex2f(-.22,.22);
              glVertex2f(-.2,.22);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.25);
              glVertex2f(-.19,.25);
              glVertex2f(-.19,.22);
              glVertex2f(-.17,.22);
              glEnd();



/// window 3///

 glBegin(GL_QUADS);
            glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.2);
              glVertex2f(-.3,.2);
              glVertex2f(-.3,.17);
              glVertex2f(-.29,.17);
              glEnd();


             glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.2);
              glVertex2f(-.28,.2);
              glVertex2f(-.28,.17);
              glVertex2f(-.26,.17);
              glEnd();



  glBegin(GL_QUADS);
            glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.2);
              glVertex2f(-.25,.2);
              glVertex2f(-.25,.17);
              glVertex2f(-.23,.17);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.2);
              glVertex2f(-.22,.2);
              glVertex2f(-.22,.17);
              glVertex2f(-.2,.17);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.2);
              glVertex2f(-.19,.2);
              glVertex2f(-.19,.17);
              glVertex2f(-.17,.17);
              glEnd();


///window4///


glBegin(GL_QUADS);
            glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.15);
              glVertex2f(-.3,.15);
              glVertex2f(-.3,.12);
              glVertex2f(-.29,.12);
              glEnd();

           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.15);
              glVertex2f(-.28,.15);
              glVertex2f(-.28,.12);
              glVertex2f(-.26,.12);
              glEnd();



  glBegin(GL_QUADS);
            glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.15);
              glVertex2f(-.25,.15);
              glVertex2f(-.25,.12);
              glVertex2f(-.23,.12);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.15);
              glVertex2f(-.22,.15);
              glVertex2f(-.22,.12);
              glVertex2f(-.2,.12);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.15);
              glVertex2f(-.19,.15);
              glVertex2f(-.19,.12);
              glVertex2f(-.17,.12);
              glEnd();


/// windows 5 ///


glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.1);
              glVertex2f(-.3,.1);
              glVertex2f(-.3,.07);
              glVertex2f(-.29,.07);
              glEnd();

           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.1);
              glVertex2f(-.28,.1);
              glVertex2f(-.28,.07);
              glVertex2f(-.26,.07);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.1);
              glVertex2f(-.25,.1);
              glVertex2f(-.25,.07);
              glVertex2f(-.23,.07);
              glEnd();

  glBegin(GL_QUADS);
            glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.1);
              glVertex2f(-.22,.1);
              glVertex2f(-.22,.07);
              glVertex2f(-.2,.07);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.1);
              glVertex2f(-.19,.1);
              glVertex2f(-.19,.07);
              glVertex2f(-.17,.07);
              glEnd();





glBegin(GL_QUADS);
           glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.05);
              glVertex2f(-.3,.05);
              glVertex2f(-.3,.02);
              glVertex2f(-.29,.02);
              glEnd();


           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.05);
              glVertex2f(-.28,.05);
              glVertex2f(-.28,.02);
              glVertex2f(-.26,.02);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.05);
              glVertex2f(-.25,.05);
              glVertex2f(-.25,.02);
              glVertex2f(-.23,.02);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.05);
              glVertex2f(-.22,.05);
              glVertex2f(-.22,.02);
              glVertex2f(-.2,.02);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.05);
              glVertex2f(-.19,.05);
              glVertex2f(-.19,.02);
              glVertex2f(-.17,.02);
              glEnd();



              /// ============================== building3 Right Most (house) ========================== ///



            glScalef(.7,.75,0);
          glTranslatef(0.3,0.0,0.0);
            glBegin(GL_QUADS);
             //glColor3ub(153,163,164); /// Ash
             glColor3ub(4, 197, 204);
              glVertex2f(1,.27);
              glVertex2f(.3,.27);
              glVertex2f(.3,0);
              glVertex2f(1,0);
              glEnd();


               glBegin(GL_QUADS);
             //glColor3ub(153, 163, 164); /// Ash
             glColor3ub(4, 197, 204);
              glVertex2f(.99,.255);
              glVertex2f(.32,.255);
              glVertex2f(.32,.145);
              glVertex2f(.99,.145);
              glEnd();

/// shade ///
                glBegin(GL_QUADS);
               //glColor3ub(51, 102, 102);// main
               glColor3ub(189, 2, 142); /// Purple
              glVertex2f(1,.45);
              glVertex2f(.32,.45);
              glVertex2f(.25,.26);
              glVertex2f(1,.26);
              glEnd();


   /// door///
     glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.4,.13);
              glVertex2f(.34,.13);
              glVertex2f(.34,0);
              glVertex2f(.4,0);
              glEnd();


/// window///

             glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.98,.245);
              glVertex2f(.95,.245);
              glVertex2f(.95,.19);
              glVertex2f(.98,.19);
              glEnd();

               glBegin(GL_QUADS);
            glColor3ub(51, 102, 102);
              glVertex2f(.92,.245);
              glVertex2f(.89,.245);
              glVertex2f(.89,.19);
              glVertex2f(.92,.19);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.86,.245);
              glVertex2f(.83,.245);
              glVertex2f(.83,.19);
              glVertex2f(.86,.19);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.8,.245);
              glVertex2f(.77,.245);
              glVertex2f(.77,.19);
              glVertex2f(.8,.19);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.74,.245);
              glVertex2f(.71,.245);
              glVertex2f(.71,.19);
              glVertex2f(.74,.19);
              glEnd();

                 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.68,.245);
              glVertex2f(.65,.245);
              glVertex2f(.65,.19);
              glVertex2f(.68,.19);
              glEnd();


             glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.62,.245);
              glVertex2f(.59,.245);
              glVertex2f(.59,.19);
              glVertex2f(.62,.19);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.56,.245);
              glVertex2f(.53,.245);
              glVertex2f(.53,.19);
              glVertex2f(.56,.19);
              glEnd();


            glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(.5,.245);
              glVertex2f(.47,.245);
              glVertex2f(.47,.19);
              glVertex2f(.5,.19);
              glEnd();

/// window2///

            glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.98,.16);
              glVertex2f(.95,.16);
              glVertex2f(.95,.08);
              glVertex2f(.98,.08);
              glEnd();

               glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(.92,.16);
              glVertex2f(.89,.16);
              glVertex2f(.89,.08);
              glVertex2f(.92,.08);
              glEnd();


                glBegin(GL_QUADS);
              glColor3ub(51, 102, 102);
              glVertex2f(.86,.16);
              glVertex2f(.83,.16);
              glVertex2f(.83,.08);
              glVertex2f(.86,.08);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.8,.16);
              glVertex2f(.77,.16);
              glVertex2f(.77,.08);
              glVertex2f(.8,.08);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.74,.16);
              glVertex2f(.71,.16);
              glVertex2f(.71,.08);
              glVertex2f(.74,.08);
              glEnd();

                 glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.68,.16);
              glVertex2f(.65,.16);
              glVertex2f(.65,.08);
              glVertex2f(.68,.08);
              glEnd();

             glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.62,.16);
              glVertex2f(.59,.16);
              glVertex2f(.59,.08);
              glVertex2f(.62,.08);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.56,.16);
              glVertex2f(.53,.16);
              glVertex2f(.53,.08);
              glVertex2f(.56,.08);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.5,.16);
              glVertex2f(.47,.16);
              glVertex2f(.47,.08);
              glVertex2f(.5,.08);
              glEnd();


              /// win3 ///

             glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.98,.06);
              glVertex2f(.95,.06);
              glVertex2f(.95,0);
              glVertex2f(.98,0);
              glEnd();

               glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.92,.06);
              glVertex2f(.89,.06);
              glVertex2f(.89,.0);
              glVertex2f(.92,.0);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.86,.06);
              glVertex2f(.83,.06);
              glVertex2f(.83,.0);
              glVertex2f(.86,.0);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.8,.06);
              glVertex2f(.77,.06);
              glVertex2f(.77,.0);
              glVertex2f(.8,.0);
              glEnd();

                glBegin(GL_QUADS);
            glColor3ub(240, 232, 10);
              glVertex2f(.74,.06);
              glVertex2f(.71,.06);
              glVertex2f(.71,.0);
              glVertex2f(.74,.0);
              glEnd();

                 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.68,.06);
              glVertex2f(.65,.06);
              glVertex2f(.65,.0);
              glVertex2f(.68,.0);
              glEnd();

            glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.62,.06);
              glVertex2f(.59,.06);
              glVertex2f(.59,.0);
              glVertex2f(.62,.0);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.56,.06);
              glVertex2f(.53,.06);
              glVertex2f(.53,.0);
              glVertex2f(.56,.0);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.5,.06);
              glVertex2f(.47,.06);
              glVertex2f(.47,.0);
              glVertex2f(.5,.0);
              glEnd();
              glLoadIdentity();


        /// ================================================= End =================================================================== ///





              /// ================================== LONDON EYE ========================================= ///



              /// stands ///
              glTranslatef(-0.18f,0.05f,0.0f);
              glBegin(GL_QUADS);
              //glColor3ub(176, 14, 125);
              glColor3ub(158, 9, 128);
              glVertex2f(0,.4);
              glVertex2f(-0.04,.4);
              glVertex2f(-.14,-.2);
               glVertex2f(-.1,-.2);

              glVertex2f(0.04,.4);
              glVertex2f(0,.4);
              glVertex2f(.1,-.2);
               glVertex2f(.14,-.2);
               glEnd();




/// middle round Line Small circle ///

 x=.0f;  y=.4f;  radius =.38f;

	 lineAmount = 100; //# of triangles used to draw circle
	twicePi = 2.0f * PI;
   glTranslatef(0.0,.4,0);
    glRotatef(a,0.0,0.0,-1.0);//a=how many degree you want to rotate around an axis
   glTranslatef(-0.0,-.4,0);
	glBegin(GL_LINE_LOOP);
	 //glColor3ub(253, 254, 254);
	 glColor3ub(255, 217, 0);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	/// Middle Round Line biggest circle ///
 x=.0f;  y=.4f;  radius =.45f;

	 lineAmount = 100; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
	 //glColor3ub(253, 254, 254);
	 glColor3ub(34, 255, 0);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	/// ZIGZAG ///
	 glBegin(GL_LINES);
         glColor3ub(253, 254, 254);
        glVertex2f(0.06f,0.78f);
        glVertex2f(0.0f,0.85f);

         glVertex2f(0.12f,0.84f);
        glVertex2f(0.06f,0.78f);

        glVertex2f(0.12f,0.84f);
        glVertex2f(0.16f,0.74f);

        glVertex2f(0.23f,0.78f);
        glVertex2f(0.16f,0.74f);

        glVertex2f(0.23f,0.78f);
        glVertex2f(0.25f,0.68f);

        glVertex2f(0.34f,0.7f);
        glVertex2f(0.25f,0.68f);

        glVertex2f(0.34f,0.7f);
        glVertex2f(0.34f,0.581f);

        glVertex2f(0.42f,0.556f);
        glVertex2f(0.34f,0.581f);

        glVertex2f(0.42f,0.556f);
        glVertex2f(0.38f,0.45f);

        glVertex2f(0.45f,0.4f);
        glVertex2f(0.38f,0.45f);

         glVertex2f(0.45f,0.4f);
        glVertex2f(0.37f,0.3f);

        glVertex2f(0.42f,0.23f);
        glVertex2f(0.37f,0.3f);

         glVertex2f(0.42f,0.23f);
        glVertex2f(0.3f,0.17f);

        glVertex2f(0.3f,0.06f);
        glVertex2f(0.3f,0.17f);

        glVertex2f(0.3f,0.06f);
        glVertex2f(0.21f,0.08f);

        glVertex2f(0.19f,0.0f);
        glVertex2f(0.21f,0.08f);

        glVertex2f(0.19f,0.0f);
        glVertex2f(0.1f,0.03f);

        glVertex2f(0.06f,-0.04f);
        glVertex2f(0.1f,0.03f);

        glVertex2f(0.06f,-0.04f);
        glVertex2f(0.0f,0.02f);

        glVertex2f(-0.05f,-0.04f);
        glVertex2f(0.0f,0.02f);

        glVertex2f(-0.11f,0.03f);
        glVertex2f(-0.05f,-0.04f);

        glVertex2f(-0.11f,0.03f);
        glVertex2f(-0.16f,-0.02f);

        glVertex2f(-0.2f,0.08f);
        glVertex2f(-0.16f,-0.02f);

        glVertex2f(-0.2f,0.08f);
        glVertex2f(-0.28f,0.05f);

        glVertex2f(-0.32f,0.19f);
        glVertex2f(-0.28f,0.05f);

        glVertex2f(-0.32f,0.19f);
        glVertex2f(-0.4f,0.19f);

        glVertex2f(-0.38f,0.35f);
        glVertex2f(-0.4f,0.19f);

        glVertex2f(-0.38f,0.35f);
        glVertex2f(-0.45f,0.37f);

        glVertex2f(-0.37f,0.48f);
        glVertex2f(-0.45f,0.37f);


        glVertex2f(-0.37f,0.48f);
        glVertex2f(-0.43f,0.54f);

        glVertex2f(-0.33f,0.58f);
        glVertex2f(-0.43f,0.54f);

        glVertex2f(-0.33f,0.58f);
        glVertex2f(-0.33f,0.7f);

        glVertex2f(-0.25f,0.69f);
        glVertex2f(-0.33f,0.7f);

        glVertex2f(-0.25f,0.69f);
        glVertex2f(-0.25f,0.77f);

        glVertex2f(-0.18f,0.73f);
        glVertex2f(-0.25f,0.77f);

        glVertex2f(-0.18f,0.73f);
        glVertex2f(-0.16f,0.82f);

        glVertex2f(-0.1f,0.76f);
        glVertex2f(-0.16f,0.82f);

        glVertex2f(-0.1f,0.76f);
        glVertex2f(-0.07f,0.84f);

        glVertex2f(-0.03f,0.78f);
        glVertex2f(-0.07f,0.84f);

         glVertex2f(-0.03f,0.78f);
        glVertex2f(0.0f,0.85f);

glEnd();

/// lines around the smallest and middle circle ///
glBegin(GL_LINES);


         glColor3ub(201, 207, 207);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.0f,0.78f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.1f,0.77f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.38f,0.4f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.0f,0.01f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.38f,0.4f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.198f,0.72f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.3f,0.63f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.367f,0.523f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.367f,0.3f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.32f,0.19f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.25f,0.12f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.18f,0.06f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.1f,0.03f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.09f,0.02f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.18f,0.05f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.26f,0.12f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.321f,0.2f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.37f,0.29f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.356f,0.52f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.32f,0.62f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.22f,0.7f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.13f,0.76f);
        glEnd();


/// smallest circle Connected with stands ///


x=0.0f; y=.4f;  radius =.061f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 //glColor3ub(253, 254, 254);
	 glColor3ub(255, 187, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

/// Blue cabins ///

x=0.0f; y=.87f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

       //glColor3ub(13, 189, 217);
      glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();




	x=0.2f; y=.82f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

     //glColor3ub(13, 189, 217);
     glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



		x=0.35f; y=.7f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

    //glColor3ub(13, 183, 209);
    glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=0.45f; y=.53f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

     //glColor3ub(13, 183, 209);
     glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



		x=0.47f; y=.33f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

   //glColor3ub(13, 183, 209);
  glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=0.4f; y=.15f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

    //glColor3ub(13, 183, 209);
    glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=0.26f; y=.01f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

    //glColor3ub(13, 183, 209);
   glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=0.08f; y=-.06f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

    //glColor3ub(13, 183, 209);
    glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=-0.1f; y=-.06f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

     //glColor3ub(13, 183, 209);
     glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=-0.27f; y=.02f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

      //glColor3ub(13, 183, 209);
      glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=-0.41f; y=.16f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

   // glColor3ub(13, 183, 209);
    glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();




	x=-0.47f; y=.33f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

         //glColor3ub(13, 183, 209);
         glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=-0.45f; y=.54f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

     //glColor3ub(13, 183, 209);
     glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



		x=-0.36f; y=.71f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

     //glColor3ub(13, 183, 209);
     glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



		x=-0.19f; y=.83f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

     //glColor3ub(13, 183, 209);
     glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();
	glLoadIdentity();


	/// ======================================= LONDON EYE END ======================================= ///




    /// =========================== Road Boarders Connected with River ========================= ///


    /// lower  Road Border not conected with river
    glLoadIdentity();
    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3ub(111, 122, 125);/// Main Ash Color
    //glColor3ub(207, 6, 187); /// Purple Color
    glVertex2f(-1.0f,-0.99f);
	glVertex2f(1.0f, -0.99f);
    glEnd();


    /// Upper  Road Border Connected with Lower River Part

    glLineWidth(5.5);  ///upper line
    glBegin(GL_LINES);
    //glColor3ub(111, 122, 125); /// Ash Color
    //glColor3ub(105, 101, 99); /// MAin Color
     glColor3ub(207, 6, 187); /// Purple Color
    glVertex2f(-1.0f,-0.71f);
	glVertex2f(1.0f, -0.71f);
    glEnd();




   /// =================================== Road Main ======================= ( Black )



    /**glLineWidth(500);
    glBegin(GL_LINES);
    glColor3ub(4, 0, 13);
    glVertex2f(-1.0f,-0.85f);
	glVertex2f(1.0f, -0.85f);
    glEnd();**/


    /// Main Black Road
    glBegin(GL_QUADS);
    glColor3ub(54, 49, 48);
    glVertex2f(-1.0f,-0.76f);
	glVertex2f(-1.0f, -0.97f);
	glVertex2f(1.0f,-0.97f);
	glVertex2f(1.0f, -0.76f);
    glEnd();


    /// Upper Road yellow line
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(228, 232, 9);
    glVertex2f(-1.0f,-0.73f);
	glVertex2f(1.0f, -0.73f);
    glEnd();


    /// Lower Road yellow line
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(228, 232, 9); /// Main Yellow Color
    //glColor3ub(207, 6, 187);  /// Purple color
    glVertex2f(-1.0f,-0.96f);
	glVertex2f(1.0f, -0.96f);
    glEnd();



   /// ================================ Road Markers =============================== ///



    /// 1st Road marker (Right Most)

    glTranslatef(0.0f,-0.72f,0.0f);
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.7f,-0.140f);    /// x, y
	glVertex2f(0.99f, -0.140f);
    glEnd();


    /// 2nd Road marker
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.25f,-0.135f);
	glVertex2f(0.55f, -0.135f);
    glEnd();


    /// 3rd Road marker
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.1f,-0.135f);
	glVertex2f(-0.2f, -0.135f);
    glEnd();


    /// 4th Road marker
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.35f,-0.135f);
	glVertex2f(-0.65f, -0.135f);
    glEnd();


    /// 5th Road marker (Left Most)
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f,-0.140f);
	glVertex2f(-0.85f, -0.140f);
    glEnd();



    /// ==================================== Car Moving At Night =============================  ///

    //glScalef(0.92,0.92,0.0);

    glPushMatrix();
    glTranslatef(positionCarAtNight,0.0f, 0.0f);

    /// Green Body ////
    //glTranslatef(0.6,0.01,0);
    glTranslatef(0.2,0.01,0);
    glBegin(GL_QUADS);
    //glColor3ub(33, 181, 18); /// Green color
    glColor3ub(212, 4, 132);
    glVertex2f(-0.24f,-0.18f);    /// x, y
    glVertex2f(0.255f, -0.18f);
    glVertex2f(0.255f, -0.1f);
    glVertex2f(-0.24f, -0.1f);
    glEnd();


    /// Green Roof ///
    glBegin(GL_QUADS);
    //glColor3ub(33, 181, 18); // Green Color
    glColor3ub(212, 4, 132);
    glVertex2f(-0.16f,-0.1f);    /// x, y
    glVertex2f(0.18f, -0.1f);
    glVertex2f(0.13f, -0.0165f);
    glVertex2f(-0.1f, -0.0165f);
    glEnd();


    /// White Inside Glass ///
    glBegin(GL_QUADS);
    //glColor3ub(63, 40, 156); /// yellow color
    glColor3ub(9, 205, 235); /// white
    glVertex2f(-0.13f,-0.1f);    /// x, y
    glVertex2f(0.15f, -0.1f);
    glVertex2f(0.10f, -0.03f);
    glVertex2f(-0.07f, -0.03f);
    glEnd();


    /// Right Wheel
	 x=0.14;  y=-0.18f; radius =0.060f;

	 twicePi = 2.0f * PI;
    glColor3ub(135, 127, 9);
    //glColor3ub(176, 16, 16);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();


	/// White Circle inside Right Wheel
	 x=0.14;  y=-0.18f; radius =0.029f;

	 twicePi = 2.0f * PI;
    glColor3ub(255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();





	/// Left Wheel
	 x=-0.14;  y=-0.18f; radius =0.060f;

	 twicePi = 2.0f * PI;
    glColor3ub(135, 127, 9);
    //glColor3ub(176, 16, 16);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();



	/// White Circle Inside Left Wheel
	 x=-0.14;  y=-0.18f; radius =0.029f;

	 twicePi = 2.0f * PI;
    glColor3ub(255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();
	glPopMatrix();
    glLoadIdentity();

    /// =================================== CAR MOVING END =========================== ///





	///======================================= Ship 1 Big Ship ========================== ///


              glPushMatrix();
              glTranslatef(positionBigShipAtNight,0.0f, 0.0f);

              glScalef(.5,.5,0);
              //glTranslatef(-1.2,-0.2,0); // MAin
               glTranslatef(-0.2,-0.2,0);
              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(.4,-.85);
              glVertex2f(-.4,-.85);
              glVertex2f(-.36,-.9);
              glVertex2f(.36,-.9);
              glEnd();



              glBegin(GL_QUADS);
              glColor3ub(243, 156, 18);
              glVertex2f(.52,-.7);
              glVertex2f(-.52,-.7);
               glColor3ub(211, 84, 0);
              glVertex2f(-.4,-.85);
              glVertex2f(.4,-.85);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(248, 196, 113 );

                  glVertex2f(.52,-.68);
                  glVertex2f(-.52,-.68);
                 glVertex2f(-.52,-.7);
                 glVertex2f(.52,-.7);


/// grey///
  glBegin(GL_QUADS);
              glColor3ub(117, 117, 117  );

                  glVertex2f(.42,-.6);
                  glVertex2f(-.42,-.6);
                 glVertex2f(-.42,-.68);
                 glVertex2f(.42,-.68);
/// Boat cabin ///
                 glBegin(GL_QUADS);
              glColor3ub(159, 168, 218  );
               glVertex2f(.32,-.46);
                  glVertex2f(-.35,-.46);
                 glVertex2f(-.35,-.6);
                 glVertex2f(.39,-.6);

/// window..

     glBegin(GL_QUADS);
              glColor3ub(207, 216, 220  );
               glVertex2f(.335,-.49);
                  glVertex2f(.25,-.49);
                 glVertex2f(.25,-.55);
                 glVertex2f(.365,-.55);


    /// =================  Ship chimney =================

     glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(.05,-.35);
                  glVertex2f(.1,-.35);
                 glVertex2f(.1,-.46);
                 glVertex2f(.05,-.46);

                 glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(.05,-.33);
                 glVertex2f(.1,-.33);
                  glVertex2f(.1,-.35);
                     glVertex2f(.05,-.35);




                 glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(0,-.35);
                  glVertex2f(-.05,-.35);
                 glVertex2f(-.05,-.46);
                 glVertex2f(-.0,-.46);

                   glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(0,-.33);
                 glVertex2f(-.05,-.33);
                glVertex2f(-.05,-.35);
                    glVertex2f(0,-.35);



glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(-.1,-.35);
                  glVertex2f(-.15,-.35);
                 glVertex2f(-.15,-.46);
                 glVertex2f(-.1,-.46);

                        glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(-.1,-.33);
                 glVertex2f(-.15,-.33);
                glVertex2f(-.15,-.35);
                       glVertex2f(-.1,-.35);



/// =============== Ship Chimney End ====================== ///




   /// circle ///
   glBegin(GL_QUADS);
          glColor3ub(255, 202, 40 );
              glVertex2f(0.09,-.49);
                 glVertex2f(.14,-.49);


                glVertex2f(.14,-.555);
                    glVertex2f(0.09,-.555);


	glEnd();


  glBegin(GL_QUADS);
            glColor3ub(255, 202, 40 );
              glVertex2f(0.02,-.49);
                 glVertex2f(.07,-.49);
                glVertex2f(.07,-.555);
                    glVertex2f(0.02,-.555);


	glEnd();


   glBegin(GL_QUADS);
            glColor3ub(255, 202, 40);
              glVertex2f(0,-.49);
                 glVertex2f(-.05,-.49);
                glVertex2f(-.05,-.555);
                    glVertex2f(0,-.555);
                    glEnd();



                       glBegin(GL_QUADS);
             glColor3ub(255, 202, 40);
              glVertex2f(-0.07,-.49);
                 glVertex2f(-.12,-.49);
                glVertex2f(-.12,-.555);
                    glVertex2f(-0.07,-.555);


	glEnd();

                       glBegin(GL_QUADS);
        glColor3ub(255, 202, 40 );
              glVertex2f(-0.14,-.49);
                 glVertex2f(-.19,-.49);
                glVertex2f(-.19,-.555);
                    glVertex2f(-0.14,-.555);


	glEnd();


                       glBegin(GL_QUADS);
glColor3ub(255, 202, 40 );
              glVertex2f(-0.21,-.49);
                 glVertex2f(-.26,-.49);
                glVertex2f(-.26,-.555);
                    glVertex2f(-0.21,-.555);


	glEnd();
	glPopMatrix();
    glLoadIdentity();


    /// ====================================== BIG SHIP 1 END ==================================== ///





    ///======================================= Small Ship 2 (Small ship same as ship 1) ========================== ///

              glPushMatrix();
              glTranslatef(positionSmallShipAtNight,0.0f, 0.0f);


              glScalef(.35,.35,0);
              glTranslatef(1.5,-0.42,0);
              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(.4,-.85);
              glVertex2f(-.4,-.85);
              glVertex2f(-.36,-.9);
              glVertex2f(.36,-.9);
              glEnd();



              glBegin(GL_QUADS);
              glColor3ub(243, 156, 18);
              glVertex2f(.52,-.7);
              glVertex2f(-.52,-.7);
               glColor3ub(211, 84, 0);
              glVertex2f(-.4,-.85);
              glVertex2f(.4,-.85);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(248, 196, 113 );

                  glVertex2f(.52,-.68);
                  glVertex2f(-.52,-.68);
                 glVertex2f(-.52,-.7);
                 glVertex2f(.52,-.7);


/// grey///
  glBegin(GL_QUADS);
              glColor3ub(117, 117, 117  );

                  glVertex2f(.42,-.6);
                  glVertex2f(-.42,-.6);
                 glVertex2f(-.42,-.68);
                 glVertex2f(.42,-.68);
/// Boat cabin ///
                 glBegin(GL_QUADS);
              glColor3ub(159, 168, 218  );
               glVertex2f(.32,-.46);
                  glVertex2f(-.35,-.46);
                 glVertex2f(-.35,-.6);
                 glVertex2f(.39,-.6);

/// window..

     glBegin(GL_QUADS);
              glColor3ub(207, 216, 220  );
               glVertex2f(.335,-.49);
                  glVertex2f(.25,-.49);
                 glVertex2f(.25,-.55);
                 glVertex2f(.365,-.55);
////
/// =================  Ship chimney =================

     glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(.05,-.35);
                  glVertex2f(.1,-.35);
                 glVertex2f(.1,-.46);
                 glVertex2f(.05,-.46);

                 glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(.05,-.33);
                 glVertex2f(.1,-.33);
                  glVertex2f(.1,-.35);
                     glVertex2f(.05,-.35);




                 glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(0,-.35);
                  glVertex2f(-.05,-.35);
                 glVertex2f(-.05,-.46);
                 glVertex2f(-.0,-.46);

                   glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(0,-.33);
                 glVertex2f(-.05,-.33);
                glVertex2f(-.05,-.35);
                    glVertex2f(0,-.35);



glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(-.1,-.35);
                  glVertex2f(-.15,-.35);
                 glVertex2f(-.15,-.46);
                 glVertex2f(-.1,-.46);

                        glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(-.1,-.33);
                 glVertex2f(-.15,-.33);
                glVertex2f(-.15,-.35);
                       glVertex2f(-.1,-.35);



/// =============== Ship Chimney End ====================== ///




   /// circle ///
   glBegin(GL_QUADS);
          glColor3ub(255, 202, 40 );
              glVertex2f(0.09,-.49);
                 glVertex2f(.14,-.49);


                glVertex2f(.14,-.555);
                    glVertex2f(0.09,-.555);


	glEnd();


  glBegin(GL_QUADS);
            glColor3ub(255, 202, 40 );
              glVertex2f(0.02,-.49);
                 glVertex2f(.07,-.49);
                glVertex2f(.07,-.555);
                    glVertex2f(0.02,-.555);


	glEnd();


   glBegin(GL_QUADS);
            glColor3ub(255, 202, 40);
              glVertex2f(0,-.49);
                 glVertex2f(-.05,-.49);
                glVertex2f(-.05,-.555);
                    glVertex2f(0,-.555);
                    glEnd();



                       glBegin(GL_QUADS);
             glColor3ub(255, 202, 40);
              glVertex2f(-0.07,-.49);
                 glVertex2f(-.12,-.49);
                glVertex2f(-.12,-.555);
                    glVertex2f(-0.07,-.555);


	glEnd();

                       glBegin(GL_QUADS);
        glColor3ub(255, 202, 40 );
              glVertex2f(-0.14,-.49);
                 glVertex2f(-.19,-.49);
                glVertex2f(-.19,-.555);
                    glVertex2f(-0.14,-.555);


	glEnd();


                       glBegin(GL_QUADS);
glColor3ub(255, 202, 40 );
              glVertex2f(-0.21,-.49);
                 glVertex2f(-.26,-.49);
                glVertex2f(-.26,-.555);
                    glVertex2f(-0.21,-.555);


	glEnd();
	glPopMatrix();
    glLoadIdentity();


    /// ====================================== SHIP 2 END ==================================== ///





        /// ========================================== UPPER RIVER BORDER LINE ====================================== ///


              glLineWidth(3.2);
              //glTranslatef(0.6,0.5,0.0);
              glBegin(GL_LINES);
              glColor3ub(207, 6, 187); /// Purple Color
              //glColor3ub(228, 232, 9); /// main
              glVertex2f(1,-.20);
              glVertex2f(-1,-.20);
              glEnd();
              glLoadIdentity();





              /// =========================================== RAIN =========================================================


        //glColor3ub(237, 242, 242);
        //glPushMatrix();



        glLineWidth(2.0);

        glPushMatrix();
        glTranslatef(0.0f,positionRain, 0.0f);
        glTranslatef(-0.0f,-0.1f,0.0f);
        glBegin(GL_LINES);
	    glColor3ub(255, 255, 255);


	glVertex2f(-0.9,1);
	glVertex2f(-0.9,0.95);

		glVertex2f(-0.8,1);
	glVertex2f(-0.8,0.95);

		glVertex2f(-0.7,1);
	glVertex2f(-0.7,0.95);

		glVertex2f(-0.6,1);
	glVertex2f(-0.6,0.95);

		glVertex2f(-0.5,1);
	glVertex2f(-0.5,0.95);

		glVertex2f(-0.4,1);
	glVertex2f(-0.4,0.95);

		glVertex2f(-0.3,1);
	glVertex2f(-0.3,0.95);

		glVertex2f(-0.2,1);
	glVertex2f(-0.2,0.95);

		glVertex2f(-0.1,1);
	glVertex2f(-0.1,0.95);

		glVertex2f(0.0,1);
	glVertex2f(0.0,0.95);

				glVertex2f(0.1,1);
	glVertex2f(0.1,0.95);

			glVertex2f(0.2,1);
	glVertex2f(0.2,0.95);

			glVertex2f(0.3,1);
	glVertex2f(0.3,0.95);

			glVertex2f(0.4,1);
	glVertex2f(0.4,0.95);

			glVertex2f(0.5,1);
	glVertex2f(0.5,0.95);

			glVertex2f(0.6,1);
	glVertex2f(0.6,0.95);

			glVertex2f(0.7,1);
	glVertex2f(0.7,0.95);

			glVertex2f(0.8,1);
	glVertex2f(0.8,0.95);

			glVertex2f(0.9,1);
	glVertex2f(0.9,0.95);

	glVertex2f(-0.9,.8);
	glVertex2f(-0.9,0.75);

		glVertex2f(-0.8,.8);
	glVertex2f(-0.8,0.75);

		glVertex2f(-0.7,.8);
	glVertex2f(-0.7,0.75);

		glVertex2f(-0.6,.8);
	glVertex2f(-0.6,0.75);

		glVertex2f(-0.5,.8);
	glVertex2f(-0.5,0.75);

		glVertex2f(-0.4,.8);
	glVertex2f(-0.4,0.75);

		glVertex2f(-0.3,.8);
	glVertex2f(-0.3,0.75);

		glVertex2f(-0.2,.8);
	glVertex2f(-0.2,0.75);

		glVertex2f(-0.1,.8);
	glVertex2f(-0.1,0.75);

		glVertex2f(0.0,.8);
	glVertex2f(0.0,0.75);

				glVertex2f(0.1,.8);
	glVertex2f(0.1,0.75);

			glVertex2f(0.2,.8);
	glVertex2f(0.2,0.75);

			glVertex2f(0.3,.8);
	glVertex2f(0.3,0.75);

			glVertex2f(0.4,.8);
	glVertex2f(0.4,0.75);

			glVertex2f(0.5,.8);
	glVertex2f(0.5,0.75);

			glVertex2f(0.6,.8);
	glVertex2f(0.6,0.75);

			glVertex2f(0.7,.8);
	glVertex2f(0.7,0.75);

			glVertex2f(0.8,.8);
	glVertex2f(0.8,0.75);

			glVertex2f(0.9,.8);
	glVertex2f(0.9,0.75);

	glVertex2f(-0.9,.6);
	glVertex2f(-0.9,0.55);

		glVertex2f(-0.8,.6);
	glVertex2f(-0.8,0.55);

		glVertex2f(-0.7,.6);
	glVertex2f(-0.7,0.55);

		glVertex2f(-0.6,.6);
	glVertex2f(-0.6,0.55);

		glVertex2f(-0.5,.6);
	glVertex2f(-0.5,0.55);

		glVertex2f(-0.4,.6);
	glVertex2f(-0.4,0.55);

		glVertex2f(-0.3,.6);
	glVertex2f(-0.3,0.55);

		glVertex2f(-0.2,.6);
	glVertex2f(-0.2,0.55);

		glVertex2f(-0.1,.6);
	glVertex2f(-0.1,0.55);

		glVertex2f(0.0,.6);
	glVertex2f(0.0,0.55);

				glVertex2f(0.1,.6);
	glVertex2f(0.1,0.55);

			glVertex2f(0.2,.6);
	glVertex2f(0.2,0.55);

			glVertex2f(0.3,.6);
	glVertex2f(0.3,0.55);

			glVertex2f(0.4,.6);
	glVertex2f(0.4,0.55);

			glVertex2f(0.5,.6);
	glVertex2f(0.5,0.55);

			glVertex2f(0.6,.6);
	glVertex2f(0.6,0.55);

			glVertex2f(0.7,.6);
	glVertex2f(0.7,0.55);

			glVertex2f(0.8,.6);
	glVertex2f(0.8,0.55);

			glVertex2f(0.9,.6);
	glVertex2f(0.9,0.55);

		glVertex2f(-0.9,.4);
	glVertex2f(-0.9,0.35);

		glVertex2f(-0.8,.4);
	glVertex2f(-0.8,0.35);

    glVertex2f(-0.7,.4);
	glVertex2f(-0.7,0.35);

		glVertex2f(-0.6,.4);
	glVertex2f(-0.6,0.35);

		glVertex2f(-0.5,.4);
	glVertex2f(-0.5,0.35);

		glVertex2f(-0.4,.4);
	glVertex2f(-0.4,0.35);

		glVertex2f(-0.3,.4);
	glVertex2f(-0.3,0.35);

		glVertex2f(-0.2,.4);
	glVertex2f(-0.2,0.35);

		glVertex2f(-0.1,.4);
	glVertex2f(-0.1,0.35);

		glVertex2f(0.0,.4);
	glVertex2f(0.0,0.35);

				glVertex2f(0.1,.4);
	glVertex2f(0.1,0.35);

			glVertex2f(0.2,.4);
	glVertex2f(0.2,0.35);

			glVertex2f(0.3,.4);
	glVertex2f(0.3,0.35);

			glVertex2f(0.4,.4);
	glVertex2f(0.4,0.35);

			glVertex2f(0.5,.4);
	glVertex2f(0.5,0.35);

			glVertex2f(0.6,.4);
	glVertex2f(0.6,0.35);

			glVertex2f(0.7,.4);
	glVertex2f(0.7,0.35);

			glVertex2f(0.8,.4);
	glVertex2f(0.8,0.35);

			glVertex2f(0.9,.4);
	glVertex2f(0.9,0.35);

		glVertex2f(-0.9,.2);
	glVertex2f(-0.9,0.15);

		glVertex2f(-0.8,.2);
	glVertex2f(-0.8,0.15);

		glVertex2f(-0.7,.2);
	glVertex2f(-0.7,0.15);

		glVertex2f(-0.6,.2);
	glVertex2f(-0.6,0.15);

		glVertex2f(-0.5,.2);
	glVertex2f(-0.5,0.15);

		glVertex2f(-0.4,.2);
	glVertex2f(-0.4,0.15);

		glVertex2f(-0.3,.2);
	glVertex2f(-0.3,0.15);

		glVertex2f(-0.2,.2);
	glVertex2f(-0.2,0.15);

		glVertex2f(-0.1,.2);
	glVertex2f(-0.1,0.15);

		glVertex2f(0.0,.2);
	glVertex2f(0.0,0.15);

				glVertex2f(0.1,.2);
	glVertex2f(0.1,0.15);

			glVertex2f(0.2,.2);
	glVertex2f(0.2,0.15);

			glVertex2f(0.3,.2);
	glVertex2f(0.3,0.15);

			glVertex2f(0.4,.2);
	glVertex2f(0.4,0.15);

			glVertex2f(0.5,.2);
	glVertex2f(0.5,0.15);

			glVertex2f(0.6,.2);
	glVertex2f(0.6,0.15);

			glVertex2f(0.7,.2);
	glVertex2f(0.7,0.15);

			glVertex2f(0.8,.2);
	glVertex2f(0.8,0.15);

			glVertex2f(0.9,.2);
	glVertex2f(0.9,0.15);
   glEnd();

   glPopMatrix();
   glLoadIdentity();

        //glPopMatrix();

        /// ===================================================== RAIN  END ======================================///



    /// =================================== Stars ====================================== ///


	/// 1 Top Right Up the moon

         x=.83f; y=.86f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 1 Top Right Up the moon

         x=.93f; y=.92f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/// 3 Top Right Up the moon

         x=.73f; y=.92f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/// 4 Top Right Up the moon

         x=.53f; y=.96f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 5 Top Right

         x=.63f; y=.862f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/// 6 Top Right

         x=.43f; y=.922f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/// 7 Top Right

         x=.33f; y=.822f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 8 Top Right

         x=.43f; y=.722f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 9 Top Right

         x=.58f; y=.722f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



    /// 10 Top Right

         x=.38f; y=.622f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 11 Top Right

         x=.92f; y=.782f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    /// 12 Top Right

         x=.52f; y=.882f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 13 Top Right

         x=.2f; y=.922f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    /// 14 Top Right

         x=.32f; y=.922f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

  /// ==================================== STARS END ============================================ ///




// glutTimerFunc(4500,morning,0);


glFlush();




}




void Night(int val)
{
    glutDisplayFunc(Night_View);
}

void Evening_View()

{

    //glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClearColor(0.24f, 0.24f, 0.24f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);




    ///============================================= Field ====================================== ///

              //glColor3ub(36, 134, 13);
              glColor3ub(1, 122, 9);
              glBegin(GL_QUADS);
              glVertex2f(1,-0.25);
              glVertex2f(-1,-0.25);
              glVertex2f(-1,0);
              glVertex2f(1,0);
              glEnd();



    /// =============================== River =========================================== ///

              glTranslatef(0.0f,0.05f,0.0f);
              //glColor3ub(23, 93, 154);
              glColor3ub (9, 95, 176);
              glBegin(GL_QUADS);
              glVertex2f(1,-.25);
              glVertex2f(-1,-.25);
              //glColor3ub(20, 106, 184);
              glColor3ub (9, 95, 176);
              glVertex2f(-1,-0.75);
              glVertex2f(1,-0.75);
              glEnd();
              glLoadIdentity();

     /// ====================================== Sky   ======================================= ///

              //glColor3ub(246, 221, 204 );
              glColor3ub(1, 35, 84);
              glBegin(GL_QUADS);
              glVertex2f(1,1);
              glVertex2f(-1,1);
              //glColor3ub(240, 178, 122 );
              glColor3ub(1, 35, 84);
              glVertex2f(-1,0);
              glVertex2f(1,0);
              glEnd();

     /// ====================================== MOON  AT EVENING ==================================== ///

	x=.75f; y=.75f; radius =.11f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(242, 243, 245);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glLoadIdentity();


	x=.70f; y=.75f; radius =.115f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(1, 31, 92);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glLoadIdentity();

	/// ===================================== MOON END ============================== ///



    /// =============================== Railing +++++++++++++++++++++++++++++++++++///


    /// LEFT MOST

    glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.96f,-0.07f);
          glVertex2f(-0.96f,-0.2f);
          glEnd();

          x=-.96f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



    ////////1st

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.88f,-0.07f);
          glVertex2f(-0.88f,-0.2f);
          glEnd();

          x=-.88f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(189, 4, 152); /// Purple Color
	 glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/////2nd

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.8f,-0.07f);
          glVertex2f(-0.8f,-0.2f);
          glEnd();

          x=-.8f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/////////3rd


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.7f,-0.07f);
          glVertex2f(-0.7f,-0.2f);
          glEnd();

          x=-.7f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(189, 4, 152); /// Purple Color
	 glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//////////4th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.6f,-0.07f);
          glVertex2f(-0.6f,-0.2f);
          glEnd();

          x=-.6f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//////////5th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.5f,-0.07f);
          glVertex2f(-0.5f,-0.2f);
          glEnd();

          x=-.5f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(189, 4, 152); /// Purple Color
	 glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




	//////////6th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.4f,-0.07f);
          glVertex2f(-0.4f,-0.2f);
          glEnd();

          x=-.4f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	///////////7th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.3f,-0.07f);
          glVertex2f(-0.3f,-0.2f);
          glEnd();

          x=-.3f; y=-0.07f; radius =.01f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(189, 4, 152); /// Purple Color
	 glColor3ub(255,235,18); /// MAin yellow
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	///////////8th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.2f,-0.07f);
          glVertex2f(-0.2f,-0.2f);
          glEnd();

          x=-.2f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	///////////9th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.1f,-0.07f);
          glVertex2f(-0.1f,-0.2f);
          glEnd();

          x=-.1f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(189, 4, 152); /// Purple Color
	 glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////////////10th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.0f,-0.07f);
          glVertex2f(-0.0f,-0.2f);
          glEnd();

          x=-.0f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();



	//////////11th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.1f,-0.07f);
          glVertex2f(0.1f,-0.2f);
          glEnd();

          x=.1f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    //glColor3ub(189, 4, 152); /// Purple Color
	 glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//////////12th
             glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.2f,-0.07f);
          glVertex2f(0.2f,-0.2f);
          glEnd();

          x=.2f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////////////13th

	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.3f,-0.07f);
          glVertex2f(0.3f,-0.2f);
          glEnd();

          x=.3f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(189, 4, 152); /// Purple Color
	 glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////////////14th
	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.4f,-0.07f);
          glVertex2f(0.4f,-0.2f);
          glEnd();

          x=.4f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/////////////15th
         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.5f,-0.07f);
          glVertex2f(0.5f,-0.2f);
          glEnd();

          x=.5f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(189, 4, 152); /// Purple Color
	 glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//////////////////////16th

	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.6f,-0.07f);
          glVertex2f(0.6f,-0.2f);
          glEnd();

          x=.6f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//////////////////////17th

         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.7f,-0.07f);
          glVertex2f(0.7f,-0.2f);
          glEnd();

          x=.7f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(189, 4, 152); /// Purple Color
	 glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



    ///////////////////////////18th

             glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.8f,-0.07f);
          glVertex2f(0.8f,-0.2f);
          glEnd();

          x=.8f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// Main yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




	////////////////////////////////19th

	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.88f,-0.07f);
          glVertex2f(0.88f,-0.2f);
          glEnd();

          x=.88f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	  //glColor3ub(189, 4, 152); /// Purple Color
	   glColor3ub(255,235,18); /// MAin yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// LAST Right Most

	   glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.96f,-0.07f);
          glVertex2f(0.96f,-0.2f);
          glEnd();

          x=.96f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(194, 199, 191); /// Ash Color
	glColor3ub(255,235,18); /// Main yellow
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/// ============================= Railing End ====================================== ///





     /// =============================== building1 (Left Most )  ========================================== ///


              /// =============== building1 ============================= ///

              glTranslatef(-0.4f,0.0f,0.0f);
              glScalef(0.6,2,0);
              glBegin(GL_QUADS);
              //glColor3ub(169,169,169); // Main Ash Color
              glColor3ub(129, 142, 143);
              //glColor3ub(116, 122, 121);
              glVertex2f(-.6,.35);
              glVertex2f(-1,.35);
              glVertex2f(-1,0);
              glVertex2f(-.6,0);
              glEnd();


              /// Side Quad
              glBegin(GL_QUADS);
              //glColor3ub(128,128,128); /// Main Ash Color
              glColor3ub(10, 135, 173);
              glVertex2f(-.5,.32);
              glVertex2f(-.6,.35);
              glVertex2f(-.6,0);
              glVertex2f(-.5,0);
              glEnd();



/// windows
                  glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.62,.33);
              glVertex2f(-.64,.33);
              glVertex2f(-.64,.3);
              glVertex2f(-.62,.3);
              glEnd();


     glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.33);
              glVertex2f(-.68,.33);
              glVertex2f(-.68,.3);
              glVertex2f(-.66,.3);
              glEnd();


  glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.7,.33);
              glVertex2f(-.72,.33);
              glVertex2f(-.72,.3);
              glVertex2f(-.7,.3);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.33);
              glVertex2f(-.76,.33);
              glVertex2f(-.76,.3);
              glVertex2f(-.74,.3);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.78,.33);
              glVertex2f(-.8,.33);
              glVertex2f(-.8,.3);
              glVertex2f(-.78,.3);
              glEnd();


                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.33);
              glVertex2f(-.84,.33);
              glVertex2f(-.84,.3);
              glVertex2f(-.82,.3);
              glEnd();


                   glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.86,.33);
              glVertex2f(-.88,.33);
              glVertex2f(-.88,.3);
              glVertex2f(-.86,.3);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.33);
              glVertex2f(-.92,.33);
              glVertex2f(-.92,.3);
              glVertex2f(-.9,.3);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.94,.33);
              glVertex2f(-.96,.33);
              glVertex2f(-.96,.3);
              glVertex2f(-.94,.3);
              glEnd();


                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.33);
              glVertex2f(-.997,.33);
              glVertex2f(-.997,.3);
              glVertex2f(-.98,.3);
              glEnd();


/// 2nd //

   glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.62,.28);
              glVertex2f(-.64,.28);
              glVertex2f(-.64,.25);
              glVertex2f(-.62,.25);
              glEnd();

  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.28);
              glVertex2f(-.68,.28);
              glVertex2f(-.68,.25);
              glVertex2f(-.66,.25);
              glEnd();


  glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.7,.28);
              glVertex2f(-.72,.28);
              glVertex2f(-.72,.25);
              glVertex2f(-.7,.25);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.28);
              glVertex2f(-.76,.28);
              glVertex2f(-.76,.25);
              glVertex2f(-.74,.25);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.78,.28);
              glVertex2f(-.8,.28);
              glVertex2f(-.8,.25);
              glVertex2f(-.78,.25);
              glEnd();



                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.28);
              glVertex2f(-.84,.28);
              glVertex2f(-.84,.25);
              glVertex2f(-.82,.25);
              glEnd();

                   glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.86,.28);
              glVertex2f(-.88,.28);
              glVertex2f(-.88,.25);
              glVertex2f(-.86,.25);
              glEnd();


                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.28);
              glVertex2f(-.92,.28);
              glVertex2f(-.92,.25);
              glVertex2f(-.9,.25);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.94,.28);
              glVertex2f(-.96,.28);
              glVertex2f(-.96,.25);
              glVertex2f(-.94,.25);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.28);
              glVertex2f(-.997,.28);
              glVertex2f(-.997,.25);
              glVertex2f(-.98,.25);
              glEnd();

/// 3rd

 glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.62,.23);
              glVertex2f(-.64,.23);
              glVertex2f(-.64,.2);
              glVertex2f(-.62,.2);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.23);
              glVertex2f(-.68,.23);
              glVertex2f(-.68,.2);
              glVertex2f(-.66,.2);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.7,.23);
              glVertex2f(-.72,.23);
              glVertex2f(-.72,.2);
              glVertex2f(-.7,.2);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.23);
              glVertex2f(-.76,.23);
              glVertex2f(-.76,.2);
              glVertex2f(-.74,.2);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.78,.23);
              glVertex2f(-.8,.23);
              glVertex2f(-.8,.2);
              glVertex2f(-.78,.2);
              glEnd();


                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.23);
              glVertex2f(-.84,.23);
              glVertex2f(-.84,.2);
              glVertex2f(-.82,.2);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.86,.23);
              glVertex2f(-.88,.23);
              glVertex2f(-.88,.2);
              glVertex2f(-.86,.2);
              glEnd();


                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.23);
              glVertex2f(-.92,.23);
              glVertex2f(-.92,.2);
              glVertex2f(-.9,.2);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.94,.23);
              glVertex2f(-.96,.23);
              glVertex2f(-.96,.2);
              glVertex2f(-.94,.2);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.23);
              glVertex2f(-.997,.23);
              glVertex2f(-.997,.2);
              glVertex2f(-.98,.2);
              glEnd();

///4
              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.18);
              glVertex2f(-.64,.18);
              glVertex2f(-.64,.15);
              glVertex2f(-.62,.15);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.66,.18);
              glVertex2f(-.68,.18);
              glVertex2f(-.68,.15);
              glVertex2f(-.66,.15);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.18);
              glVertex2f(-.72,.18);
              glVertex2f(-.72,.15);
              glVertex2f(-.7,.15);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.74,.18);
              glVertex2f(-.76,.18);
              glVertex2f(-.76,.15);
              glVertex2f(-.74,.15);
              glEnd();


                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.18);
              glVertex2f(-.8,.18);
              glVertex2f(-.8,.15);
              glVertex2f(-.78,.15);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.82,.18);
              glVertex2f(-.84,.18);
              glVertex2f(-.84,.15);
              glVertex2f(-.82,.15);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.18);
              glVertex2f(-.88,.18);
              glVertex2f(-.88,.15);
              glVertex2f(-.86,.15);
              glEnd();


                   glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.9,.18);
              glVertex2f(-.92,.18);
              glVertex2f(-.92,.15);
              glVertex2f(-.9,.15);
              glEnd();


                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.18);
              glVertex2f(-.96,.18);
              glVertex2f(-.96,.15);
              glVertex2f(-.94,.15);
              glEnd();


                    glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.98,.18);
              glVertex2f(-.997,.18);
              glVertex2f(-.997,.15);
              glVertex2f(-.98,.15);
              glEnd();
/// 5
       glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.62,.13);
              glVertex2f(-.64,.13);
              glVertex2f(-.64,.1);
              glVertex2f(-.62,.1);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.13);
              glVertex2f(-.68,.13);
              glVertex2f(-.68,.1);
              glVertex2f(-.66,.1);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.7,.13);
              glVertex2f(-.72,.13);
              glVertex2f(-.72,.1);
              glVertex2f(-.7,.1);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.13);
              glVertex2f(-.76,.13);
              glVertex2f(-.76,.1);
              glVertex2f(-.74,.1);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.78,.13);
              glVertex2f(-.8,.13);
              glVertex2f(-.8,.1);
              glVertex2f(-.78,.1);
              glEnd();


                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.13);
              glVertex2f(-.84,.13);
              glVertex2f(-.84,.1);
              glVertex2f(-.82,.1);
              glEnd();


                   glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.86,.13);
              glVertex2f(-.88,.13);
              glVertex2f(-.88,.1);
              glVertex2f(-.86,.1);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.13);
              glVertex2f(-.92,.13);
              glVertex2f(-.92,.1);
              glVertex2f(-.9,.1);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.94,.13);
              glVertex2f(-.96,.13);
              glVertex2f(-.96,.1);
              glVertex2f(-.94,.1);
              glEnd();


                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.13);
              glVertex2f(-.997,.13);
              glVertex2f(-.997,.1);
              glVertex2f(-.98,.1);
              glEnd();
///6
     glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.62,.08);
              glVertex2f(-.64,.08);
              glVertex2f(-.64,.05);
              glVertex2f(-.62,.05);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.08);
              glVertex2f(-.68,.08);
              glVertex2f(-.68,.05);
              glVertex2f(-.66,.05);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.7,.08);
              glVertex2f(-.72,.08);
              glVertex2f(-.72,.05);
              glVertex2f(-.7,.05);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.08);
              glVertex2f(-.76,.08);
              glVertex2f(-.76,.05);
              glVertex2f(-.74,.05);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.78,.08);
              glVertex2f(-.8,.08);
              glVertex2f(-.8,.05);
              glVertex2f(-.78,.05);
              glEnd();


                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.08);
              glVertex2f(-.84,.08);
              glVertex2f(-.84,.05);
              glVertex2f(-.82,.05);
              glEnd();

                   glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(-.86,.08);
              glVertex2f(-.88,.08);
              glVertex2f(-.88,.05);
              glVertex2f(-.86,.05);
              glEnd();


                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.08);
              glVertex2f(-.92,.08);
              glVertex2f(-.92,.05);
              glVertex2f(-.9,.05);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(-.94,.08);
              glVertex2f(-.96,.08);
              glVertex2f(-.96,.05);
              glVertex2f(-.94,.05);
              glEnd();


                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.08);
              glVertex2f(-.997,.08);
              glVertex2f(-.997,.05);
              glVertex2f(-.98,.05);
              glEnd();
              //glLoadIdentity();


/// =============================== building2 (Left Small)Building  ========================================= ///

         glScalef(2.4,.6,0);
         glTranslatef(0.13f,0.0f,0.0f);
         glBegin(GL_QUADS);
             //glColor3ub(166, 172, 175 ); Main Ash Color
              glColor3ub(242, 237, 245);
              glVertex2f(-.155,.32);
              glVertex2f(-.3,.31);
              glVertex2f(-.3,0);
              glVertex2f(-.155,0);
              glEnd();


/// windows1 ///

   glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.3);
              glVertex2f(-.3,.3);
              glVertex2f(-.3,.27);
              glVertex2f(-.29,.27);
              glEnd();

   glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.3);
              glVertex2f(-.28,.3);
              glVertex2f(-.28,.27);
              glVertex2f(-.26,.27);
              glEnd();



  glBegin(GL_QUADS);
            glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.3);
              glVertex2f(-.25,.3);
              glVertex2f(-.25,.27);
              glVertex2f(-.23,.27);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.3);
              glVertex2f(-.22,.3);
              glVertex2f(-.22,.27);
              glVertex2f(-.2,.27);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.3);
              glVertex2f(-.19,.3);
              glVertex2f(-.19,.27);
              glVertex2f(-.17,.27);
              glEnd();


/// window2 ///
   glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.25);
              glVertex2f(-.3,.25);
              glVertex2f(-.3,.22);
              glVertex2f(-.29,.22);
              glEnd();


          /////
            glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.25);
              glVertex2f(-.28,.25);
              glVertex2f(-.28,.22);
              glVertex2f(-.26,.22);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.25);
              glVertex2f(-.25,.25);
              glVertex2f(-.25,.22);
              glVertex2f(-.23,.22);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.25);
              glVertex2f(-.22,.25);
              glVertex2f(-.22,.22);
              glVertex2f(-.2,.22);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.25);
              glVertex2f(-.19,.25);
              glVertex2f(-.19,.22);
              glVertex2f(-.17,.22);
              glEnd();


/// window 3///

 glBegin(GL_QUADS);
            glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.2);
              glVertex2f(-.3,.2);
              glVertex2f(-.3,.17);
              glVertex2f(-.29,.17);
              glEnd();


             glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.2);
              glVertex2f(-.28,.2);
              glVertex2f(-.28,.17);
              glVertex2f(-.26,.17);
              glEnd();



  glBegin(GL_QUADS);
            glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.2);
              glVertex2f(-.25,.2);
              glVertex2f(-.25,.17);
              glVertex2f(-.23,.17);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.2);
              glVertex2f(-.22,.2);
              glVertex2f(-.22,.17);
              glVertex2f(-.2,.17);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.2);
              glVertex2f(-.19,.2);
              glVertex2f(-.19,.17);
              glVertex2f(-.17,.17);
              glEnd();



///window4///


glBegin(GL_QUADS);
            glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.15);
              glVertex2f(-.3,.15);
              glVertex2f(-.3,.12);
              glVertex2f(-.29,.12);
              glEnd();

           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.15);
              glVertex2f(-.28,.15);
              glVertex2f(-.28,.12);
              glVertex2f(-.26,.12);
              glEnd();



  glBegin(GL_QUADS);
            glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.15);
              glVertex2f(-.25,.15);
              glVertex2f(-.25,.12);
              glVertex2f(-.23,.12);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.15);
              glVertex2f(-.22,.15);
              glVertex2f(-.22,.12);
              glVertex2f(-.2,.12);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.15);
              glVertex2f(-.19,.15);
              glVertex2f(-.19,.12);
              glVertex2f(-.17,.12);
              glEnd();

/// windows 5 ///


glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.1);
              glVertex2f(-.3,.1);
              glVertex2f(-.3,.07);
              glVertex2f(-.29,.07);
              glEnd();

           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.1);
              glVertex2f(-.28,.1);
              glVertex2f(-.28,.07);
              glVertex2f(-.26,.07);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.1);
              glVertex2f(-.25,.1);
              glVertex2f(-.25,.07);
              glVertex2f(-.23,.07);
              glEnd();

  glBegin(GL_QUADS);
            glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.1);
              glVertex2f(-.22,.1);
              glVertex2f(-.22,.07);
              glVertex2f(-.2,.07);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.1);
              glVertex2f(-.19,.1);
              glVertex2f(-.19,.07);
              glVertex2f(-.17,.07);
              glEnd();




glBegin(GL_QUADS);
           glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.05);
              glVertex2f(-.3,.05);
              glVertex2f(-.3,.02);
              glVertex2f(-.29,.02);
              glEnd();


           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.05);
              glVertex2f(-.28,.05);
              glVertex2f(-.28,.02);
              glVertex2f(-.26,.02);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.05);
              glVertex2f(-.25,.05);
              glVertex2f(-.25,.02);
              glVertex2f(-.23,.02);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.05);
              glVertex2f(-.22,.05);
              glVertex2f(-.22,.02);
              glVertex2f(-.2,.02);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.05);
              glVertex2f(-.19,.05);
              glVertex2f(-.19,.02);
              glVertex2f(-.17,.02);
              glEnd();



              /// ============================== building3 Right Most (house) ========================== ///



            glScalef(.7,.75,0);
            glTranslatef(0.3,0.0,0.0);
            glBegin(GL_QUADS);
             //glColor3ub(153,163,164); /// Ash
             glColor3ub(4, 197, 204);
              glVertex2f(1,.27);
              glVertex2f(.3,.27);
              glVertex2f(.3,0);
              glVertex2f(1,0);
              glEnd();


               glBegin(GL_QUADS);
             //glColor3ub(153, 163, 164); /// Ash
             glColor3ub(4, 197, 204);
              glVertex2f(.99,.255);
              glVertex2f(.32,.255);
              glVertex2f(.32,.145);
              glVertex2f(.99,.145);
              glEnd();

/// shade ///
                glBegin(GL_QUADS);
               //glColor3ub(51, 102, 102);// main
               glColor3ub(189, 2, 142); /// Purple
              glVertex2f(1,.45);
              glVertex2f(.32,.45);
              glVertex2f(.25,.26);
              glVertex2f(1,.26);
              glEnd();


   /// door///
     glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.4,.13);
              glVertex2f(.34,.13);
              glVertex2f(.34,0);
              glVertex2f(.4,0);
              glEnd();


/// window///

             glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.98,.245);
              glVertex2f(.95,.245);
              glVertex2f(.95,.19);
              glVertex2f(.98,.19);
              glEnd();

               glBegin(GL_QUADS);
            glColor3ub(51, 102, 102);
              glVertex2f(.92,.245);
              glVertex2f(.89,.245);
              glVertex2f(.89,.19);
              glVertex2f(.92,.19);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.86,.245);
              glVertex2f(.83,.245);
              glVertex2f(.83,.19);
              glVertex2f(.86,.19);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.8,.245);
              glVertex2f(.77,.245);
              glVertex2f(.77,.19);
              glVertex2f(.8,.19);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.74,.245);
              glVertex2f(.71,.245);
              glVertex2f(.71,.19);
              glVertex2f(.74,.19);
              glEnd();

                 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.68,.245);
              glVertex2f(.65,.245);
              glVertex2f(.65,.19);
              glVertex2f(.68,.19);
              glEnd();


             glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.62,.245);
              glVertex2f(.59,.245);
              glVertex2f(.59,.19);
              glVertex2f(.62,.19);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.56,.245);
              glVertex2f(.53,.245);
              glVertex2f(.53,.19);
              glVertex2f(.56,.19);
              glEnd();


            glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(.5,.245);
              glVertex2f(.47,.245);
              glVertex2f(.47,.19);
              glVertex2f(.5,.19);
              glEnd();

/// window2///

 glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.98,.16);
              glVertex2f(.95,.16);
              glVertex2f(.95,.08);
              glVertex2f(.98,.08);
              glEnd();

               glBegin(GL_QUADS);
              glColor3ub(240, 232, 10);
              glVertex2f(.92,.16);
              glVertex2f(.89,.16);
              glVertex2f(.89,.08);
              glVertex2f(.92,.08);
              glEnd();


                glBegin(GL_QUADS);
              glColor3ub(51, 102, 102);
              glVertex2f(.86,.16);
              glVertex2f(.83,.16);
              glVertex2f(.83,.08);
              glVertex2f(.86,.08);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.8,.16);
              glVertex2f(.77,.16);
              glVertex2f(.77,.08);
              glVertex2f(.8,.08);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.74,.16);
              glVertex2f(.71,.16);
              glVertex2f(.71,.08);
              glVertex2f(.74,.08);
              glEnd();

                 glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.68,.16);
              glVertex2f(.65,.16);
              glVertex2f(.65,.08);
              glVertex2f(.68,.08);
              glEnd();

             glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.62,.16);
              glVertex2f(.59,.16);
              glVertex2f(.59,.08);
              glVertex2f(.62,.08);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.56,.16);
              glVertex2f(.53,.16);
              glVertex2f(.53,.08);
              glVertex2f(.56,.08);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.5,.16);
              glVertex2f(.47,.16);
              glVertex2f(.47,.08);
              glVertex2f(.5,.08);
              glEnd();




              /// win3 ///

             glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.98,.06);
              glVertex2f(.95,.06);
              glVertex2f(.95,0);
              glVertex2f(.98,0);
              glEnd();

               glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.92,.06);
              glVertex2f(.89,.06);
              glVertex2f(.89,.0);
              glVertex2f(.92,.0);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.86,.06);
              glVertex2f(.83,.06);
              glVertex2f(.83,.0);
              glVertex2f(.86,.0);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.8,.06);
              glVertex2f(.77,.06);
              glVertex2f(.77,.0);
              glVertex2f(.8,.0);
              glEnd();

                glBegin(GL_QUADS);
            glColor3ub(240, 232, 10);
              glVertex2f(.74,.06);
              glVertex2f(.71,.06);
              glVertex2f(.71,.0);
              glVertex2f(.74,.0);
              glEnd();

                 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.68,.06);
              glVertex2f(.65,.06);
              glVertex2f(.65,.0);
              glVertex2f(.68,.0);
              glEnd();

            glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.62,.06);
              glVertex2f(.59,.06);
              glVertex2f(.59,.0);
              glVertex2f(.62,.0);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.56,.06);
              glVertex2f(.53,.06);
              glVertex2f(.53,.0);
              glVertex2f(.56,.0);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(240, 232, 10);
              glVertex2f(.5,.06);
              glVertex2f(.47,.06);
              glVertex2f(.47,.0);
              glVertex2f(.5,.0);
              glEnd();
              glLoadIdentity();


        /// ================================================= End =================================================================== ///




              /// ================================== LONDON EYE AT EVENING  ========================================= ///



              /// stands ///
              glTranslatef(-0.18f,0.05f,0.0f);
              glBegin(GL_QUADS);
              //glColor3ub(176, 14, 125);
              glColor3ub(158, 9, 128);
              glVertex2f(0,.4);
              glVertex2f(-0.04,.4);
              glVertex2f(-.14,-.2);
               glVertex2f(-.1,-.2);

              glVertex2f(0.04,.4);
              glVertex2f(0,.4);
              glVertex2f(.1,-.2);
               glVertex2f(.14,-.2);
               glEnd();




/// middle round Line Small circle ///

 x=.0f;  y=.4f;  radius =.38f;

	 lineAmount = 100; //# of triangles used to draw circle
	twicePi = 2.0f * PI;
   glTranslatef(0.0,.4,0);
    glRotatef(a,0.0,0.0,-1.0);//a=how many degree you want to rotate around an axis
   glTranslatef(-0.0,-.4,0);
	glBegin(GL_LINE_LOOP);
	 //glColor3ub(253, 254, 254);
	 glColor3ub(255, 217, 0);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	/// Middle Round Line biggest circle ///

 x=.0f;  y=.4f;  radius =.45f;

	 lineAmount = 100; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
	 //glColor3ub(253, 254, 254);
	 glColor3ub(34, 255, 0);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	/// ZIGZAG ///


	     glPushMatrix();
         glTranslatef(0.0,.4,0);
         glRotatef(a,0.0,0.0,-1.0);
         glTranslatef(-0.0,-.4,0);



	     glBegin(GL_LINES);
         glColor3ub(253, 254, 254);
         glVertex2f(0.06f,0.78f);
         glVertex2f(0.0f,0.85f);

         glVertex2f(0.12f,0.84f);
        glVertex2f(0.06f,0.78f);

        glVertex2f(0.12f,0.84f);
        glVertex2f(0.16f,0.74f);

        glVertex2f(0.23f,0.78f);
        glVertex2f(0.16f,0.74f);

        glVertex2f(0.23f,0.78f);
        glVertex2f(0.25f,0.68f);

        glVertex2f(0.34f,0.7f);
        glVertex2f(0.25f,0.68f);

        glVertex2f(0.34f,0.7f);
        glVertex2f(0.34f,0.581f);

        glVertex2f(0.42f,0.556f);
        glVertex2f(0.34f,0.581f);

        glVertex2f(0.42f,0.556f);
        glVertex2f(0.38f,0.45f);

        glVertex2f(0.45f,0.4f);
        glVertex2f(0.38f,0.45f);

         glVertex2f(0.45f,0.4f);
        glVertex2f(0.37f,0.3f);

        glVertex2f(0.42f,0.23f);
        glVertex2f(0.37f,0.3f);

         glVertex2f(0.42f,0.23f);
        glVertex2f(0.3f,0.17f);

        glVertex2f(0.3f,0.06f);
        glVertex2f(0.3f,0.17f);

        glVertex2f(0.3f,0.06f);
        glVertex2f(0.21f,0.08f);

        glVertex2f(0.19f,0.0f);
        glVertex2f(0.21f,0.08f);

        glVertex2f(0.19f,0.0f);
        glVertex2f(0.1f,0.03f);

        glVertex2f(0.06f,-0.04f);
        glVertex2f(0.1f,0.03f);

        glVertex2f(0.06f,-0.04f);
        glVertex2f(0.0f,0.02f);

        glVertex2f(-0.05f,-0.04f);
        glVertex2f(0.0f,0.02f);

        glVertex2f(-0.11f,0.03f);
        glVertex2f(-0.05f,-0.04f);

        glVertex2f(-0.11f,0.03f);
        glVertex2f(-0.16f,-0.02f);

        glVertex2f(-0.2f,0.08f);
        glVertex2f(-0.16f,-0.02f);

        glVertex2f(-0.2f,0.08f);
        glVertex2f(-0.28f,0.05f);

        glVertex2f(-0.32f,0.19f);
        glVertex2f(-0.28f,0.05f);

        glVertex2f(-0.32f,0.19f);
        glVertex2f(-0.4f,0.19f);

        glVertex2f(-0.38f,0.35f);
        glVertex2f(-0.4f,0.19f);

        glVertex2f(-0.38f,0.35f);
        glVertex2f(-0.45f,0.37f);

        glVertex2f(-0.37f,0.48f);
        glVertex2f(-0.45f,0.37f);


        glVertex2f(-0.37f,0.48f);
        glVertex2f(-0.43f,0.54f);

        glVertex2f(-0.33f,0.58f);
        glVertex2f(-0.43f,0.54f);

        glVertex2f(-0.33f,0.58f);
        glVertex2f(-0.33f,0.7f);

        glVertex2f(-0.25f,0.69f);
        glVertex2f(-0.33f,0.7f);

        glVertex2f(-0.25f,0.69f);
        glVertex2f(-0.25f,0.77f);

        glVertex2f(-0.18f,0.73f);
        glVertex2f(-0.25f,0.77f);

        glVertex2f(-0.18f,0.73f);
        glVertex2f(-0.16f,0.82f);

        glVertex2f(-0.1f,0.76f);
        glVertex2f(-0.16f,0.82f);

        glVertex2f(-0.1f,0.76f);
        glVertex2f(-0.07f,0.84f);

        glVertex2f(-0.03f,0.78f);
        glVertex2f(-0.07f,0.84f);

         glVertex2f(-0.03f,0.78f);
        glVertex2f(0.0f,0.85f);

glEnd();
glPopMatrix();


/// lines around the smallest and middle circle ///


        glPushMatrix();
        glTranslatef(0.0,.4,0);
        glRotatef(a,0.0,0.0,-1.0);
        glTranslatef(-0.0,-.4,0);


        glBegin(GL_LINES);
        glColor3ub(201, 207, 207);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.0f,0.78f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.1f,0.77f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.38f,0.4f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.0f,0.01f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.38f,0.4f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.198f,0.72f);
        //glEnd();

         //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.3f,0.63f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.367f,0.523f);
        //glEnd();

         //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.367f,0.3f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.32f,0.19f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.25f,0.12f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.18f,0.06f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.1f,0.03f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.09f,0.02f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.18f,0.05f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.26f,0.12f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.321f,0.2f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.37f,0.29f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.356f,0.52f);
        //glEnd();


         //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.32f,0.62f);
        //glEnd();

        //glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.22f,0.7f);
        //glEnd();

        glLineWidth(3);
        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.13f,0.76f);
        glEnd();

        glPopMatrix();


       a+=0.02f;


/// smallest circle Connected with stands ///


   x=0.0f; y=.4f;  radius =.061f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 //glColor3ub(253, 254, 254);
	 glColor3ub(255, 187, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




/// Blue cabins ///

    glPushMatrix();
    glTranslatef(0.0,.4,0);
    glRotatef(a,0.0,0.0,-1.0);
    glTranslatef(-0.0,-.4,0);



x=0.0f; y=.87f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

       //glColor3ub(13, 189, 217);
      glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();




	x=0.2f; y=.82f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

     //glColor3ub(13, 189, 217);
     glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



		x=0.35f; y=.7f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

    //glColor3ub(13, 183, 209);
    glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=0.45f; y=.53f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

     //glColor3ub(13, 183, 209);
     glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



		x=0.47f; y=.33f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

   //glColor3ub(13, 183, 209);
  glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=0.4f; y=.15f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

    //glColor3ub(13, 183, 209);
    glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=0.26f; y=.01f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

    //glColor3ub(13, 183, 209);
   glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=0.08f; y=-.06f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

    //glColor3ub(13, 183, 209);
    glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=-0.1f; y=-.06f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

     //glColor3ub(13, 183, 209);
     glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=-0.27f; y=.02f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

      //glColor3ub(13, 183, 209);
      glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=-0.41f; y=.16f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

   // glColor3ub(13, 183, 209);
    glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();




	x=-0.47f; y=.33f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

         //glColor3ub(13, 183, 209);
         glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



	x=-0.45f; y=.54f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

     //glColor3ub(13, 183, 209);
     glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



		x=-0.36f; y=.71f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

     //glColor3ub(13, 183, 209);
     glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();



		x=-0.19f; y=.83f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

     //glColor3ub(13, 183, 209);
     glColor3ub(118, 224, 245);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();


	/// ============================ LONDON EYE END ======================= ///



                 /// =========================== Road Boarders Connected with River ========================= ///


    /// Upper Road Border
    glLoadIdentity();
    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3ub(111, 122, 125);/// Ash Color
    glVertex2f(-1.0f,-0.99f);
	glVertex2f(1.0f, -0.99f);
    glEnd();

    /// Lower Road Border
    glLineWidth(8.5);  ///upper line
    glBegin(GL_LINES);
    glColor3ub(105, 101, 99);
    glVertex2f(-1.0f,-0.71f);
	glVertex2f(1.0f, -0.71f);
    glEnd();




   /// =================================== Road Main ======================= ( Black )



    /**glLineWidth(500);
    glBegin(GL_LINES);
    glColor3ub(4, 0, 13);
    glVertex2f(-1.0f,-0.85f);
	glVertex2f(1.0f, -0.85f);
    glEnd();**/

    /// Main Black Road
    glBegin(GL_QUADS);
    glColor3ub(54, 49, 48);
    glVertex2f(-1.0f,-0.76f);
	glVertex2f(-1.0f, -0.97f);
	glVertex2f(1.0f,-0.97f);
	glVertex2f(1.0f, -0.76f);
    glEnd();


    /// Upper Road white line
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(228, 232, 9);
    glVertex2f(-1.0f,-0.73f);
	glVertex2f(1.0f, -0.73f);
    glEnd();


    /// Lower Road white line
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(228, 232, 9);
    glVertex2f(-1.0f,-0.96f);
	glVertex2f(1.0f, -0.96f);
    glEnd();


/// ================================ Road Markers ===============================

   /// 1st Road marker (Right Most)
    glTranslatef(0.0f,-0.72f,0.0f);
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.7f,-0.140f);    /// x, y
	glVertex2f(0.99f, -0.140f);
    glEnd();

    /// 2nd Road marker
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.25f,-0.135f);
	glVertex2f(0.55f, -0.135f);
    glEnd();


    /// 3rd Road marker
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.1f,-0.135f);
	glVertex2f(-0.2f, -0.135f);
    glEnd();

    /// 4th Road marker
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.35f,-0.135f);
	glVertex2f(-0.65f, -0.135f);
    glEnd();


    /// 5th Road marker (Left Most)
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f,-0.140f);
	glVertex2f(-0.85f, -0.140f);
    glEnd();


/// ==================================== Car Moving At Evening =============================  ///

    //glScalef(0.92,0.92,0.0);


    glPushMatrix();
    glTranslatef(positionCarAtEvening,0,0);

    /// Green Body ////
    glTranslatef(0.0,0.01,0);
    glBegin(GL_QUADS);
    glColor3ub(33, 181, 18); /// Green color
    glVertex2f(-0.24f,-0.18f);    /// x, y
    glVertex2f(0.255f, -0.18f);
    glVertex2f(0.255f, -0.1f);
    glVertex2f(-0.24f, -0.1f);
    glEnd();


    /// Green Roof ///
    glBegin(GL_QUADS);
    //glColor3ub(250, 209,5); /// yellow color
    glColor3ub(33, 181, 18);
    glVertex2f(-0.16f,-0.1f);    /// x, y
    glVertex2f(0.18f, -0.1f);
    glVertex2f(0.13f, -0.0165f);
    glVertex2f(-0.1f, -0.0165f);
    glEnd();


    /// White Inside Glass ///
    glBegin(GL_QUADS);
    //glColor3ub(63, 40, 156); /// yellow color
    glColor3ub(255,255,255); /// white
    glVertex2f(-0.13f,-0.1f);    /// x, y
    glVertex2f(0.15f, -0.1f);
    glVertex2f(0.10f, -0.03f);
    glVertex2f(-0.07f, -0.03f);
    glEnd();


    /// Right Wheel
	 x=0.14;  y=-0.18f; radius =0.060f;

	 twicePi = 2.0f * PI;
    //glColor3ub(26, 22, 22);
    glColor3ub(176, 16, 16);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();


	/// White Circle inside Right Wheel
	 x=0.14;  y=-0.18f; radius =0.029f;

	 twicePi = 2.0f * PI;
    glColor3ub(255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();





	/// Left Wheel
	 x=-0.14;  y=-0.18f; radius =0.060f;

	 twicePi = 2.0f * PI;
    //glColor3ub(26, 22, 22);
    glColor3ub(176, 16, 16);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();



	/// White Circle Inside Left Wheel
	 x=-0.14;  y=-0.18f; radius =0.029f;

	 twicePi = 2.0f * PI;
    glColor3ub(255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();
	glPopMatrix();
    glLoadIdentity();

   /// ================== Car Moving  End ======================= ///




	///======================================= Big Ship 1 Moving At Evening ========================== ///

              glPushMatrix();
              glTranslatef(positionBigShipAtEvening,0,0);


              glScalef(.5,.5,0);
              glTranslatef(-1.2,-0.2,0);
              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(.4,-.85);
              glVertex2f(-.4,-.85);
              glVertex2f(-.36,-.9);
              glVertex2f(.36,-.9);
              glEnd();



              glBegin(GL_QUADS);
              glColor3ub(243, 156, 18);
              glVertex2f(.52,-.7);
              glVertex2f(-.52,-.7);
               glColor3ub(211, 84, 0);
              glVertex2f(-.4,-.85);
              glVertex2f(.4,-.85);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(248, 196, 113 );

                  glVertex2f(.52,-.68);
                  glVertex2f(-.52,-.68);
                 glVertex2f(-.52,-.7);
                 glVertex2f(.52,-.7);


/// grey///
  glBegin(GL_QUADS);
              glColor3ub(117, 117, 117  );

                  glVertex2f(.42,-.6);
                  glVertex2f(-.42,-.6);
                 glVertex2f(-.42,-.68);
                 glVertex2f(.42,-.68);
/// Boat cabin ///
                 glBegin(GL_QUADS);
              glColor3ub(159, 168, 218  );
               glVertex2f(.32,-.46);
                  glVertex2f(-.35,-.46);
                 glVertex2f(-.35,-.6);
                 glVertex2f(.39,-.6);

/// window..

     glBegin(GL_QUADS);
              glColor3ub(207, 216, 220  );
               glVertex2f(.335,-.49);
                  glVertex2f(.25,-.49);
                 glVertex2f(.25,-.55);
                 glVertex2f(.365,-.55);
////
/// =================  Ship chimney =================

     glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(.05,-.35);
                  glVertex2f(.1,-.35);
                 glVertex2f(.1,-.46);
                 glVertex2f(.05,-.46);

                 glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(.05,-.33);
                 glVertex2f(.1,-.33);
                  glVertex2f(.1,-.35);
                     glVertex2f(.05,-.35);




                 glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(0,-.35);
                  glVertex2f(-.05,-.35);
                 glVertex2f(-.05,-.46);
                 glVertex2f(-.0,-.46);

                   glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(0,-.33);
                 glVertex2f(-.05,-.33);
                glVertex2f(-.05,-.35);
                    glVertex2f(0,-.35);



glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(-.1,-.35);
                  glVertex2f(-.15,-.35);
                 glVertex2f(-.15,-.46);
                 glVertex2f(-.1,-.46);

                        glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(-.1,-.33);
                 glVertex2f(-.15,-.33);
                glVertex2f(-.15,-.35);
                       glVertex2f(-.1,-.35);



/// =============== Ship Chimney End ====================== ///




   /// circle ///
   glBegin(GL_QUADS);
          glColor3ub(255, 202, 40 );
              glVertex2f(0.09,-.49);
                 glVertex2f(.14,-.49);


                glVertex2f(.14,-.555);
                    glVertex2f(0.09,-.555);


	glEnd();


  glBegin(GL_QUADS);
            glColor3ub(255, 202, 40 );
              glVertex2f(0.02,-.49);
                 glVertex2f(.07,-.49);
                glVertex2f(.07,-.555);
                    glVertex2f(0.02,-.555);


	glEnd();


   glBegin(GL_QUADS);
            glColor3ub(255, 202, 40);
              glVertex2f(0,-.49);
                 glVertex2f(-.05,-.49);
                glVertex2f(-.05,-.555);
                    glVertex2f(0,-.555);
                    glEnd();



                       glBegin(GL_QUADS);
             glColor3ub(255, 202, 40);
              glVertex2f(-0.07,-.49);
                 glVertex2f(-.12,-.49);
                glVertex2f(-.12,-.555);
                    glVertex2f(-0.07,-.555);


	glEnd();

                       glBegin(GL_QUADS);
        glColor3ub(255, 202, 40 );
              glVertex2f(-0.14,-.49);
                 glVertex2f(-.19,-.49);
                glVertex2f(-.19,-.555);
                    glVertex2f(-0.14,-.555);


	glEnd();


                       glBegin(GL_QUADS);
glColor3ub(255, 202, 40 );
              glVertex2f(-0.21,-.49);
                 glVertex2f(-.26,-.49);
                glVertex2f(-.26,-.555);
                    glVertex2f(-0.21,-.555);


	glEnd();
	glPopMatrix();
    glLoadIdentity();


    /// ====================================== BIG SHIP 1 END ==================================== ///





    ///======================================= Small Ship 2 (Same as ship 1) Moving At Evening  ========================== ///


              glPushMatrix();
              glTranslatef(positionSmallShipAtEvening,0,0);


              glScalef(.35,.35,0);
              glTranslatef(0.5,-0.42,0);
              ///glTranslatef(1.5,-0.42,0); /// Main

              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(.4,-.85);
              glVertex2f(-.4,-.85);
              glVertex2f(-.36,-.9);
              glVertex2f(.36,-.9);
              glEnd();



              glBegin(GL_QUADS);
              glColor3ub(243, 156, 18);
              glVertex2f(.52,-.7);
              glVertex2f(-.52,-.7);
               glColor3ub(211, 84, 0);
              glVertex2f(-.4,-.85);
              glVertex2f(.4,-.85);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(248, 196, 113 );

                  glVertex2f(.52,-.68);
                  glVertex2f(-.52,-.68);
                 glVertex2f(-.52,-.7);
                 glVertex2f(.52,-.7);


/// grey///
  glBegin(GL_QUADS);
              glColor3ub(117, 117, 117  );

                  glVertex2f(.42,-.6);
                  glVertex2f(-.42,-.6);
                 glVertex2f(-.42,-.68);
                 glVertex2f(.42,-.68);
/// Boat cabin ///
                 glBegin(GL_QUADS);
              glColor3ub(159, 168, 218  );
               glVertex2f(.32,-.46);
                  glVertex2f(-.35,-.46);
                 glVertex2f(-.35,-.6);
                 glVertex2f(.39,-.6);

/// window..

     glBegin(GL_QUADS);
              glColor3ub(207, 216, 220  );
               glVertex2f(.335,-.49);
                  glVertex2f(.25,-.49);
                 glVertex2f(.25,-.55);
                 glVertex2f(.365,-.55);
////
/// =================  Ship chimney =================

     glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(.05,-.35);
                  glVertex2f(.1,-.35);
                 glVertex2f(.1,-.46);
                 glVertex2f(.05,-.46);

                 glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(.05,-.33);
                 glVertex2f(.1,-.33);
                  glVertex2f(.1,-.35);
                     glVertex2f(.05,-.35);




                 glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(0,-.35);
                  glVertex2f(-.05,-.35);
                 glVertex2f(-.05,-.46);
                 glVertex2f(-.0,-.46);

                   glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(0,-.33);
                 glVertex2f(-.05,-.33);
                glVertex2f(-.05,-.35);
                    glVertex2f(0,-.35);



glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(-.1,-.35);
                  glVertex2f(-.15,-.35);
                 glVertex2f(-.15,-.46);
                 glVertex2f(-.1,-.46);

                        glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(-.1,-.33);
                 glVertex2f(-.15,-.33);
                glVertex2f(-.15,-.35);
                       glVertex2f(-.1,-.35);



/// =============== Ship Chimney End ====================== ///




   /// circle ///
   glBegin(GL_QUADS);
          glColor3ub(255, 202, 40 );
              glVertex2f(0.09,-.49);
                 glVertex2f(.14,-.49);


                glVertex2f(.14,-.555);
                    glVertex2f(0.09,-.555);


	glEnd();


  glBegin(GL_QUADS);
            glColor3ub(255, 202, 40 );
              glVertex2f(0.02,-.49);
                 glVertex2f(.07,-.49);
                glVertex2f(.07,-.555);
                    glVertex2f(0.02,-.555);


	glEnd();


   glBegin(GL_QUADS);
            glColor3ub(255, 202, 40);
              glVertex2f(0,-.49);
                 glVertex2f(-.05,-.49);
                glVertex2f(-.05,-.555);
                    glVertex2f(0,-.555);
                    glEnd();



                       glBegin(GL_QUADS);
             glColor3ub(255, 202, 40);
              glVertex2f(-0.07,-.49);
                 glVertex2f(-.12,-.49);
                glVertex2f(-.12,-.555);
                    glVertex2f(-0.07,-.555);


	glEnd();

                       glBegin(GL_QUADS);
        glColor3ub(255, 202, 40 );
              glVertex2f(-0.14,-.49);
                 glVertex2f(-.19,-.49);
                glVertex2f(-.19,-.555);
                    glVertex2f(-0.14,-.555);


	glEnd();


                       glBegin(GL_QUADS);
glColor3ub(255, 202, 40 );
              glVertex2f(-0.21,-.49);
                 glVertex2f(-.26,-.49);
                glVertex2f(-.26,-.555);
                    glVertex2f(-0.21,-.555);


	glEnd();
	glPopMatrix();
    glLoadIdentity();


    /// ====================================== SHIP 2 END ==================================== ///





        /// ========================================== UPPER RIVER BORDER LINE ====================================== ///


              glLineWidth(3.8);
              //glTranslatef(0.6,0.5,0.0);
              glBegin(GL_LINES);
              //glColor3ub(228, 232, 9); // yellow color
              //glColor3ub(7, 55, 99); //main
              glColor3ub(153, 146, 103);
              //glColor3ub(228, 232, 9); /// main
              glVertex2f(1,-.22);
              glVertex2f(-1,-.22);
              glEnd();
              glLoadIdentity();



     /// =================================== STARS ====================================== ///


   /// 1 Top left

         x=-.8f; y=.86f; radius =.012f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 /// 2 Top left

         x=-.83f; y=.76f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 3 Top left

         x=-.93f; y=.86f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	/// 4 Top left

         x=-.93f; y=.92f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 5 Top Right Up the moon

         x=.83f; y=.86f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 6 Top Right Up the moon

         x=.93f; y=.92f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/// 7 Top Right Up the moon

         x=.73f; y=.92f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/// 8 Top Right Up the moon

         x=.53f; y=.96f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 9 Top Right

         x=.63f; y=.862f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/// 10 Top Right

         x=.43f; y=.922f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/// 11 Top Right

         x=.33f; y=.822f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 12 Top Right

         x=.43f; y=.722f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 13 Top Right

         x=.58f; y=.722f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



    /// 14 Top Right

         x=.38f; y=.622f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 15 Top Right

         x=.92f; y=.782f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    /// 15 Top Right

         x=.52f; y=.882f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 16 Top Right

         x=.2f; y=.922f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    /// 17 Top Right

         x=.32f; y=.922f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 18 Top Right

         x=.52f; y=.622f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();





	/// 19 Top Left

         x=-.52f; y=.922f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/// 20 Top Left

         x=-.66f; y=.922f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 21 Top Left

         x=-.69f; y=.822f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	/// 22 Top Left

         x=-.45f; y=.922f; radius =.011f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 23 Top Left

         x=-.70f; y=.952f; radius =.012f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// 24 Top Left

         x=-.930f; y=.752f; radius =.012f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/// 25 Top Right

         x=.70f; y=.702f; radius =.012f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(228, 232, 9);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




      /// ==================================== STARS END ============================================ ///



   /// ========================= Plane At Evening ========================= ///




     glPushMatrix();
     glTranslatef(positionPlaneAtEvening,0,0);


     glScalef(0.8,1.07,0);
     glTranslatef(-0.7,0.1,0.0);



    /// body
    glBegin(GL_POLYGON);
    //glColor3ub(12, 171, 65);
    glColor3ub(194,193,192); /// Main Color
    glVertex2f(0.6f,0.6f);
    glVertex2f(0.55f,0.65f);
    glVertex2f(0.6f,0.7f);
    glVertex2f(0.9f,0.65f);
    glVertex2f(0.92f,0.62f);
    glVertex2f(0.8f,0.55f);
    glEnd();

    ///wing Lower

    glBegin(GL_QUADS);
    glColor3ub(227, 216, 225);
    //glColor3ub(194,193,192); //main
    glVertex2f(0.9f,0.65f);
    glVertex2f(0.95f,0.75f);
    glVertex2f(0.86f,0.74f);
    glVertex2f(0.77f,0.66f);
    glEnd();

    ///wing Upper

    glBegin(GL_QUADS);
    //glColor3ub(227, 216, 225);
    glColor3ub(194,193,192);  /// main
    glVertex2f(0.7f,0.65f);
    glVertex2f(0.75f,0.74f);
    glVertex2f(0.68f,0.74f);
    glVertex2f(0.6f,0.64f);
    glEnd();


    ///glass
    glBegin(GL_QUADS);
    glColor3ub(222,61,47);
    glVertex2f(0.55f,0.65f);
    glVertex2f(0.57f,0.63f);
    glVertex2f(0.59,0.64f);
    glVertex2f(0.61f,0.71f);
    glEnd();


    /// door
    glBegin(GL_QUADS);
    //glColor3ub(82,78,78);
    glColor3ub(227, 7, 179); /// Purple
    glVertex2f(0.64f,0.61f);
    glVertex2f(0.69f,0.60f);
    glVertex2f(0.71f,0.67f);
    glVertex2f(0.66f,0.68f);
    glEnd();

    /// window
    glLineWidth(3);
    glBegin(GL_LINES);
    //glColor3ub(240,209,36);///Main
    glColor3ub(217, 155, 0);
    glVertex2f(0.74f,0.68f);
    glVertex2f(0.73f,0.63f);
    glEnd();


    glLineWidth(3);
    glBegin(GL_LINES);
    //glColor3ub(240,209,36); /// MAin
    glColor3ub(217, 155, 0);
    glVertex2f(0.78f,0.68f);
    glVertex2f(0.77f,0.63f);
    glEnd();


    glPopMatrix();
    glLoadIdentity();

       /// ========================================== Plane End ======================================== ///





        glutTimerFunc(4500,Night,0);

        glFlush();


}

void Evening(int val)
{
    glutDisplayFunc(Evening_View);
}





void Day_View()

{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);





    ///============================================= Field ====================================== ///

              //glColor3ub(36, 134, 13); /// Main
              //glColor3ub(15, 252, 78);
              glColor3ub(7, 222, 64);
              glBegin(GL_QUADS);
              glVertex2f(1,-0.25);
              glVertex2f(-1,-0.25);
              glVertex2f(-1,0);
              glVertex2f(1,0);
              glEnd();


    /// =============================== Railing +++++++++++++++++++++++++++++++++++///


    /// LEFT MOST

    glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.96f,-0.07f);
          glVertex2f(-0.96f,-0.2f);
          glEnd();

          x=-.96f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



    ////////1st

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.88f,-0.07f);
          glVertex2f(-0.88f,-0.2f);
          glEnd();

          x=-.88f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/////2nd

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.8f,-0.07f);
          glVertex2f(-0.8f,-0.2f);
          glEnd();

          x=-.8f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/////////3rd


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.7f,-0.07f);
          glVertex2f(-0.7f,-0.2f);
          glEnd();

          x=-.7f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//////////4th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.6f,-0.07f);
          glVertex2f(-0.6f,-0.2f);
          glEnd();

          x=-.6f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//////////5th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.5f,-0.07f);
          glVertex2f(-0.5f,-0.2f);
          glEnd();

          x=-.5f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




	//////////6th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.4f,-0.07f);
          glVertex2f(-0.4f,-0.2f);
          glEnd();

          x=-.4f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	///////////7th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.3f,-0.07f);
          glVertex2f(-0.3f,-0.2f);
          glEnd();

          x=-.3f; y=-0.07f; radius =.01f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	///////////8th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.2f,-0.07f);
          glVertex2f(-0.2f,-0.2f);
          glEnd();

          x=-.2f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	///////////9th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.1f,-0.07f);
          glVertex2f(-0.1f,-0.2f);
          glEnd();

          x=-.1f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////////////10th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.0f,-0.07f);
          glVertex2f(-0.0f,-0.2f);
          glEnd();

          x=-.0f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();



	//////////11th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.1f,-0.07f);
          glVertex2f(0.1f,-0.2f);
          glEnd();

          x=.1f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//////////12th

             glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.2f,-0.07f);
          glVertex2f(0.2f,-0.2f);
          glEnd();

          x=.2f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////////////13th

	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.3f,-0.07f);
          glVertex2f(0.3f,-0.2f);
          glEnd();

          x=.3f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////////////14th

	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.4f,-0.07f);
          glVertex2f(0.4f,-0.2f);
          glEnd();

          x=.4f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/////////////15th
         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.5f,-0.07f);
          glVertex2f(0.5f,-0.2f);
          glEnd();

          x=.5f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//////////////////////16th

	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.6f,-0.07f);
          glVertex2f(0.6f,-0.2f);
          glEnd();

          x=.6f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//////////////////////17th

         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.7f,-0.07f);
          glVertex2f(0.7f,-0.2f);
          glEnd();

          x=.7f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



    ///////////////////////////18th

             glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.8f,-0.07f);
          glVertex2f(0.8f,-0.2f);
          glEnd();

          x=.8f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




	////////////////////////////////19th

	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.88f,-0.07f);
          glVertex2f(0.88f,-0.2f);
          glEnd();

          x=.88f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// LAST Right Most

	   glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.96f,-0.07f);
          glVertex2f(0.96f,-0.2f);
          glEnd();

          x=.96f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    /// ============================== RAILING END ================================ ///




    /// =============================== River =========================================== ///

              glTranslatef(0.0f,0.05f,0.0f);
              //glColor3ub(0,119,190); /// Main
              glColor3ub(15, 181, 252);
              glBegin(GL_QUADS);
              glVertex2f(1,-.25);
              glVertex2f(-1,-.25);
              glColor3ub(36, 135, 227);
              glVertex2f(-1,-0.75);
              glVertex2f(1,-0.75);
              glEnd();
              glLoadIdentity();

     /// ====================================== Sky ======================================= ///

              //glColor3ub(64,156,255); /// Main
              glColor3ub(15, 181, 252);
              glBegin(GL_QUADS);
              glVertex2f(1,1);
              glVertex2f(-1,1);
              glColor3ub(240, 178, 122 ); /// Main
              glVertex2f(-1,0);
              glVertex2f(1,0);
              glEnd();
              glLoadIdentity();

     /// ====================================== SUN ==================================== ///


	x=.6f; y=.8f; radius =.11f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();


	///=================================== Cloud Right ===================================///

     glPushMatrix();
     glTranslatef(positionCloud1,0.0f,0.0f);
     glTranslatef(-0.2,-0.05,0.0);  /// -0.8,-0.05,0.0

	x=.9f; y=.8f; radius =.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;



	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(255,255,255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


///
	x=.8f; y=.9f; radius =.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(255,255,255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	///

	x=.7f; y=.8f; radius =.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(255,255,255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

///


x=.6f; y=.8f; radius =.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(255,255,255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	///

	x=.78f; y=.8f; radius =.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(255,255,255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glPopMatrix();
glLoadIdentity();



///======================================= Cloud Left =================================///


     glPushMatrix();
     glTranslatef(positionCloud2,0.0f,0.0f);
     glTranslatef(0.6,-0.03,0.0);

    x=-.8f; y=.9f; radius =.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(255,255,255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	///

	x=-.7f; y=.83f; radius =.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(255,255,255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	///

	x=-.8f; y=.83f; radius =.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(255,255,255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	///

		x=-.9f; y=.83f; radius =.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3ub(248, 196, 113);
	glColor3ub(255,255,255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



glPopMatrix();

glLoadIdentity();

/// ======================= CLOUDS END ================================= ///



    /// ================================ Plane At Day ========================================= ///


     glPushMatrix();
     glTranslatef(positionPlaneAtDay,0,0);


     glScalef(0.8,1.07,0);
     glTranslatef(-0.7,0.1,0.0);




    /////body
    glBegin(GL_POLYGON);
    //glColor3ub(237,237,237);
    glColor3ub(194,193,192);
    glVertex2f(0.6f,0.6f);
    glVertex2f(0.55f,0.65f);
    glVertex2f(0.6f,0.7f);
    glVertex2f(0.9f,0.65f);
    glVertex2f(0.92f,0.62f);
    glVertex2f(0.8f,0.55f);
    glEnd();

    ////wing

    glBegin(GL_QUADS);
    //glColor3ub(237,237,237);
    glColor3ub(194,193,192);
    glVertex2f(0.9f,0.65f);
    glVertex2f(0.95f,0.75f);
    glVertex2f(0.86f,0.74f);
    glVertex2f(0.77f,0.66f);
    glEnd();

    ////////wing

    glBegin(GL_QUADS);
    //glColor3ub(237,237,237);
    glColor3ub(194,193,192);
    glVertex2f(0.7f,0.65f);
    glVertex2f(0.75f,0.74f);
    glVertex2f(0.68f,0.74f);
    glVertex2f(0.6f,0.64f);
    glEnd();

    //////glass

    glBegin(GL_QUADS);
    glColor3ub(222,61,47);
    glVertex2f(0.55f,0.65f);
    glVertex2f(0.57f,0.63f);
    glVertex2f(0.59,0.64f);
    glVertex2f(0.61f,0.71f);
    glEnd();

    ////// door



    glBegin(GL_QUADS);
    glColor3ub(82,78,78);
    glVertex2f(0.64f,0.61f);
    glVertex2f(0.69f,0.60f);
    glVertex2f(0.71f,0.67f);
    glVertex2f(0.66f,0.68f);
    glEnd();

    /////////// window

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(240,209,36);
    glVertex2f(0.74f,0.68f);
    glVertex2f(0.73f,0.63f);
    glEnd();


     glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(240,209,36);
    glVertex2f(0.78f,0.68f);
    glVertex2f(0.77f,0.63f);
    glEnd();



glPopMatrix();

glLoadIdentity();

//////////////////////////////////////////////////





     /// =============================== building1 ( Left Most ) ========================================== ///


              /// =============== building1 ============================= ///

              glTranslatef(-0.4f,0.0f,0.0f);
              glScalef(0.6,2,0);
              glBegin(GL_QUADS);
              glColor3ub(169,169,169); /// Main
              //glColor3ub(129, 142, 143);
              //glColor3ub(116, 122, 121);
              glVertex2f(-.6,.35);
              glVertex2f(-1,.35);
              glVertex2f(-1,0);
              glVertex2f(-.6,0);
              glEnd();



              /// Side Quad
              glBegin(GL_QUADS);
              glColor3ub(128,128,128); /// Main
              //glColor3ub(10, 135, 173);
              glVertex2f(-.5,.32);
              glVertex2f(-.6,.35);
              glVertex2f(-.6,0);
              glVertex2f(-.5,0);
              glEnd();

/// windows
              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.33);
              glVertex2f(-.64,.33);
              glVertex2f(-.64,.3);
              glVertex2f(-.62,.3);
              glEnd();


     glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.33);
              glVertex2f(-.68,.33);
              glVertex2f(-.68,.3);
              glVertex2f(-.66,.3);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.33);
              glVertex2f(-.72,.33);
              glVertex2f(-.72,.3);
              glVertex2f(-.7,.3);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.33);
              glVertex2f(-.76,.33);
              glVertex2f(-.76,.3);
              glVertex2f(-.74,.3);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.33);
              glVertex2f(-.8,.33);
              glVertex2f(-.8,.3);
              glVertex2f(-.78,.3);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.33);
              glVertex2f(-.84,.33);
              glVertex2f(-.84,.3);
              glVertex2f(-.82,.3);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.33);
              glVertex2f(-.88,.33);
              glVertex2f(-.88,.3);
              glVertex2f(-.86,.3);
              glEnd();
                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.33);
              glVertex2f(-.92,.33);
              glVertex2f(-.92,.3);
              glVertex2f(-.9,.3);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.33);
              glVertex2f(-.96,.33);
              glVertex2f(-.96,.3);
              glVertex2f(-.94,.3);
              glEnd();
                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.33);
              glVertex2f(-.997,.33);
              glVertex2f(-.997,.3);
              glVertex2f(-.98,.3);
              glEnd();
/// 2nd //

   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.28);
              glVertex2f(-.64,.28);
              glVertex2f(-.64,.25);
              glVertex2f(-.62,.25);
              glEnd();

  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.28);
              glVertex2f(-.68,.28);
              glVertex2f(-.68,.25);
              glVertex2f(-.66,.25);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.28);
              glVertex2f(-.72,.28);
              glVertex2f(-.72,.25);
              glVertex2f(-.7,.25);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.28);
              glVertex2f(-.76,.28);
              glVertex2f(-.76,.25);
              glVertex2f(-.74,.25);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.28);
              glVertex2f(-.8,.28);
              glVertex2f(-.8,.25);
              glVertex2f(-.78,.25);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.28);
              glVertex2f(-.84,.28);
              glVertex2f(-.84,.25);
              glVertex2f(-.82,.25);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.28);
              glVertex2f(-.88,.28);
              glVertex2f(-.88,.25);
              glVertex2f(-.86,.25);
              glEnd();
                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.28);
              glVertex2f(-.92,.28);
              glVertex2f(-.92,.25);
              glVertex2f(-.9,.25);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.28);
              glVertex2f(-.96,.28);
              glVertex2f(-.96,.25);
              glVertex2f(-.94,.25);
              glEnd();
                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.28);
              glVertex2f(-.997,.28);
              glVertex2f(-.997,.25);
              glVertex2f(-.98,.25);
              glEnd();

/// 3rd

 glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.23);
              glVertex2f(-.64,.23);
              glVertex2f(-.64,.2);
              glVertex2f(-.62,.2);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.23);
              glVertex2f(-.68,.23);
              glVertex2f(-.68,.2);
              glVertex2f(-.66,.2);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.23);
              glVertex2f(-.72,.23);
              glVertex2f(-.72,.2);
              glVertex2f(-.7,.2);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.23);
              glVertex2f(-.76,.23);
              glVertex2f(-.76,.2);
              glVertex2f(-.74,.2);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.23);
              glVertex2f(-.8,.23);
              glVertex2f(-.8,.2);
              glVertex2f(-.78,.2);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.23);
              glVertex2f(-.84,.23);
              glVertex2f(-.84,.2);
              glVertex2f(-.82,.2);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.23);
              glVertex2f(-.88,.23);
              glVertex2f(-.88,.2);
              glVertex2f(-.86,.2);
              glEnd();
                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.23);
              glVertex2f(-.92,.23);
              glVertex2f(-.92,.2);
              glVertex2f(-.9,.2);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.23);
              glVertex2f(-.96,.23);
              glVertex2f(-.96,.2);
              glVertex2f(-.94,.2);
              glEnd();
                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.23);
              glVertex2f(-.997,.23);
              glVertex2f(-.997,.2);
              glVertex2f(-.98,.2);
              glEnd();

///4
              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.18);
              glVertex2f(-.64,.18);
              glVertex2f(-.64,.15);
              glVertex2f(-.62,.15);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.18);
              glVertex2f(-.68,.18);
              glVertex2f(-.68,.15);
              glVertex2f(-.66,.15);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.18);
              glVertex2f(-.72,.18);
              glVertex2f(-.72,.15);
              glVertex2f(-.7,.15);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.18);
              glVertex2f(-.76,.18);
              glVertex2f(-.76,.15);
              glVertex2f(-.74,.15);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.18);
              glVertex2f(-.8,.18);
              glVertex2f(-.8,.15);
              glVertex2f(-.78,.15);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.18);
              glVertex2f(-.84,.18);
              glVertex2f(-.84,.15);
              glVertex2f(-.82,.15);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.18);
              glVertex2f(-.88,.18);
              glVertex2f(-.88,.15);
              glVertex2f(-.86,.15);
              glEnd();
                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.18);
              glVertex2f(-.92,.18);
              glVertex2f(-.92,.15);
              glVertex2f(-.9,.15);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.18);
              glVertex2f(-.96,.18);
              glVertex2f(-.96,.15);
              glVertex2f(-.94,.15);
              glEnd();
                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.18);
              glVertex2f(-.997,.18);
              glVertex2f(-.997,.15);
              glVertex2f(-.98,.15);
              glEnd();
/// 5
       glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.13);
              glVertex2f(-.64,.13);
              glVertex2f(-.64,.1);
              glVertex2f(-.62,.1);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.13);
              glVertex2f(-.68,.13);
              glVertex2f(-.68,.1);
              glVertex2f(-.66,.1);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.13);
              glVertex2f(-.72,.13);
              glVertex2f(-.72,.1);
              glVertex2f(-.7,.1);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.13);
              glVertex2f(-.76,.13);
              glVertex2f(-.76,.1);
              glVertex2f(-.74,.1);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.13);
              glVertex2f(-.8,.13);
              glVertex2f(-.8,.1);
              glVertex2f(-.78,.1);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.13);
              glVertex2f(-.84,.13);
              glVertex2f(-.84,.1);
              glVertex2f(-.82,.1);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.13);
              glVertex2f(-.88,.13);
              glVertex2f(-.88,.1);
              glVertex2f(-.86,.1);
              glEnd();
                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.13);
              glVertex2f(-.92,.13);
              glVertex2f(-.92,.1);
              glVertex2f(-.9,.1);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.13);
              glVertex2f(-.96,.13);
              glVertex2f(-.96,.1);
              glVertex2f(-.94,.1);
              glEnd();
                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.13);
              glVertex2f(-.997,.13);
              glVertex2f(-.997,.1);
              glVertex2f(-.98,.1);
              glEnd();
///6
     glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.08);
              glVertex2f(-.64,.08);
              glVertex2f(-.64,.05);
              glVertex2f(-.62,.05);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.08);
              glVertex2f(-.68,.08);
              glVertex2f(-.68,.05);
              glVertex2f(-.66,.05);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.08);
              glVertex2f(-.72,.08);
              glVertex2f(-.72,.05);
              glVertex2f(-.7,.05);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.08);
              glVertex2f(-.76,.08);
              glVertex2f(-.76,.05);
              glVertex2f(-.74,.05);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.08);
              glVertex2f(-.8,.08);
              glVertex2f(-.8,.05);
              glVertex2f(-.78,.05);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.08);
              glVertex2f(-.84,.08);
              glVertex2f(-.84,.05);
              glVertex2f(-.82,.05);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.08);
              glVertex2f(-.88,.08);
              glVertex2f(-.88,.05);
              glVertex2f(-.86,.05);
              glEnd();
                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.08);
              glVertex2f(-.92,.08);
              glVertex2f(-.92,.05);
              glVertex2f(-.9,.05);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.08);
              glVertex2f(-.96,.08);
              glVertex2f(-.96,.05);
              glVertex2f(-.94,.05);
              glEnd();
                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.08);
              glVertex2f(-.997,.08);
              glVertex2f(-.997,.05);
              glVertex2f(-.98,.05);
              glEnd();
              //glLoadIdentity();





    /// =============================== building2 (Small Left) ========================================= ///

         glScalef(2.4,.6,0);
         glTranslatef(0.13f,0.0f,0.0f);
         glBegin(GL_QUADS);
             glColor3ub(166, 172, 175 );
              glVertex2f(-.155,.32);
              glVertex2f(-.3,.31);
              glVertex2f(-.3,0);
              glVertex2f(-.155,0);
              glEnd();

/// windows1 ///

             glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.3);
              glVertex2f(-.3,.3);
              glVertex2f(-.3,.27);
              glVertex2f(-.29,.27);
              glEnd();

            glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.3);
              glVertex2f(-.28,.3);
              glVertex2f(-.28,.27);
              glVertex2f(-.26,.27);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.3);
              glVertex2f(-.25,.3);
              glVertex2f(-.25,.27);
              glVertex2f(-.23,.27);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.3);
              glVertex2f(-.22,.3);
              glVertex2f(-.22,.27);
              glVertex2f(-.2,.27);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.3);
              glVertex2f(-.19,.3);
              glVertex2f(-.19,.27);
              glVertex2f(-.17,.27);
              glEnd();

/// window2 ///
   glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.25);
              glVertex2f(-.3,.25);
              glVertex2f(-.3,.22);
              glVertex2f(-.29,.22);
              glEnd();


          /////
            glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.25);
              glVertex2f(-.28,.25);
              glVertex2f(-.28,.22);
              glVertex2f(-.26,.22);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.25);
              glVertex2f(-.25,.25);
              glVertex2f(-.25,.22);
              glVertex2f(-.23,.22);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.25);
              glVertex2f(-.22,.25);
              glVertex2f(-.22,.22);
              glVertex2f(-.2,.22);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.25);
              glVertex2f(-.19,.25);
              glVertex2f(-.19,.22);
              glVertex2f(-.17,.22);
              glEnd();

/// window 3///

 glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.2);
              glVertex2f(-.3,.2);
              glVertex2f(-.3,.17);
              glVertex2f(-.29,.17);
              glEnd();
           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.2);
              glVertex2f(-.28,.2);
              glVertex2f(-.28,.17);
              glVertex2f(-.26,.17);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.2);
              glVertex2f(-.25,.2);
              glVertex2f(-.25,.17);
              glVertex2f(-.23,.17);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.2);
              glVertex2f(-.22,.2);
              glVertex2f(-.22,.17);
              glVertex2f(-.2,.17);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.2);
              glVertex2f(-.19,.2);
              glVertex2f(-.19,.17);
              glVertex2f(-.17,.17);
              glEnd();


///window4///


glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.15);
              glVertex2f(-.3,.15);
              glVertex2f(-.3,.12);
              glVertex2f(-.29,.12);
              glEnd();
           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.15);
              glVertex2f(-.28,.15);
              glVertex2f(-.28,.12);
              glVertex2f(-.26,.12);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.15);
              glVertex2f(-.25,.15);
              glVertex2f(-.25,.12);
              glVertex2f(-.23,.12);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.15);
              glVertex2f(-.22,.15);
              glVertex2f(-.22,.12);
              glVertex2f(-.2,.12);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.15);
              glVertex2f(-.19,.15);
              glVertex2f(-.19,.12);
              glVertex2f(-.17,.12);
              glEnd();


/// windows 5 ///

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.1);
              glVertex2f(-.3,.1);
              glVertex2f(-.3,.07);
              glVertex2f(-.29,.07);
              glEnd();
           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.1);
              glVertex2f(-.28,.1);
              glVertex2f(-.28,.07);
              glVertex2f(-.26,.07);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.1);
              glVertex2f(-.25,.1);
              glVertex2f(-.25,.07);
              glVertex2f(-.23,.07);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.1);
              glVertex2f(-.22,.1);
              glVertex2f(-.22,.07);
              glVertex2f(-.2,.07);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.1);
              glVertex2f(-.19,.1);
              glVertex2f(-.19,.07);
              glVertex2f(-.17,.07);
              glEnd();



glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.05);
              glVertex2f(-.3,.05);
              glVertex2f(-.3,.02);
              glVertex2f(-.29,.02);
              glEnd();
           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.05);
              glVertex2f(-.28,.05);
              glVertex2f(-.28,.02);
              glVertex2f(-.26,.02);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.05);
              glVertex2f(-.25,.05);
              glVertex2f(-.25,.02);
              glVertex2f(-.23,.02);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.05);
              glVertex2f(-.22,.05);
              glVertex2f(-.22,.02);
              glVertex2f(-.2,.02);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.05);
              glVertex2f(-.19,.05);
              glVertex2f(-.19,.02);
              glVertex2f(-.17,.02);
              glEnd();



              /// ============================== building3 Right Most (house) ========================== ///

               glScalef(.7,.75,0);
               glTranslatef(0.3,0.0,0.0);


               glBegin(GL_QUADS);
               glColor3ub(192,192,192); /// Main
              //glColor3ub(4, 197, 204);
              glVertex2f(1,.27);
              glVertex2f(.3,.27);
              glVertex2f(.3,0);
              glVertex2f(1,0);
              glEnd();

              glBegin(GL_QUADS);
              //glColor3ub(4, 197, 204);
              glColor3ub(153, 163, 164); ///  Main Ash Color
              glVertex2f(.99,.255);
              glVertex2f(.32,.255);
              glVertex2f(.32,.145);
              glVertex2f(.99,.145);
              glEnd();

/// shade ///
                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(1,.45);
              glVertex2f(.32,.45);
              glVertex2f(.25,.26);
              glVertex2f(1,.26);
              glEnd();
   /// door///
     glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.4,.13);
              glVertex2f(.34,.13);
              glVertex2f(.34,0);
              glVertex2f(.4,0);
              glEnd();


/// window///

 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.98,.245);
              glVertex2f(.95,.245);
              glVertex2f(.95,.19);
              glVertex2f(.98,.19);
              glEnd();

               glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.92,.245);
              glVertex2f(.89,.245);
              glVertex2f(.89,.19);
              glVertex2f(.92,.19);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.86,.245);
              glVertex2f(.83,.245);
              glVertex2f(.83,.19);
              glVertex2f(.86,.19);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.8,.245);
              glVertex2f(.77,.245);
              glVertex2f(.77,.19);
              glVertex2f(.8,.19);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.74,.245);
              glVertex2f(.71,.245);
              glVertex2f(.71,.19);
              glVertex2f(.74,.19);
              glEnd();

                 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.68,.245);
              glVertex2f(.65,.245);
              glVertex2f(.65,.19);
              glVertex2f(.68,.19);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.62,.245);
              glVertex2f(.59,.245);
              glVertex2f(.59,.19);
              glVertex2f(.62,.19);
              glEnd();
                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.56,.245);
              glVertex2f(.53,.245);
              glVertex2f(.53,.19);
              glVertex2f(.56,.19);
              glEnd();
                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.5,.245);
              glVertex2f(.47,.245);
              glVertex2f(.47,.19);
              glVertex2f(.5,.19);
              glEnd();

/// window2///

 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.98,.16);
              glVertex2f(.95,.16);
              glVertex2f(.95,.08);
              glVertex2f(.98,.08);
              glEnd();

               glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.92,.16);
              glVertex2f(.89,.16);
              glVertex2f(.89,.08);
              glVertex2f(.92,.08);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.86,.16);
              glVertex2f(.83,.16);
              glVertex2f(.83,.08);
              glVertex2f(.86,.08);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.8,.16);
              glVertex2f(.77,.16);
              glVertex2f(.77,.08);
              glVertex2f(.8,.08);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.74,.16);
              glVertex2f(.71,.16);
              glVertex2f(.71,.08);
              glVertex2f(.74,.08);
              glEnd();

                 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.68,.16);
              glVertex2f(.65,.16);
              glVertex2f(.65,.08);
              glVertex2f(.68,.08);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.62,.16);
              glVertex2f(.59,.16);
              glVertex2f(.59,.08);
              glVertex2f(.62,.08);
              glEnd();
                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.56,.16);
              glVertex2f(.53,.16);
              glVertex2f(.53,.08);
              glVertex2f(.56,.08);
              glEnd();
                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.5,.16);
              glVertex2f(.47,.16);
              glVertex2f(.47,.08);
              glVertex2f(.5,.08);
              glEnd();


              /// win3 ///

 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.98,.06);
              glVertex2f(.95,.06);
              glVertex2f(.95,0);
              glVertex2f(.98,0);
              glEnd();

               glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.92,.06);
              glVertex2f(.89,.06);
              glVertex2f(.89,.0);
              glVertex2f(.92,.0);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.86,.06);
              glVertex2f(.83,.06);
              glVertex2f(.83,.0);
              glVertex2f(.86,.0);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.8,.06);
              glVertex2f(.77,.06);
              glVertex2f(.77,.0);
              glVertex2f(.8,.0);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.74,.06);
              glVertex2f(.71,.06);
              glVertex2f(.71,.0);
              glVertex2f(.74,.0);
              glEnd();

                 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.68,.06);
              glVertex2f(.65,.06);
              glVertex2f(.65,.0);
              glVertex2f(.68,.0);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.62,.06);
              glVertex2f(.59,.06);
              glVertex2f(.59,.0);
              glVertex2f(.62,.0);
              glEnd();
                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.56,.06);
              glVertex2f(.53,.06);
              glVertex2f(.53,.0);
              glVertex2f(.56,.0);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.5,.06);
              glVertex2f(.47,.06);
              glVertex2f(.47,.0);
              glVertex2f(.5,.0);
              glEnd();
              glLoadIdentity();


            /// ================================================= End =================================================================== ///




              /// ================================== LONDON EYE ========================================= ///



              /// stands ///
              glTranslatef(-0.18f,0.05f,0.0f);
              glBegin(GL_QUADS);
              ///glColor3ub(253, 254, 254); /// Main White color Stand
              glColor3ub(158, 9, 128);
              glVertex2f(0,.4);
              glVertex2f(-0.04,.4);
              glVertex2f(-.14,-.2);
               glVertex2f(-.1,-.2);

               glVertex2f(0.04,.4);
               glVertex2f(0,.4);
               glVertex2f(.1,-.2);
               glVertex2f(.14,-.2);
               glEnd();




/// middle Round Line Small circle ///

 x=.0f;  y=.4f;  radius =.38f;

	 lineAmount = 100; //# of triangles used to draw circle
	twicePi = 2.0f * PI;
   glTranslatef(0.0,.4,0);
    glRotatef(a,0.0,0.0,-1.0);//a=how many degree you want to rotate around an axis
   glTranslatef(-0.0,-.4,0);
	glBegin(GL_LINE_LOOP);
	 glColor3ub(253, 254, 254); /// Main White
	 //glColor3ub(255, 217, 0);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	/// Middle Round Line biggest circle ///

 x=.0f;  y=.4f;  radius =.45f;

	 lineAmount = 100; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
	 glColor3ub(253, 254, 254); /// Main White
	 //glColor3ub(34, 255, 0);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();




	/// ZIGZAG///

	     glPushMatrix();
         glTranslatef(0.0,.4,0);
         glRotatef(a,0.0,0.0,-1.0);
         glTranslatef(-0.0,-.4,0);




	     glBegin(GL_LINES);
         glColor3ub(253, 254, 254);
        glVertex2f(0.06f,0.78f);
        glVertex2f(0.0f,0.85f);

         glVertex2f(0.12f,0.84f);
        glVertex2f(0.06f,0.78f);

        glVertex2f(0.12f,0.84f);
        glVertex2f(0.16f,0.74f);

        glVertex2f(0.23f,0.78f);
        glVertex2f(0.16f,0.74f);

        glVertex2f(0.23f,0.78f);
        glVertex2f(0.25f,0.68f);

        glVertex2f(0.34f,0.7f);
        glVertex2f(0.25f,0.68f);

        glVertex2f(0.34f,0.7f);
        glVertex2f(0.34f,0.581f);

        glVertex2f(0.42f,0.556f);
        glVertex2f(0.34f,0.581f);

        glVertex2f(0.42f,0.556f);
        glVertex2f(0.38f,0.45f);

        glVertex2f(0.45f,0.4f);
        glVertex2f(0.38f,0.45f);

         glVertex2f(0.45f,0.4f);
        glVertex2f(0.37f,0.3f);

        glVertex2f(0.42f,0.23f);
        glVertex2f(0.37f,0.3f);

         glVertex2f(0.42f,0.23f);
        glVertex2f(0.3f,0.17f);

        glVertex2f(0.3f,0.06f);
        glVertex2f(0.3f,0.17f);

        glVertex2f(0.3f,0.06f);
        glVertex2f(0.21f,0.08f);

        glVertex2f(0.19f,0.0f);
        glVertex2f(0.21f,0.08f);

        glVertex2f(0.19f,0.0f);
        glVertex2f(0.1f,0.03f);

        glVertex2f(0.06f,-0.04f);
        glVertex2f(0.1f,0.03f);

        glVertex2f(0.06f,-0.04f);
        glVertex2f(0.0f,0.02f);

        glVertex2f(-0.05f,-0.04f);
        glVertex2f(0.0f,0.02f);

        glVertex2f(-0.11f,0.03f);
        glVertex2f(-0.05f,-0.04f);

        glVertex2f(-0.11f,0.03f);
        glVertex2f(-0.16f,-0.02f);

        glVertex2f(-0.2f,0.08f);
        glVertex2f(-0.16f,-0.02f);

        glVertex2f(-0.2f,0.08f);
        glVertex2f(-0.28f,0.05f);

        glVertex2f(-0.32f,0.19f);
        glVertex2f(-0.28f,0.05f);

        glVertex2f(-0.32f,0.19f);
        glVertex2f(-0.4f,0.19f);

        glVertex2f(-0.38f,0.35f);
        glVertex2f(-0.4f,0.19f);

        glVertex2f(-0.38f,0.35f);
        glVertex2f(-0.45f,0.37f);

        glVertex2f(-0.37f,0.48f);
        glVertex2f(-0.45f,0.37f);


        glVertex2f(-0.37f,0.48f);
        glVertex2f(-0.43f,0.54f);

        glVertex2f(-0.33f,0.58f);
        glVertex2f(-0.43f,0.54f);

        glVertex2f(-0.33f,0.58f);
        glVertex2f(-0.33f,0.7f);

        glVertex2f(-0.25f,0.69f);
        glVertex2f(-0.33f,0.7f);

        glVertex2f(-0.25f,0.69f);
        glVertex2f(-0.25f,0.77f);

        glVertex2f(-0.18f,0.73f);
        glVertex2f(-0.25f,0.77f);

        glVertex2f(-0.18f,0.73f);
        glVertex2f(-0.16f,0.82f);

        glVertex2f(-0.1f,0.76f);
        glVertex2f(-0.16f,0.82f);

        glVertex2f(-0.1f,0.76f);
        glVertex2f(-0.07f,0.84f);

        glVertex2f(-0.03f,0.78f);
        glVertex2f(-0.07f,0.84f);

         glVertex2f(-0.03f,0.78f);
        glVertex2f(0.0f,0.85f);

glEnd();

glPopMatrix();

   /// lines around the smallest and middle circle ///


        glPushMatrix();
        glTranslatef(0.0,.4,0);
        glRotatef(a,0.0,0.0,-1.0);
        glTranslatef(-0.0,-.4,0);


          glBegin(GL_LINES);
         glColor3ub(201, 207, 207);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.0f,0.78f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.1f,0.77f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.38f,0.4f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.0f,0.01f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.38f,0.4f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.198f,0.72f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.3f,0.63f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.367f,0.523f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.367f,0.3f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.32f,0.19f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.25f,0.12f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.18f,0.06f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.1f,0.03f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.09f,0.02f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.18f,0.05f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.26f,0.12f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.321f,0.2f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.37f,0.29f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.356f,0.52f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.32f,0.62f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.22f,0.7f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.13f,0.76f);
        glEnd();

        glPopMatrix();


       a+=0.02f;


/// smallest circle  Connected With Stand///


x=0.0f; y=.4f;  radius =.051f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 //glColor3ub(253, 254, 254); /// Main
	  glColor3ub(255, 187, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



   /// Blue cabins ///


    glPushMatrix();
    glTranslatef(0.0,.4,0);
    glRotatef(a,0.0,0.0,-1.0);
    glTranslatef(-0.0,-.4,0);



x=0.0f; y=.87f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=0.2f; y=.82f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();
		x=0.35f; y=.7f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=0.45f; y=.53f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

		x=0.47f; y=.33f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=0.4f; y=.15f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=0.26f; y=.01f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=0.08f; y=-.06f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=-0.1f; y=-.06f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=-0.27f; y=.02f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=-0.41f; y=.16f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();


	x=-0.47f; y=.33f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=-0.45f; y=.54f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

		x=-0.36f; y=.71f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();


		x=-0.19f; y=.83f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();


	/// =============================== LONDON EYE END ======================================= ///





/// =========================== Road Boarders Connected with River ========================= ///




    /// lower  Road Border
    glLoadIdentity();
    glLineWidth(7.5);
    glBegin(GL_LINES);
    //glColor3ub(111, 122, 125);/// Ash Color
    glColor3ub(51, 47, 47);
    glVertex2f(-1.0f,-0.99f);
	glVertex2f(1.0f, -0.99f);
    glEnd();

    /// Upper  Road Border
    glLineWidth(8.5);  ///upper line
    glBegin(GL_LINES);
    //glColor3ub(111, 122, 125); /// Ash Color
    glColor3ub(99, 95, 95);
    glVertex2f(-1.0f,-0.71f);
	glVertex2f(1.0f, -0.71f);
    glEnd();




   /// =================================== road middle ======================= ( Black )



    /**glLineWidth(500);
    glBegin(GL_LINES);
    glColor3ub(4, 0, 13);
    glVertex2f(-1.0f,-0.85f);
	glVertex2f(1.0f, -0.85f);
    glEnd();**/

    /// Main Black Road
    glBegin(GL_QUADS);
    //glColor3ub(54, 49, 48); /// Black Color
    glColor3ub(110, 106, 106); /// Ash Color
    glVertex2f(-1.0f,-0.76f);
	glVertex2f(-1.0f, -0.97f);
	glVertex2f(1.0f,-0.97f);
	glVertex2f(1.0f, -0.76f);
    glEnd();

    /// Lower Road white line
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255, 251, 250);
    glVertex2f(-1.0f,-0.96f);
	glVertex2f(1.0f, -0.96f);
    glEnd();






/// ================================ Road Markers ===============================

   /// 1st Road marker (Right Most)
    glTranslatef(0.0f,-0.72f,0.0f);
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.7f,-0.140f);    /// x, y
	glVertex2f(0.99f, -0.140f);
    glEnd();

    /// 2nd Road marker
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.25f,-0.135f);
	glVertex2f(0.55f, -0.135f);
    glEnd();


    /// 3rd Road marker
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.1f,-0.135f);
	glVertex2f(-0.2f, -0.135f);
    glEnd();

    /// 4th Road marker
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.35f,-0.135f);
	glVertex2f(-0.65f, -0.135f);
    glEnd();


    /// 5th Road marker (Left Most)
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f,-0.140f);
	glVertex2f(-0.85f, -0.140f);
    glEnd();


/// ==================================== CAR MOVING AT DAY =============================  ///

    glPushMatrix();
    glTranslatef(positionCarAtDay,0.0f,0);
    //glScalef(0.96,0.96,0.0);

    glTranslatef(0.2,0.01,0);
    glBegin(GL_QUADS);
    glColor3ub(36,70,240); /// blue color
    glVertex2f(-0.24f,-0.18f);    /// x, y
    glVertex2f(0.255f, -0.18f);
    glVertex2f(0.255f, -0.1f);
    glVertex2f(-0.24f, -0.1f);
    glEnd();


    /// Yellow Roof ///
    glBegin(GL_QUADS);
    //glColor3ub(250, 209,5); /// yellow color
    glColor3ub(36,70,240); /// blue color
    glVertex2f(-0.16f,-0.1f);    /// x, y
    glVertex2f(0.18f, -0.1f);
    glVertex2f(0.13f, -0.0165f);
    glVertex2f(-0.1f, -0.0165f);
    glEnd();


    /// Blue Inside Glass ///
    glBegin(GL_QUADS);

    //glColor3ub(63, 40, 156); /// yellow color
    glColor3ub(10,20,10); /// black color
    glVertex2f(-0.13f,-0.1f);    /// x, y
    glVertex2f(0.15f, -0.1f);
    glVertex2f(0.10f, -0.03f);
    glVertex2f(-0.07f, -0.03f);
    glEnd();


    /// Right Wheel
	 x=0.14;  y=-0.18f; radius =0.060f;

	 twicePi = 2.0f * PI;
    glColor3ub(26, 22, 22);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();


	/// White Circle inside Right Wheel
	 x=0.14;  y=-0.18f; radius =0.029f;

	 twicePi = 2.0f * PI;
    glColor3ub(255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();





	/// Left Wheel
	 x=-0.14;  y=-0.18f; radius =0.060f;

	 twicePi = 2.0f * PI;
    glColor3ub(26, 22, 22);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();



	/// White Circle Inside Left Wheel
	 x=-0.14;  y=-0.18f; radius =0.029f;

	 twicePi = 2.0f * PI;
    glColor3ub(255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();

	glPopMatrix();
   glLoadIdentity();


	///======================================= Ship 1 ========================== ///

              glPushMatrix();
              glTranslatef(positionBigShipAtDay,0,0);

              glScalef(.5,.5,0);
              glTranslatef(-1.0,-0.2,0); /// Main
              //glTranslatef(-0.2,-0.2,0);

              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(.4,-.85);
              glVertex2f(-.4,-.85);
              glVertex2f(-.36,-.9);
              glVertex2f(.36,-.9);
              glEnd();



              glBegin(GL_QUADS);
              glColor3ub(243, 156, 18);
              glVertex2f(.52,-.7);
              glVertex2f(-.52,-.7);
               glColor3ub(211, 84, 0);
              glVertex2f(-.4,-.85);
              glVertex2f(.4,-.85);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(248, 196, 113 );

                  glVertex2f(.52,-.68);
                  glVertex2f(-.52,-.68);
                 glVertex2f(-.52,-.7);
                 glVertex2f(.52,-.7);


/// grey///
  glBegin(GL_QUADS);
              glColor3ub(117, 117, 117  );

                  glVertex2f(.42,-.6);
                  glVertex2f(-.42,-.6);
                 glVertex2f(-.42,-.68);
                 glVertex2f(.42,-.68);
/// Boat cabin ///
                 glBegin(GL_QUADS);
              glColor3ub(159, 168, 218  );
               glVertex2f(.32,-.46);
                  glVertex2f(-.35,-.46);
                 glVertex2f(-.35,-.6);
                 glVertex2f(.39,-.6);

/// window..

     glBegin(GL_QUADS);
              glColor3ub(207, 216, 220  );
               glVertex2f(.335,-.49);
                  glVertex2f(.25,-.49);
                 glVertex2f(.25,-.55);
                 glVertex2f(.365,-.55);
////
/// =================  Ship chimney =================

     glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(.05,-.35);
                  glVertex2f(.1,-.35);
                 glVertex2f(.1,-.46);
                 glVertex2f(.05,-.46);

                 glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(.05,-.33);
                 glVertex2f(.1,-.33);
                  glVertex2f(.1,-.35);
                     glVertex2f(.05,-.35);




                 glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(0,-.35);
                  glVertex2f(-.05,-.35);
                 glVertex2f(-.05,-.46);
                 glVertex2f(-.0,-.46);

                   glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(0,-.33);
                 glVertex2f(-.05,-.33);
                glVertex2f(-.05,-.35);
                    glVertex2f(0,-.35);



glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(-.1,-.35);
                  glVertex2f(-.15,-.35);
                 glVertex2f(-.15,-.46);
                 glVertex2f(-.1,-.46);

                        glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(-.1,-.33);
                 glVertex2f(-.15,-.33);
                glVertex2f(-.15,-.35);
                       glVertex2f(-.1,-.35);



/// =============== Ship Chimney End ====================== ///




   /// circle ///
   glBegin(GL_QUADS);
          glColor3ub(255, 202, 40 );
              glVertex2f(0.09,-.49);
                 glVertex2f(.14,-.49);


                glVertex2f(.14,-.555);
                    glVertex2f(0.09,-.555);


	glEnd();


  glBegin(GL_QUADS);
            glColor3ub(255, 202, 40 );
              glVertex2f(0.02,-.49);
                 glVertex2f(.07,-.49);
                glVertex2f(.07,-.555);
                    glVertex2f(0.02,-.555);


	glEnd();


   glBegin(GL_QUADS);
            glColor3ub(255, 202, 40);
              glVertex2f(0,-.49);
                 glVertex2f(-.05,-.49);
                glVertex2f(-.05,-.555);
                    glVertex2f(0,-.555);
                    glEnd();



                       glBegin(GL_QUADS);
             glColor3ub(255, 202, 40);
              glVertex2f(-0.07,-.49);
                 glVertex2f(-.12,-.49);
                glVertex2f(-.12,-.555);
                    glVertex2f(-0.07,-.555);


	glEnd();

                       glBegin(GL_QUADS);
        glColor3ub(255, 202, 40 );
              glVertex2f(-0.14,-.49);
                 glVertex2f(-.19,-.49);
                glVertex2f(-.19,-.555);
                    glVertex2f(-0.14,-.555);


	glEnd();


                       glBegin(GL_QUADS);
glColor3ub(255, 202, 40 );
              glVertex2f(-0.21,-.49);
                 glVertex2f(-.26,-.49);
                glVertex2f(-.26,-.555);
                    glVertex2f(-0.21,-.555);


	glEnd();

	 glPopMatrix();
glLoadIdentity();


    /// ====================================== SHIP 1 END ==================================== ///





    ///======================================= Ship 2 (Same as ship 1) ========================== ///

              glPushMatrix();
              glTranslatef(positionSmallShipAtDay,0,0);

              glScalef(.35,.35,0);
              glTranslatef(1.5,-0.42,0);
              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(.4,-.85);
              glVertex2f(-.4,-.85);
              glVertex2f(-.36,-.9);
              glVertex2f(.36,-.9);
              glEnd();



              glBegin(GL_QUADS);
              glColor3ub(243, 156, 18);
              glVertex2f(.52,-.7);
              glVertex2f(-.52,-.7);
               glColor3ub(211, 84, 0);
              glVertex2f(-.4,-.85);
              glVertex2f(.4,-.85);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(248, 196, 113 );

                  glVertex2f(.52,-.68);
                  glVertex2f(-.52,-.68);
                 glVertex2f(-.52,-.7);
                 glVertex2f(.52,-.7);


/// grey///
  glBegin(GL_QUADS);
              glColor3ub(117, 117, 117  );

                  glVertex2f(.42,-.6);
                  glVertex2f(-.42,-.6);
                 glVertex2f(-.42,-.68);
                 glVertex2f(.42,-.68);
/// Boat cabin ///
                 glBegin(GL_QUADS);
              glColor3ub(159, 168, 218  );
               glVertex2f(.32,-.46);
                  glVertex2f(-.35,-.46);
                 glVertex2f(-.35,-.6);
                 glVertex2f(.39,-.6);

/// window..

     glBegin(GL_QUADS);
              glColor3ub(207, 216, 220  );
               glVertex2f(.335,-.49);
                  glVertex2f(.25,-.49);
                 glVertex2f(.25,-.55);
                 glVertex2f(.365,-.55);
////
/// =================  Ship chimney =================

     glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(.05,-.35);
                  glVertex2f(.1,-.35);
                 glVertex2f(.1,-.46);
                 glVertex2f(.05,-.46);

                 glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(.05,-.33);
                 glVertex2f(.1,-.33);
                  glVertex2f(.1,-.35);
                     glVertex2f(.05,-.35);




                 glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(0,-.35);
                  glVertex2f(-.05,-.35);
                 glVertex2f(-.05,-.46);
                 glVertex2f(-.0,-.46);

                   glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(0,-.33);
                 glVertex2f(-.05,-.33);
                glVertex2f(-.05,-.35);
                    glVertex2f(0,-.35);



glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(-.1,-.35);
                  glVertex2f(-.15,-.35);
                 glVertex2f(-.15,-.46);
                 glVertex2f(-.1,-.46);

                        glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(-.1,-.33);
                 glVertex2f(-.15,-.33);
                glVertex2f(-.15,-.35);
                       glVertex2f(-.1,-.35);



/// =============== Ship Chimney End ====================== ///




   /// circle ///
   glBegin(GL_QUADS);
          glColor3ub(255, 202, 40 );
              glVertex2f(0.09,-.49);
                 glVertex2f(.14,-.49);


                glVertex2f(.14,-.555);
                    glVertex2f(0.09,-.555);


	glEnd();


  glBegin(GL_QUADS);
            glColor3ub(255, 202, 40 );
              glVertex2f(0.02,-.49);
                 glVertex2f(.07,-.49);
                glVertex2f(.07,-.555);
                    glVertex2f(0.02,-.555);


	glEnd();


   glBegin(GL_QUADS);
            glColor3ub(255, 202, 40);
              glVertex2f(0,-.49);
                 glVertex2f(-.05,-.49);
                glVertex2f(-.05,-.555);
                    glVertex2f(0,-.555);
                    glEnd();



                       glBegin(GL_QUADS);
             glColor3ub(255, 202, 40);
              glVertex2f(-0.07,-.49);
                 glVertex2f(-.12,-.49);
                glVertex2f(-.12,-.555);
                    glVertex2f(-0.07,-.555);


	glEnd();

                       glBegin(GL_QUADS);
        glColor3ub(255, 202, 40 );
              glVertex2f(-0.14,-.49);
                 glVertex2f(-.19,-.49);
                glVertex2f(-.19,-.555);
                    glVertex2f(-0.14,-.555);


	glEnd();


                       glBegin(GL_QUADS);
glColor3ub(255, 202, 40 );
              glVertex2f(-0.21,-.49);
                 glVertex2f(-.26,-.49);
                glVertex2f(-.26,-.555);
                    glVertex2f(-0.21,-.555);


	glEnd();

	glPopMatrix();
    glLoadIdentity();


    /// ====================================== SHIP 2 END ==================================== ///



          ///======================================= SHIP 3 (Different One ) ========================== ///

              glPushMatrix();
              glTranslatef(positionDifferentShipAtDay,0,0);

              glScalef(.4,.4,0);
              glTranslatef(0.2,-0.7,0);
              glBegin(GL_QUADS);
              glColor3ub(0,0,0); /// Black color
              glVertex2f(.4,-.85);
              glVertex2f(-.4,-.85);
              glVertex2f(-.36,-.9);
              glVertex2f(.36,-.9);
              glEnd();


              /// Lower Ship Quad
             glBegin(GL_QUADS);
              //glColor3ub(243, 156, 18);
              glColor3ub(255, 0, 0);
              glVertex2f(.52,-.7);
              glVertex2f(-.52,-.7);
               glColor3ub(211, 84, 0);
              glVertex2f(-.4,-.85);
              glVertex2f(.4,-.85);
              glEnd();


              glBegin(GL_QUADS);
             // glColor3ub(248, 196, 113 );
              glColor3ub(255, 221, 0);
              glVertex2f(.52,-.68);
              glVertex2f(-.52,-.68);
              glVertex2f(-.52,-.7);
              glVertex2f(.52,-.7);
              glEnd();


/// grey Quad///
  glBegin(GL_QUADS);
            //glColor3ub(117, 117, 117  );
              glColor3ub(255, 221, 0);

                  glVertex2f(.42,-.6);
                  glVertex2f(-.42,-.6);
                 glVertex2f(-.42,-.68);
                 glVertex2f(.42,-.68);

    glPopMatrix();

    glLoadIdentity();

    /// ====================================== SHIP 3 END ==================================================== ///




        /// ========================================== UPPER RIVER BORDER LINE ====================================== ///


               glLineWidth(8.5);

              //glTranslatef(0.6,0.5,0.0);
              glBegin(GL_LINES);
              //glColor3ub(105, 100, 98); /// Main Blue Color
              glColor3ub(110, 103, 109); ///
              glVertex2f(2.5,0.22);
              glVertex2f(-2.5,0.22);
              glEnd();

              glLoadIdentity();

              glutTimerFunc(4500,Evening,0);



              glFlush();

}

void Day(int val)
{
    glutDisplayFunc(Day_View);
}





void Morning_View()

{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    ///============================================= Field ====================================== ///

              //glColor3ub(36, 134, 13); Main
              glColor3ub(7, 222, 64);
              glBegin(GL_QUADS);
              glVertex2f(1,-0.25);
              glVertex2f(-1,-0.25);
              glVertex2f(-1,0);
              glVertex2f(1,0);
              glEnd();



    /// =============================== River =========================================== ///

              glTranslatef(0.0f,0.05f,0.0f);
              glColor3ub(36, 135, 227);
              glBegin(GL_QUADS);
              glVertex2f(1,-.25);
              glVertex2f(-1,-.25);
              glColor3ub(36, 135, 227);
              glVertex2f(-1,-0.75);
              glVertex2f(1,-0.75);
              glEnd();
              glLoadIdentity();

     /// ====================================== Sky ======================================= ///

              glColor3ub(246, 221, 204 ); ///Main
              //glColor3ub(247, 239, 129);
              glBegin(GL_QUADS);
              glVertex2f(1,1);
              glVertex2f(-1,1);
              glColor3ub(240, 178, 122 );
              glVertex2f(-1,0);
              glVertex2f(1,0);
              glEnd();

     /// ====================================== SUN ==================================== ///



	glPushMatrix();
	glTranslatef(0,positionSunAtMorning,0);


	x=.82f; y=.67f; radius =.11f;  /// x= 0.82, y = 0.7, radius = .11f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 122, 0);

		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();


    /// =============================== Railing +++++++++++++++++++++++++++++++++++///


    /// LEFT MOST

    glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.96f,-0.07f);
          glVertex2f(-0.96f,-0.2f);
          glEnd();

          x=-.96f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



    ////////1st

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.88f,-0.07f);
          glVertex2f(-0.88f,-0.2f);
          glEnd();

          x=-.88f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/////2nd

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.8f,-0.07f);
          glVertex2f(-0.8f,-0.2f);
          glEnd();

          x=-.8f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/////////3rd


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.7f,-0.07f);
          glVertex2f(-0.7f,-0.2f);
          glEnd();

          x=-.7f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//////////4th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.6f,-0.07f);
          glVertex2f(-0.6f,-0.2f);
          glEnd();

          x=-.6f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//////////5th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.5f,-0.07f);
          glVertex2f(-0.5f,-0.2f);
          glEnd();

          x=-.5f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




	//////////6th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.4f,-0.07f);
          glVertex2f(-0.4f,-0.2f);
          glEnd();

          x=-.4f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	///////////7th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.3f,-0.07f);
          glVertex2f(-0.3f,-0.2f);
          glEnd();

          x=-.3f; y=-0.07f; radius =.01f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	///////////8th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.2f,-0.07f);
          glVertex2f(-0.2f,-0.2f);
          glEnd();

          x=-.2f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	///////////9th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.1f,-0.07f);
          glVertex2f(-0.1f,-0.2f);
          glEnd();

          x=-.1f; y=-0.04f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////////////10th


          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(-0.0f,-0.07f);
          glVertex2f(-0.0f,-0.2f);
          glEnd();

          x=-.0f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();



	//////////11th

          glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.1f,-0.07f);
          glVertex2f(0.1f,-0.2f);
          glEnd();

          x=.1f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//////////12th
             glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.2f,-0.07f);
          glVertex2f(0.2f,-0.2f);
          glEnd();

          x=.2f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////////////13th

	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.3f,-0.07f);
          glVertex2f(0.3f,-0.2f);
          glEnd();

          x=.3f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////////////14th
	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.4f,-0.07f);
          glVertex2f(0.4f,-0.2f);
          glEnd();

          x=.4f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/////////////15th
         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.5f,-0.07f);
          glVertex2f(0.5f,-0.2f);
          glEnd();

          x=.5f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//////////////////////16th

	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.6f,-0.07f);
          glVertex2f(0.6f,-0.2f);
          glEnd();

          x=.6f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//////////////////////17th

         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.7f,-0.07f);
          glVertex2f(0.7f,-0.2f);
          glEnd();

          x=.7f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



    ///////////////////////////18th

             glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.8f,-0.07f);
          glVertex2f(0.8f,-0.2f);
          glEnd();

          x=.8f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




	////////////////////////////////19th

	         glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.88f,-0.07f);
          glVertex2f(0.88f,-0.2f);
          glEnd();

          x=.88f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/// LAST Right Most

	   glLineWidth(3);
          glBegin(GL_LINES);
          glColor3ub(20,20,20);
          glVertex2f(0.96f,-0.07f);
          glVertex2f(0.96f,-0.2f);
          glEnd();

          x=.96f; y=-0.07f; radius =.017f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(194, 199, 191);
	//glColor3ub(255,235,18);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/// =========================== Railing End ========================== ///






     /// =============================== building1 (Left Most) ========================================== ///


              /// =============== building1 ============================= ///

              glTranslatef(-0.4f,0.0f,0.0f);
              glScalef(0.6,2,0);
              glBegin(GL_QUADS);
              glColor3ub(169,169,169);
              //glColor3ub(116, 122, 121);
              glVertex2f(-.6,.35);
              glVertex2f(-1,.35);
              glVertex2f(-1,0);
              glVertex2f(-.6,0);
              glEnd();


              glBegin(GL_QUADS);
              glColor3ub(128,128,128);
              glVertex2f(-.5,.32);
              glVertex2f(-.6,.35);
              glVertex2f(-.6,0);
              glVertex2f(-.5,0);
              glEnd();

/// windows
              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.33);
              glVertex2f(-.64,.33);
              glVertex2f(-.64,.3);
              glVertex2f(-.62,.3);
              glEnd();


     glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.33);
              glVertex2f(-.68,.33);
              glVertex2f(-.68,.3);
              glVertex2f(-.66,.3);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.33);
              glVertex2f(-.72,.33);
              glVertex2f(-.72,.3);
              glVertex2f(-.7,.3);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.33);
              glVertex2f(-.76,.33);
              glVertex2f(-.76,.3);
              glVertex2f(-.74,.3);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.33);
              glVertex2f(-.8,.33);
              glVertex2f(-.8,.3);
              glVertex2f(-.78,.3);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.33);
              glVertex2f(-.84,.33);
              glVertex2f(-.84,.3);
              glVertex2f(-.82,.3);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.33);
              glVertex2f(-.88,.33);
              glVertex2f(-.88,.3);
              glVertex2f(-.86,.3);
              glEnd();
                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.33);
              glVertex2f(-.92,.33);
              glVertex2f(-.92,.3);
              glVertex2f(-.9,.3);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.33);
              glVertex2f(-.96,.33);
              glVertex2f(-.96,.3);
              glVertex2f(-.94,.3);
              glEnd();
                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.33);
              glVertex2f(-.997,.33);
              glVertex2f(-.997,.3);
              glVertex2f(-.98,.3);
              glEnd();
/// 2nd //

   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.28);
              glVertex2f(-.64,.28);
              glVertex2f(-.64,.25);
              glVertex2f(-.62,.25);
              glEnd();

  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.28);
              glVertex2f(-.68,.28);
              glVertex2f(-.68,.25);
              glVertex2f(-.66,.25);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.28);
              glVertex2f(-.72,.28);
              glVertex2f(-.72,.25);
              glVertex2f(-.7,.25);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.28);
              glVertex2f(-.76,.28);
              glVertex2f(-.76,.25);
              glVertex2f(-.74,.25);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.28);
              glVertex2f(-.8,.28);
              glVertex2f(-.8,.25);
              glVertex2f(-.78,.25);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.28);
              glVertex2f(-.84,.28);
              glVertex2f(-.84,.25);
              glVertex2f(-.82,.25);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.28);
              glVertex2f(-.88,.28);
              glVertex2f(-.88,.25);
              glVertex2f(-.86,.25);
              glEnd();
                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.28);
              glVertex2f(-.92,.28);
              glVertex2f(-.92,.25);
              glVertex2f(-.9,.25);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.28);
              glVertex2f(-.96,.28);
              glVertex2f(-.96,.25);
              glVertex2f(-.94,.25);
              glEnd();
                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.28);
              glVertex2f(-.997,.28);
              glVertex2f(-.997,.25);
              glVertex2f(-.98,.25);
              glEnd();

/// 3rd

 glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.23);
              glVertex2f(-.64,.23);
              glVertex2f(-.64,.2);
              glVertex2f(-.62,.2);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.23);
              glVertex2f(-.68,.23);
              glVertex2f(-.68,.2);
              glVertex2f(-.66,.2);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.23);
              glVertex2f(-.72,.23);
              glVertex2f(-.72,.2);
              glVertex2f(-.7,.2);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.23);
              glVertex2f(-.76,.23);
              glVertex2f(-.76,.2);
              glVertex2f(-.74,.2);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.23);
              glVertex2f(-.8,.23);
              glVertex2f(-.8,.2);
              glVertex2f(-.78,.2);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.23);
              glVertex2f(-.84,.23);
              glVertex2f(-.84,.2);
              glVertex2f(-.82,.2);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.23);
              glVertex2f(-.88,.23);
              glVertex2f(-.88,.2);
              glVertex2f(-.86,.2);
              glEnd();
                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.23);
              glVertex2f(-.92,.23);
              glVertex2f(-.92,.2);
              glVertex2f(-.9,.2);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.23);
              glVertex2f(-.96,.23);
              glVertex2f(-.96,.2);
              glVertex2f(-.94,.2);
              glEnd();
                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.23);
              glVertex2f(-.997,.23);
              glVertex2f(-.997,.2);
              glVertex2f(-.98,.2);
              glEnd();

///4
              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.18);
              glVertex2f(-.64,.18);
              glVertex2f(-.64,.15);
              glVertex2f(-.62,.15);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.18);
              glVertex2f(-.68,.18);
              glVertex2f(-.68,.15);
              glVertex2f(-.66,.15);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.18);
              glVertex2f(-.72,.18);
              glVertex2f(-.72,.15);
              glVertex2f(-.7,.15);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.18);
              glVertex2f(-.76,.18);
              glVertex2f(-.76,.15);
              glVertex2f(-.74,.15);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.18);
              glVertex2f(-.8,.18);
              glVertex2f(-.8,.15);
              glVertex2f(-.78,.15);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.18);
              glVertex2f(-.84,.18);
              glVertex2f(-.84,.15);
              glVertex2f(-.82,.15);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.18);
              glVertex2f(-.88,.18);
              glVertex2f(-.88,.15);
              glVertex2f(-.86,.15);
              glEnd();
                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.18);
              glVertex2f(-.92,.18);
              glVertex2f(-.92,.15);
              glVertex2f(-.9,.15);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.18);
              glVertex2f(-.96,.18);
              glVertex2f(-.96,.15);
              glVertex2f(-.94,.15);
              glEnd();
                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.18);
              glVertex2f(-.997,.18);
              glVertex2f(-.997,.15);
              glVertex2f(-.98,.15);
              glEnd();
/// 5
       glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.13);
              glVertex2f(-.64,.13);
              glVertex2f(-.64,.1);
              glVertex2f(-.62,.1);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.13);
              glVertex2f(-.68,.13);
              glVertex2f(-.68,.1);
              glVertex2f(-.66,.1);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.13);
              glVertex2f(-.72,.13);
              glVertex2f(-.72,.1);
              glVertex2f(-.7,.1);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.13);
              glVertex2f(-.76,.13);
              glVertex2f(-.76,.1);
              glVertex2f(-.74,.1);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.13);
              glVertex2f(-.8,.13);
              glVertex2f(-.8,.1);
              glVertex2f(-.78,.1);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.13);
              glVertex2f(-.84,.13);
              glVertex2f(-.84,.1);
              glVertex2f(-.82,.1);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.13);
              glVertex2f(-.88,.13);
              glVertex2f(-.88,.1);
              glVertex2f(-.86,.1);
              glEnd();
                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.13);
              glVertex2f(-.92,.13);
              glVertex2f(-.92,.1);
              glVertex2f(-.9,.1);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.13);
              glVertex2f(-.96,.13);
              glVertex2f(-.96,.1);
              glVertex2f(-.94,.1);
              glEnd();
                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.13);
              glVertex2f(-.997,.13);
              glVertex2f(-.997,.1);
              glVertex2f(-.98,.1);
              glEnd();
///6
     glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.62,.08);
              glVertex2f(-.64,.08);
              glVertex2f(-.64,.05);
              glVertex2f(-.62,.05);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.66,.08);
              glVertex2f(-.68,.08);
              glVertex2f(-.68,.05);
              glVertex2f(-.66,.05);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.7,.08);
              glVertex2f(-.72,.08);
              glVertex2f(-.72,.05);
              glVertex2f(-.7,.05);
              glEnd();

                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.74,.08);
              glVertex2f(-.76,.08);
              glVertex2f(-.76,.05);
              glVertex2f(-.74,.05);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.78,.08);
              glVertex2f(-.8,.08);
              glVertex2f(-.8,.05);
              glVertex2f(-.78,.05);
              glEnd();
                glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.82,.08);
              glVertex2f(-.84,.08);
              glVertex2f(-.84,.05);
              glVertex2f(-.82,.05);
              glEnd();

                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.86,.08);
              glVertex2f(-.88,.08);
              glVertex2f(-.88,.05);
              glVertex2f(-.86,.05);
              glEnd();
                   glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.9,.08);
              glVertex2f(-.92,.08);
              glVertex2f(-.92,.05);
              glVertex2f(-.9,.05);
              glEnd();

                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.94,.08);
              glVertex2f(-.96,.08);
              glVertex2f(-.96,.05);
              glVertex2f(-.94,.05);
              glEnd();
                    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.98,.08);
              glVertex2f(-.997,.08);
              glVertex2f(-.997,.05);
              glVertex2f(-.98,.05);
              glEnd();
              //glLoadIdentity();


/// =============================== building3 (Right Most) ========================================= ///

         glScalef(2.4,.6,0);
         glTranslatef(0.13f,0.0f,0.0f);
         glBegin(GL_QUADS);
             glColor3ub(166, 172, 175 );
              glVertex2f(-.155,.32);
              glVertex2f(-.3,.31);
              glVertex2f(-.3,0);
              glVertex2f(-.155,0);
              glEnd();

/// windows1 ///

   glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.3);
              glVertex2f(-.3,.3);
              glVertex2f(-.3,.27);
              glVertex2f(-.29,.27);
              glEnd();

   glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.3);
              glVertex2f(-.28,.3);
              glVertex2f(-.28,.27);
              glVertex2f(-.26,.27);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.3);
              glVertex2f(-.25,.3);
              glVertex2f(-.25,.27);
              glVertex2f(-.23,.27);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.3);
              glVertex2f(-.22,.3);
              glVertex2f(-.22,.27);
              glVertex2f(-.2,.27);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.3);
              glVertex2f(-.19,.3);
              glVertex2f(-.19,.27);
              glVertex2f(-.17,.27);
              glEnd();

/// window2 ///
   glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.25);
              glVertex2f(-.3,.25);
              glVertex2f(-.3,.22);
              glVertex2f(-.29,.22);
              glEnd();


          /////
            glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.25);
              glVertex2f(-.28,.25);
              glVertex2f(-.28,.22);
              glVertex2f(-.26,.22);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.25);
              glVertex2f(-.25,.25);
              glVertex2f(-.25,.22);
              glVertex2f(-.23,.22);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.25);
              glVertex2f(-.22,.25);
              glVertex2f(-.22,.22);
              glVertex2f(-.2,.22);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.25);
              glVertex2f(-.19,.25);
              glVertex2f(-.19,.22);
              glVertex2f(-.17,.22);
              glEnd();

/// window 3///

 glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.2);
              glVertex2f(-.3,.2);
              glVertex2f(-.3,.17);
              glVertex2f(-.29,.17);
              glEnd();
           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.2);
              glVertex2f(-.28,.2);
              glVertex2f(-.28,.17);
              glVertex2f(-.26,.17);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.2);
              glVertex2f(-.25,.2);
              glVertex2f(-.25,.17);
              glVertex2f(-.23,.17);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.2);
              glVertex2f(-.22,.2);
              glVertex2f(-.22,.17);
              glVertex2f(-.2,.17);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.2);
              glVertex2f(-.19,.2);
              glVertex2f(-.19,.17);
              glVertex2f(-.17,.17);
              glEnd();


///window4///




glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.15);
              glVertex2f(-.3,.15);
              glVertex2f(-.3,.12);
              glVertex2f(-.29,.12);
              glEnd();
           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.15);
              glVertex2f(-.28,.15);
              glVertex2f(-.28,.12);
              glVertex2f(-.26,.12);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.15);
              glVertex2f(-.25,.15);
              glVertex2f(-.25,.12);
              glVertex2f(-.23,.12);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.15);
              glVertex2f(-.22,.15);
              glVertex2f(-.22,.12);
              glVertex2f(-.2,.12);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.15);
              glVertex2f(-.19,.15);
              glVertex2f(-.19,.12);
              glVertex2f(-.17,.12);
              glEnd();
/// windows 5 ///




glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.1);
              glVertex2f(-.3,.1);
              glVertex2f(-.3,.07);
              glVertex2f(-.29,.07);
              glEnd();
           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.1);
              glVertex2f(-.28,.1);
              glVertex2f(-.28,.07);
              glVertex2f(-.26,.07);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.1);
              glVertex2f(-.25,.1);
              glVertex2f(-.25,.07);
              glVertex2f(-.23,.07);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.1);
              glVertex2f(-.22,.1);
              glVertex2f(-.22,.07);
              glVertex2f(-.2,.07);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.1);
              glVertex2f(-.19,.1);
              glVertex2f(-.19,.07);
              glVertex2f(-.17,.07);
              glEnd();





glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.29,.05);
              glVertex2f(-.3,.05);
              glVertex2f(-.3,.02);
              glVertex2f(-.29,.02);
              glEnd();
           glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.26,.05);
              glVertex2f(-.28,.05);
              glVertex2f(-.28,.02);
              glVertex2f(-.26,.02);
              glEnd();



  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.23,.05);
              glVertex2f(-.25,.05);
              glVertex2f(-.25,.02);
              glVertex2f(-.23,.02);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.2,.05);
              glVertex2f(-.22,.05);
              glVertex2f(-.22,.02);
              glVertex2f(-.2,.02);
              glEnd();

glBegin(GL_QUADS);
             glColor3ub( 52, 73, 94);
              glVertex2f(-.17,.05);
              glVertex2f(-.19,.05);
              glVertex2f(-.19,.02);
              glVertex2f(-.17,.02);
              glEnd();

              /// ============================== building3 (house) ========================== ///

          glScalef(.7,.75,0);
          glTranslatef(0.3,0.0,0.0);
    glBegin(GL_QUADS);
             glColor3ub(192,192,192);
              glVertex2f(1,.27);
              glVertex2f(.3,.27);
              glVertex2f(.3,0);
              glVertex2f(1,0);
              glEnd();

               glBegin(GL_QUADS);
             glColor3ub(153, 163, 164);
              glVertex2f(.99,.255);
              glVertex2f(.32,.255);
              glVertex2f(.32,.145);
              glVertex2f(.99,.145);
              glEnd();

/// shade ///
                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(1,.45);
              glVertex2f(.32,.45);
              glVertex2f(.25,.26);
              glVertex2f(1,.26);
              glEnd();
   /// door///
     glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.4,.13);
              glVertex2f(.34,.13);
              glVertex2f(.34,0);
              glVertex2f(.4,0);
              glEnd();


/// window///

 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.98,.245);
              glVertex2f(.95,.245);
              glVertex2f(.95,.19);
              glVertex2f(.98,.19);
              glEnd();

               glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.92,.245);
              glVertex2f(.89,.245);
              glVertex2f(.89,.19);
              glVertex2f(.92,.19);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.86,.245);
              glVertex2f(.83,.245);
              glVertex2f(.83,.19);
              glVertex2f(.86,.19);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.8,.245);
              glVertex2f(.77,.245);
              glVertex2f(.77,.19);
              glVertex2f(.8,.19);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.74,.245);
              glVertex2f(.71,.245);
              glVertex2f(.71,.19);
              glVertex2f(.74,.19);
              glEnd();

                 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.68,.245);
              glVertex2f(.65,.245);
              glVertex2f(.65,.19);
              glVertex2f(.68,.19);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.62,.245);
              glVertex2f(.59,.245);
              glVertex2f(.59,.19);
              glVertex2f(.62,.19);
              glEnd();
                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.56,.245);
              glVertex2f(.53,.245);
              glVertex2f(.53,.19);
              glVertex2f(.56,.19);
              glEnd();
                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.5,.245);
              glVertex2f(.47,.245);
              glVertex2f(.47,.19);
              glVertex2f(.5,.19);
              glEnd();

/// window2///

 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.98,.16);
              glVertex2f(.95,.16);
              glVertex2f(.95,.08);
              glVertex2f(.98,.08);
              glEnd();

               glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.92,.16);
              glVertex2f(.89,.16);
              glVertex2f(.89,.08);
              glVertex2f(.92,.08);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.86,.16);
              glVertex2f(.83,.16);
              glVertex2f(.83,.08);
              glVertex2f(.86,.08);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.8,.16);
              glVertex2f(.77,.16);
              glVertex2f(.77,.08);
              glVertex2f(.8,.08);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.74,.16);
              glVertex2f(.71,.16);
              glVertex2f(.71,.08);
              glVertex2f(.74,.08);
              glEnd();

                 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.68,.16);
              glVertex2f(.65,.16);
              glVertex2f(.65,.08);
              glVertex2f(.68,.08);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.62,.16);
              glVertex2f(.59,.16);
              glVertex2f(.59,.08);
              glVertex2f(.62,.08);
              glEnd();
                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.56,.16);
              glVertex2f(.53,.16);
              glVertex2f(.53,.08);
              glVertex2f(.56,.08);
              glEnd();
                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.5,.16);
              glVertex2f(.47,.16);
              glVertex2f(.47,.08);
              glVertex2f(.5,.08);
              glEnd();







              /// win3 ///

 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.98,.06);
              glVertex2f(.95,.06);
              glVertex2f(.95,0);
              glVertex2f(.98,0);
              glEnd();

               glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.92,.06);
              glVertex2f(.89,.06);
              glVertex2f(.89,.0);
              glVertex2f(.92,.0);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.86,.06);
              glVertex2f(.83,.06);
              glVertex2f(.83,.0);
              glVertex2f(.86,.0);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.8,.06);
              glVertex2f(.77,.06);
              glVertex2f(.77,.0);
              glVertex2f(.8,.0);
              glEnd();

                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.74,.06);
              glVertex2f(.71,.06);
              glVertex2f(.71,.0);
              glVertex2f(.74,.0);
              glEnd();

                 glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.68,.06);
              glVertex2f(.65,.06);
              glVertex2f(.65,.0);
              glVertex2f(.68,.0);
              glEnd();

  glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.62,.06);
              glVertex2f(.59,.06);
              glVertex2f(.59,.0);
              glVertex2f(.62,.0);
              glEnd();
                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.56,.06);
              glVertex2f(.53,.06);
              glVertex2f(.53,.0);
              glVertex2f(.56,.0);
              glEnd();


                glBegin(GL_QUADS);
             glColor3ub(51, 102, 102);
              glVertex2f(.5,.06);
              glVertex2f(.47,.06);
              glVertex2f(.47,.0);
              glVertex2f(.5,.0);
              glEnd();
              glLoadIdentity();


        /// ================================================= End =================================================================== ///



//




              /// ================================== LONDON EYE   ========================================= ///



              /// stands ///
              glTranslatef(-0.18f,0.05f,0.0f);
              glBegin(GL_QUADS);
              glColor3ub(253, 254, 254);
              glVertex2f(0,.4);
              glVertex2f(-0.04,.4);
              glVertex2f(-.14,-.2);
               glVertex2f(-.1,-.2);

              glVertex2f(0.04,.4);
              glVertex2f(0,.4);
              glVertex2f(.1,-.2);
               glVertex2f(.14,-.2);
               glEnd();




/// middle circle ///

 x=.0f;  y=.4f;  radius =.38f;

	 lineAmount = 100; //# of triangles used to draw circle
	twicePi = 2.0f * PI;
   glTranslatef(0.0,.4,0);
    glRotatef(a,0.0,0.0,-1.0);//a=how many degree you want to rotate around an axis
   glTranslatef(-0.0,-.4,0);
	glBegin(GL_LINE_LOOP);
	 glColor3ub(253, 254, 254);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	/// biggest circle ///
 x=.0f;  y=.4f;  radius =.45f;

	 lineAmount = 100; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
	 glColor3ub(253, 254, 254);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	/// zigzag ///
	 glBegin(GL_LINES);
         glColor3ub(253, 254, 254);
        glVertex2f(0.06f,0.78f);
        glVertex2f(0.0f,0.85f);

         glVertex2f(0.12f,0.84f);
        glVertex2f(0.06f,0.78f);

        glVertex2f(0.12f,0.84f);
        glVertex2f(0.16f,0.74f);

        glVertex2f(0.23f,0.78f);
        glVertex2f(0.16f,0.74f);

        glVertex2f(0.23f,0.78f);
        glVertex2f(0.25f,0.68f);

        glVertex2f(0.34f,0.7f);
        glVertex2f(0.25f,0.68f);

        glVertex2f(0.34f,0.7f);
        glVertex2f(0.34f,0.581f);

        glVertex2f(0.42f,0.556f);
        glVertex2f(0.34f,0.581f);

        glVertex2f(0.42f,0.556f);
        glVertex2f(0.38f,0.45f);

        glVertex2f(0.45f,0.4f);
        glVertex2f(0.38f,0.45f);

         glVertex2f(0.45f,0.4f);
        glVertex2f(0.37f,0.3f);

        glVertex2f(0.42f,0.23f);
        glVertex2f(0.37f,0.3f);

         glVertex2f(0.42f,0.23f);
        glVertex2f(0.3f,0.17f);

        glVertex2f(0.3f,0.06f);
        glVertex2f(0.3f,0.17f);

        glVertex2f(0.3f,0.06f);
        glVertex2f(0.21f,0.08f);

        glVertex2f(0.19f,0.0f);
        glVertex2f(0.21f,0.08f);

        glVertex2f(0.19f,0.0f);
        glVertex2f(0.1f,0.03f);

        glVertex2f(0.06f,-0.04f);
        glVertex2f(0.1f,0.03f);

        glVertex2f(0.06f,-0.04f);
        glVertex2f(0.0f,0.02f);

        glVertex2f(-0.05f,-0.04f);
        glVertex2f(0.0f,0.02f);

        glVertex2f(-0.11f,0.03f);
        glVertex2f(-0.05f,-0.04f);

        glVertex2f(-0.11f,0.03f);
        glVertex2f(-0.16f,-0.02f);

        glVertex2f(-0.2f,0.08f);
        glVertex2f(-0.16f,-0.02f);

        glVertex2f(-0.2f,0.08f);
        glVertex2f(-0.28f,0.05f);

        glVertex2f(-0.32f,0.19f);
        glVertex2f(-0.28f,0.05f);

        glVertex2f(-0.32f,0.19f);
        glVertex2f(-0.4f,0.19f);

        glVertex2f(-0.38f,0.35f);
        glVertex2f(-0.4f,0.19f);

        glVertex2f(-0.38f,0.35f);
        glVertex2f(-0.45f,0.37f);

        glVertex2f(-0.37f,0.48f);
        glVertex2f(-0.45f,0.37f);


        glVertex2f(-0.37f,0.48f);
        glVertex2f(-0.43f,0.54f);

        glVertex2f(-0.33f,0.58f);
        glVertex2f(-0.43f,0.54f);

        glVertex2f(-0.33f,0.58f);
        glVertex2f(-0.33f,0.7f);

        glVertex2f(-0.25f,0.69f);
        glVertex2f(-0.33f,0.7f);

        glVertex2f(-0.25f,0.69f);
        glVertex2f(-0.25f,0.77f);

        glVertex2f(-0.18f,0.73f);
        glVertex2f(-0.25f,0.77f);

        glVertex2f(-0.18f,0.73f);
        glVertex2f(-0.16f,0.82f);

        glVertex2f(-0.1f,0.76f);
        glVertex2f(-0.16f,0.82f);

        glVertex2f(-0.1f,0.76f);
        glVertex2f(-0.07f,0.84f);

        glVertex2f(-0.03f,0.78f);
        glVertex2f(-0.07f,0.84f);

         glVertex2f(-0.03f,0.78f);
        glVertex2f(0.0f,0.85f);

glEnd();

/// lines around the smallest and middle circle ///
glBegin(GL_LINES);


         glColor3ub(201, 207, 207);
        glVertex2f(0.0f,0.4f);
        glVertex2f(0.0f,0.78f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.1f,0.77f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.38f,0.4f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.0f,0.01f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.38f,0.4f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.198f,0.72f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.3f,0.63f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.367f,0.523f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.367f,0.3f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.32f,0.19f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.25f,0.12f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.18f,0.06f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(0.1f,0.03f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.09f,0.02f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.18f,0.05f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.26f,0.12f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.321f,0.2f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.37f,0.29f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.356f,0.52f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.32f,0.62f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.22f,0.7f);

        glVertex2f(0.0f,0.4f);
        glVertex2f(-0.13f,0.76f);
        glEnd();

/// smallest circle ///


x=0.0f; y=.4f;  radius =.051f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(253, 254, 254);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

/// Blue cabins ///

x=0.0f; y=.87f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=0.2f; y=.82f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();
		x=0.35f; y=.7f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=0.45f; y=.53f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

		x=0.47f; y=.33f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=0.4f; y=.15f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=0.26f; y=.01f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=0.08f; y=-.06f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=-0.1f; y=-.06f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=-0.27f; y=.02f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=-0.41f; y=.16f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();


	x=-0.47f; y=.33f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

	x=-0.45f; y=.54f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();

		x=-0.36f; y=.71f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();


		x=-0.19f; y=.83f;  radius =.045f;
	 triangleAmount = 20; //# of triangles used to draw circle
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

glColor3ub(2, 117, 189);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f(

		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);

		}
	glEnd();
	glLoadIdentity();

	/// =============================== LONDON EYE END ============================== ///



	///   ============================================== BIRD ============================================= ///



	            glPushMatrix();
	            glTranslatef(positionBirdAtMorning,0,0);
                //glTranslatef(-0.88,0.1,0.0); ///  At the Left Side
	            glTranslatef(0.1,0.0,0.0); /// It was the main position of Bird

	            glBegin(GL_LINES);
                glColor3f(0,0,0);
                glVertex2f(0.0f,0.7f);
                glVertex2f(0.05f,0.68f);
                glEnd();

                glBegin(GL_LINES);
                glColor3f(0,0,0);
                glVertex2f(0.05f,0.68f);
                glVertex2f(0.0f,0.66);
                glEnd();

                 glTranslated(0.08,0.0,0);
                glBegin(GL_LINES);
                glColor3f(0,0,0);
                glVertex2f(0.0f,0.7f);
                glVertex2f(0.05f,0.68f);



                glBegin(GL_LINES);
                glColor3f(0,0,0);
                glVertex2f(0.05f,0.68f);
                glVertex2f(0.0f,0.66);
                glEnd();


                glBegin(GL_LINES);
                glColor3f(0,0,0);
                glVertex2f(0.0f,0.7f);
                glVertex2f(0.05f,0.68f);
                glBegin(GL_LINES);

                glColor3f(0,0,0);
                glVertex2f(0.05f,0.68f);
                glVertex2f(0.0f,0.66);
                glEnd();


                glBegin(GL_LINES);
                glColor3f(0,0,0);
                glVertex2f(0.0f,0.8f);
                glVertex2f(0.05f,0.78f);

                glBegin(GL_LINES);
                glColor3f(0,0,0);
                glVertex2f(0.05f,0.78f);
                glVertex2f(0.0f,0.76);
                glEnd();
                glPopMatrix();
                glLoadIdentity();


                 /// =========================== Road Boarders Connected with River ========================= ///


    /// lower  Road Border
    glLoadIdentity();
    glLineWidth(7.5);
    glBegin(GL_LINES);
    //glColor3ub(111, 122, 125);/// Ash Color
    glColor3ub(51, 47, 47);
    glVertex2f(-1.0f,-0.99f);
	glVertex2f(1.0f, -0.99f);
    glEnd();

    /// Upper  Road Border
    glLineWidth(8.5);  ///upper line
    glBegin(GL_LINES);
    //glColor3ub(111, 122, 125); /// Ash Color
    glColor3ub(99, 95, 95);
    glVertex2f(-1.0f,-0.71f);
	glVertex2f(1.0f, -0.71f);
    glEnd();




   /// =================================== road middle ======================= ( Black )



    /**glLineWidth(500);
    glBegin(GL_LINES);
    glColor3ub(4, 0, 13);
    glVertex2f(-1.0f,-0.85f);
	glVertex2f(1.0f, -0.85f);
    glEnd();**/

    /// Main Black Road
    glBegin(GL_QUADS);
    //glColor3ub(54, 49, 48); /// Black Color
    glColor3ub(110, 106, 106); /// Ash Color
    glVertex2f(-1.0f,-0.76f);
	glVertex2f(-1.0f, -0.97f);
	glVertex2f(1.0f,-0.97f);
	glVertex2f(1.0f, -0.76f);
    glEnd();

    /// Lower Road white line
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255, 251, 250);
    glVertex2f(-1.0f,-0.96f);
	glVertex2f(1.0f, -0.96f);
    glEnd();






/// ================================ Road Markers ===============================

   /// 1st Road marker (Right Most)
    glTranslatef(0.0f,-0.72f,0.0f);
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.7f,-0.140f);    /// x, y
	glVertex2f(0.99f, -0.140f);
    glEnd();

    /// 2nd Road marker
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.25f,-0.135f);
	glVertex2f(0.55f, -0.135f);
    glEnd();


    /// 3rd Road marker
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.1f,-0.135f);
	glVertex2f(-0.2f, -0.135f);
    glEnd();

    /// 4th Road marker
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.35f,-0.135f);
	glVertex2f(-0.65f, -0.135f);
    glEnd();


    /// 5th Road marker (Left Most)
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f,-0.140f);
	glVertex2f(-0.85f, -0.140f);
    glEnd();


/// ==================================== Car Moving At Morning  =============================  ///

    glPushMatrix();
    glTranslatef(positionCarAtMorning,0,0);

    glScalef(0.96,0.96,0.0);
    glTranslatef(-0.2,0.01,0);
    glBegin(GL_QUADS);
    glColor3ub(250, 209, 5); /// yellow color
    glVertex2f(-0.24f,-0.18f);    /// x, y
    glVertex2f(0.255f, -0.18f);
    glVertex2f(0.255f, -0.1f);
    glVertex2f(-0.24f, -0.1f);
    glEnd();


    /// Yellow Roof ///
    glBegin(GL_QUADS);
    glColor3ub(250, 209,5); /// yellow color
    glVertex2f(-0.16f,-0.1f);    /// x, y
    glVertex2f(0.18f, -0.1f);
    glVertex2f(0.13f, -0.0165f);
    glVertex2f(-0.1f, -0.0165f);
    glEnd();


    /// Blue Inside Glass ///
    glBegin(GL_QUADS);
    glColor3ub(63, 40, 156); /// yellow color
    glVertex2f(-0.13f,-0.1f);    /// x, y
    glVertex2f(0.15f, -0.1f);
    glVertex2f(0.10f, -0.03f);
    glVertex2f(-0.07f, -0.03f);
    glEnd();


    /// Right Wheel
	 x=0.14;  y=-0.18f; radius =0.060f;

	 twicePi = 2.0f * PI;
    glColor3ub(26, 22, 22);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();


	/// White Circle inside Right Wheel
	 x=0.14;  y=-0.18f; radius =0.029f;

	 twicePi = 2.0f * PI;
    glColor3ub(255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();





	/// Left Wheel
	 x=-0.14;  y=-0.18f; radius =0.060f;

	 twicePi = 2.0f * PI;
    glColor3ub(26, 22, 22);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();



	/// White Circle Inside Left Wheel
	 x=-0.14;  y=-0.18f; radius =0.029f;

	 twicePi = 2.0f * PI;
    glColor3ub(255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <=20;i++)
            {
			glVertex2f
			(
                x + (radius * cos(i *  twicePi / 20)),
			    y + (radius * sin(i * twicePi / 20))
			);
		}
	glEnd();
	glPopMatrix();
   glLoadIdentity();


   /// ================================ CAR END ======================================= ///


	///======================================= Ship 1 ========================== ///


              glScalef(.5,.5,0);
              glTranslatef(-1.2,-0.2,0);
              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(.4,-.85);
              glVertex2f(-.4,-.85);
              glVertex2f(-.36,-.9);
              glVertex2f(.36,-.9);
              glEnd();



              glBegin(GL_QUADS);
              glColor3ub(243, 156, 18);
              glVertex2f(.52,-.7);
              glVertex2f(-.52,-.7);
               glColor3ub(211, 84, 0);
              glVertex2f(-.4,-.85);
              glVertex2f(.4,-.85);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(248, 196, 113 );

                  glVertex2f(.52,-.68);
                  glVertex2f(-.52,-.68);
                 glVertex2f(-.52,-.7);
                 glVertex2f(.52,-.7);


/// grey///
  glBegin(GL_QUADS);
              glColor3ub(117, 117, 117  );

                  glVertex2f(.42,-.6);
                  glVertex2f(-.42,-.6);
                 glVertex2f(-.42,-.68);
                 glVertex2f(.42,-.68);
/// Boat cabin ///
                 glBegin(GL_QUADS);
              glColor3ub(159, 168, 218  );
               glVertex2f(.32,-.46);
                  glVertex2f(-.35,-.46);
                 glVertex2f(-.35,-.6);
                 glVertex2f(.39,-.6);

/// window..

     glBegin(GL_QUADS);
              glColor3ub(207, 216, 220  );
               glVertex2f(.335,-.49);
                  glVertex2f(.25,-.49);
                 glVertex2f(.25,-.55);
                 glVertex2f(.365,-.55);
////
/// =================  Ship chimney =================

     glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(.05,-.35);
                  glVertex2f(.1,-.35);
                 glVertex2f(.1,-.46);
                 glVertex2f(.05,-.46);

                 glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(.05,-.33);
                 glVertex2f(.1,-.33);
                  glVertex2f(.1,-.35);
                     glVertex2f(.05,-.35);




                 glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(0,-.35);
                  glVertex2f(-.05,-.35);
                 glVertex2f(-.05,-.46);
                 glVertex2f(-.0,-.46);

                   glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(0,-.33);
                 glVertex2f(-.05,-.33);
                glVertex2f(-.05,-.35);
                    glVertex2f(0,-.35);



glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(-.1,-.35);
                  glVertex2f(-.15,-.35);
                 glVertex2f(-.15,-.46);
                 glVertex2f(-.1,-.46);

                        glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(-.1,-.33);
                 glVertex2f(-.15,-.33);
                glVertex2f(-.15,-.35);
                       glVertex2f(-.1,-.35);



/// =============== Ship Chimney End ====================== ///




   /// circle ///
   glBegin(GL_QUADS);
          glColor3ub(255, 202, 40 );
              glVertex2f(0.09,-.49);
                 glVertex2f(.14,-.49);


                glVertex2f(.14,-.555);
                    glVertex2f(0.09,-.555);


	glEnd();


  glBegin(GL_QUADS);
            glColor3ub(255, 202, 40 );
              glVertex2f(0.02,-.49);
                 glVertex2f(.07,-.49);
                glVertex2f(.07,-.555);
                    glVertex2f(0.02,-.555);


	glEnd();


   glBegin(GL_QUADS);
            glColor3ub(255, 202, 40);
              glVertex2f(0,-.49);
                 glVertex2f(-.05,-.49);
                glVertex2f(-.05,-.555);
                    glVertex2f(0,-.555);
                    glEnd();



                       glBegin(GL_QUADS);
             glColor3ub(255, 202, 40);
              glVertex2f(-0.07,-.49);
                 glVertex2f(-.12,-.49);
                glVertex2f(-.12,-.555);
                    glVertex2f(-0.07,-.555);


	glEnd();

                       glBegin(GL_QUADS);
        glColor3ub(255, 202, 40 );
              glVertex2f(-0.14,-.49);
                 glVertex2f(-.19,-.49);
                glVertex2f(-.19,-.555);
                    glVertex2f(-0.14,-.555);


	glEnd();


                       glBegin(GL_QUADS);
glColor3ub(255, 202, 40 );
              glVertex2f(-0.21,-.49);
                 glVertex2f(-.26,-.49);
                glVertex2f(-.26,-.555);
                    glVertex2f(-0.21,-.555);


	glEnd();
    glLoadIdentity();


    /// ====================================== SHIP 1 END ==================================== ///





    ///======================================= Ship 2 (Same as ship 1) ========================== ///

              glScalef(.35,.35,0);
              glTranslatef(1.5,-0.42,0);
              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(.4,-.85);
              glVertex2f(-.4,-.85);
              glVertex2f(-.36,-.9);
              glVertex2f(.36,-.9);
              glEnd();



              glBegin(GL_QUADS);
              glColor3ub(243, 156, 18);
              glVertex2f(.52,-.7);
              glVertex2f(-.52,-.7);
               glColor3ub(211, 84, 0);
              glVertex2f(-.4,-.85);
              glVertex2f(.4,-.85);
              glEnd();


  glBegin(GL_QUADS);
              glColor3ub(248, 196, 113 );

                  glVertex2f(.52,-.68);
                  glVertex2f(-.52,-.68);
                 glVertex2f(-.52,-.7);
                 glVertex2f(.52,-.7);


/// grey///
  glBegin(GL_QUADS);
              glColor3ub(117, 117, 117  );

                  glVertex2f(.42,-.6);
                  glVertex2f(-.42,-.6);
                 glVertex2f(-.42,-.68);
                 glVertex2f(.42,-.68);
/// Boat cabin ///
                 glBegin(GL_QUADS);
              glColor3ub(159, 168, 218  );
               glVertex2f(.32,-.46);
                  glVertex2f(-.35,-.46);
                 glVertex2f(-.35,-.6);
                 glVertex2f(.39,-.6);

/// window..

     glBegin(GL_QUADS);
              glColor3ub(207, 216, 220  );
               glVertex2f(.335,-.49);
                  glVertex2f(.25,-.49);
                 glVertex2f(.25,-.55);
                 glVertex2f(.365,-.55);
////
/// =================  Ship chimney =================

     glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(.05,-.35);
                  glVertex2f(.1,-.35);
                 glVertex2f(.1,-.46);
                 glVertex2f(.05,-.46);

                 glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(.05,-.33);
                 glVertex2f(.1,-.33);
                  glVertex2f(.1,-.35);
                     glVertex2f(.05,-.35);




                 glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(0,-.35);
                  glVertex2f(-.05,-.35);
                 glVertex2f(-.05,-.46);
                 glVertex2f(-.0,-.46);

                   glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(0,-.33);
                 glVertex2f(-.05,-.33);
                glVertex2f(-.05,-.35);
                    glVertex2f(0,-.35);



glBegin(GL_QUADS);
              glColor3ub(33, 33, 33 );
               glVertex2f(-.1,-.35);
                  glVertex2f(-.15,-.35);
                 glVertex2f(-.15,-.46);
                 glVertex2f(-.1,-.46);

                        glBegin(GL_QUADS);
              glColor3ub(230, 81, 0 );
              glVertex2f(-.1,-.33);
                 glVertex2f(-.15,-.33);
                glVertex2f(-.15,-.35);
                       glVertex2f(-.1,-.35);



/// =============== Ship Chimney End ====================== ///




   /// circle ///
   glBegin(GL_QUADS);
          glColor3ub(255, 202, 40 );
              glVertex2f(0.09,-.49);
                 glVertex2f(.14,-.49);


                glVertex2f(.14,-.555);
                    glVertex2f(0.09,-.555);


	glEnd();


  glBegin(GL_QUADS);
            glColor3ub(255, 202, 40 );
              glVertex2f(0.02,-.49);
                 glVertex2f(.07,-.49);
                glVertex2f(.07,-.555);
                    glVertex2f(0.02,-.555);


	glEnd();


   glBegin(GL_QUADS);
            glColor3ub(255, 202, 40);
              glVertex2f(0,-.49);
                 glVertex2f(-.05,-.49);
                glVertex2f(-.05,-.555);
                    glVertex2f(0,-.555);
                    glEnd();



                       glBegin(GL_QUADS);
             glColor3ub(255, 202, 40);
              glVertex2f(-0.07,-.49);
                 glVertex2f(-.12,-.49);
                glVertex2f(-.12,-.555);
                    glVertex2f(-0.07,-.555);


	glEnd();

                       glBegin(GL_QUADS);
        glColor3ub(255, 202, 40 );
              glVertex2f(-0.14,-.49);
                 glVertex2f(-.19,-.49);
                glVertex2f(-.19,-.555);
                    glVertex2f(-0.14,-.555);


	glEnd();


                       glBegin(GL_QUADS);
glColor3ub(255, 202, 40 );
              glVertex2f(-0.21,-.49);
                 glVertex2f(-.26,-.49);
                glVertex2f(-.26,-.555);
                    glVertex2f(-0.21,-.555);


	glEnd();
    glLoadIdentity();


    /// ====================================== SHIP 2 END ==================================== ///



          ///======================================= SHIP 3 (Different One ) ========================== ///


              glPopMatrix();
              glTranslatef(positionDifferentShipAtMorning,0,0);

              glScalef(.4,.4,0);
              glTranslatef(0.0,-0.7,0);
              glBegin(GL_QUADS);
              glColor3ub(0,0,0); /// Black color
              glVertex2f(.4,-.85);
              glVertex2f(-.4,-.85);
              glVertex2f(-.36,-.9);
              glVertex2f(.36,-.9);
              glEnd();


              /// Lower Ship Quad
             glBegin(GL_QUADS);
              //glColor3ub(243, 156, 18);
              glColor3ub(255, 0, 0);
              glVertex2f(.52,-.7);
              glVertex2f(-.52,-.7);
               glColor3ub(211, 84, 0);
              glVertex2f(-.4,-.85);
              glVertex2f(.4,-.85);
              glEnd();


              glBegin(GL_QUADS);
             // glColor3ub(248, 196, 113 );
              glColor3ub(255, 221, 0);
              glVertex2f(.52,-.68);
              glVertex2f(-.52,-.68);
              glVertex2f(-.52,-.7);
              glVertex2f(.52,-.7);
              glEnd();


/// grey Quad///
  glBegin(GL_QUADS);
            //glColor3ub(117, 117, 117  );
              glColor3ub(255, 221, 0);

                  glVertex2f(.42,-.6);
                  glVertex2f(-.42,-.6);
                 glVertex2f(-.42,-.68);
                 glVertex2f(.42,-.68);


	glPopMatrix();
    glLoadIdentity();

    /// ====================================== SHIP 3 (Differnt One ) END ==================================================== ///



        /// ========================================== UPPER RIVER BORDER LINE ====================================== ///


              glLineWidth(6.5);
              //glTranslatef(0.6,0.5,0.0);
              glBegin(GL_LINES);
              glColor3ub(105, 100, 98);
              glVertex2f(1,-.22);
              glVertex2f(-1,-.22);
              glEnd();
              glLoadIdentity();

              glutTimerFunc(4500,Day,0);

              glFlush();



}

/*8void morning (int val)
{

    glutDisplayFunc(Morning_View);

}**/


int main(int argc, char** argv)

{

	glutInit(&argc, argv);
	glutCreateWindow(" London City ");
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(Morning_View);
	//init();
	glutIdleFunc(Idle);
	glutTimerFunc(100, updateRain, 0);                                    ///   FOR RAIN at night
	glutTimerFunc(100, updateCarAtNight, 0);                             ///  Green Car moving At night
	//glutTimerFunc(100, updateBigShipAtNight, 0);                      ///  Big Ship moving At night
	//glutTimerFunc(100, updateSmallShipAtNight, 0);                   ///  mall Ship moving At night
	glutTimerFunc(100, updateCarAtEvening, 0);                        ///  Green Car Moving At Evening
	glutTimerFunc(100, updateBigShipAtEvening, 0);                   ///  Big Ship Moving At Evening
	glutTimerFunc(100, updateSmallShipAtEvening, 0);                ///  Small Ship Moving At Evening
	glutTimerFunc(100, updateBirdAtMorning, 0);                    ///  Bird Moving At Morning
	glutTimerFunc(100, updateCarAtMorning, 0);                    ///  Car Moving At Morning
	glutTimerFunc(100, updateDifferentShipAtMorning, 0);         ///  Different Ship Moving At Morning
	glutTimerFunc(100, updateSunAtMorning, 0);                  ///  Sun Moving At Morning
	glutTimerFunc(100, updatePlaneAtEvening, 0);               ///  Plane Flying In Evening
	glutTimerFunc(100, updateCloud1AtNight, 0);               ///  Right Cloud Moving At Night
	glutTimerFunc(100, updateCloud2AtNight, 0);              ///  Left Cloud Moving At Night
	glutTimerFunc(100,updateCloud1,0);                      /// Right Cloud Moving At Day
    glutTimerFunc(100,updateCloud2,0);                     /// Left Cloud Moving At DAy
    glutTimerFunc(100,updatePlaneAtDay,0);                /// Plane Flying  At Day
    glutTimerFunc(100,updateCarAtDay,0);                 /// Car Moving At DAy
    glutTimerFunc(100,updateBigShipAtDay,0);            /// Big Ship Moving At DAy
    glutTimerFunc(100,updateSmallShipAtDay,0);         /// Small Ship Moving At DAy
    glutTimerFunc(100,updateDifferentShipAtDay,0);    /// Different Ship Moving At DAy


	glutMainLoop();
	return 0;
}

