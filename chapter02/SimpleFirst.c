// Simple.cpp :
//
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void display()
{

	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);       
		glVertex2f(-0.5,-0.5);
		glVertex2f(-0.5,0.5);
		glVertex2f(0.5,0.5);
		glVertex2f(0.5,-0.5);
	glEnd();

	// glutSwapBuffers();
	glFlush();
}


int main(int argc, char* argv[])
{
	// glut���ʼ�� 
    glutInit(&argc, argv);
	// �趨������ʾģʽ
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    
	// ָ�����ڴ�С��λ�ã���������
    glutInitWindowSize(500, 500);
	glutInitWindowPosition(200, 0);
	glutCreateWindow("Simple");

	// ע���¼���������ע��ص�����
	glutDisplayFunc(display);
    
	// ѭ������¼����У�ִ����Ӧ�ص�����
	glutMainLoop();

	return 0;
}
