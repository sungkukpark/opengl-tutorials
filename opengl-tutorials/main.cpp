// ǥ�� ��� ���ϵ��� ����
#include <iostream>	// C++ ǥ�� ����� ���

// �׷��Ƚ� API ������� ����
#include <glad/glad.h>	// �Լ� ������ �Ŵ��� GLAD
#include <GLFW/glfw3.h>	// GLFW; Graphics Library Framework" C�� �ۼ��� OpenGL, OpenGL ES, Vulkan�� ���� ���¼ҽ�, ��Ƽ�÷���, ����ũž ���̺귯��

int main()
{
	glfwInit();										// GLFW �ʱ�ȭ
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);	// ȣȯ�Ǿ�� �ϴ� OpenGL major ���� ���� x._
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);	// ȣ�ѵǾ�� �ϴ� minor ���� ���� _.x
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);	// ���ʿ��� ����ȣȯ ����� ������ ����ȭ�� OpenGL ��� �κ�����(subset)�� ����

	// Mac OS X ������� ��쿡�� ���� ������ �߰��� ��:
	//glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	const int WIN_WIDTH = 800;
	const int WIN_HEIGHT = 600;
	const char* WIN_TITLE = "Sungkuk Park's OpenGL Study";

	// ������ ��ü �ν��Ͻ�ȭ
	GLFWwindow* window = glfwCreateWindow(WIN_WIDTH, WIN_HEIGHT, WIN_TITLE, NULL, NULL);
	if (window == NULL)
	{
		// ���� ó��
		std::cout << "GLFW ������ ������ �����߽��ϴ�" << std:: endl;
		return -1;
	}
	glfwMakeContextCurrent(window);

	// �Լ� ������ �Ŵ��� GLAD �ʱ�ȭ
	// glfwGetProcAddress() �Լ��� ���� �ý����� OS�� �´� �Լ� �����͸� ������
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "GLAD �ʱ�ȭ�� �����߽��ϴ�" << std::endl;
		return -1;
	}

	while (!glfwWindowShouldClose(window))	// GLFW�� �����찡 ������ ����� �߻��ߴ��� Ȯ���ϰ� ��ȯ ���� ��(true)�̸� while ������ Ż���Ѵ�
	{
		glfwSwapBuffers(window);			// ���� ����(Double buffer) ��� ����. �ĸ�(back) ���۰� �׷����� �������� ����(front) ���۸� �����ش�
		glfwPollEvents();					// Ű���峪 ���콺 �Է��� �߻��ߴ����� Ȯ���ϴ� �̺�Ʈ ����(Event polling)
	}

	glfwTerminate();	// �Ҵ�� GLFW �ڿ����� ����/������
	return 0;			// ���������� ���α׷��� ����Ǿ����� �˸�
}