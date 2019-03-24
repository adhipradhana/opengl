// Include standard headers
#include <iostream>

// Include GLEW and GLFW
#include <GL/glew.h>
#include <GLFW/glfw3.h>

GLFWwindow* window;

void draw_pentagon();
int glInit();

int main() {
	// Initialize GLFW & GLEW
	if (glInit() != 0) {
		return -1;
	}

	do { 
		// Clear the screen
		glClear(GL_COLOR_BUFFER_BIT);

		// Draw pentagon
		draw_pentagon();		

		// Swap buffers
		glfwSwapBuffers(window);
		glfwPollEvents();

	} 
	while(glfwWindowShouldClose(window) == 0);

	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;
}

int glInit() {
	// Initialise GLFW
	if (!glfwInit()) {
		fprintf( stderr, "Failed to initialize GLFW\n" );
		return -1;
	}

	// Open a window and create its OpenGL context
	window = glfwCreateWindow( 1024, 768, "Task 1 : Pentagon", NULL, NULL);
	if (window == NULL){
		fprintf( stderr, "Failed to open GLFW window. If you have an Intel GPU, they are not 3.3 compatible. Try the 2.1 version of the tutorials.\n" );
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	// Initialize GLEW
	glewExperimental = true; // Needed for core profile
	if (glewInit() != GLEW_OK) {
		fprintf(stderr, "Failed to initialize GLEW\n");
		getchar();
		glfwTerminate();
		return -1;
	}
	
	return 0;
}

void draw_pentagon() {
	// Draw pentagon
	glBegin(GL_POLYGON);

	glColor3d(0.0f, 1.0f, 0.0f);
	glVertex2f(-0.4f, -0.9f);
	glVertex2f(-0.9f, 0.0f);
	glVertex2f(0.0f, 0.9f);
	glVertex2f(0.9f, 0.0f);
	glVertex2f(0.4f, -0.9f);

	glEnd();
}