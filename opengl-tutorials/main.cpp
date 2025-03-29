// ǥ�� ��� ���ϵ��� ����
#include <cstdio>	// C ǥ�� ����� ���
#include <cstdlib>	// C ǥ�� ���̺귯�� ���

// �׷��Ƚ� API ������� ����
#include <glad/glad.h>	// "Multi-Language GL/GLES/EGL/GLX/WGL Loader-Generator based on the official specs"
#include <GLFW/glfw3.h>	// "Graphics Library Framework"; C�� �ۼ��� OpenGL, OpenGL ES, Vulkan�� ���� ���¼ҽ�, ��Ƽ�÷���, ����ũž ���̺귯��

int main()
{
	glfwInit();										// GLFW �ʱ�ȭ
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);	// ȣȯ�Ǿ�� �ϴ� OpenGL major ���� ���� x._
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);	// ȣ�ѵǾ�� �ϴ� minor ���� ���� _.x
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);	// ���ʿ��� ����ȣȯ ����� ������ ����ȭ�� OpenGL ��� �κ�����(subset)�� ����

	// Mac OS X ������� ��쿡�� ���� ������ �߰��� ��:
	//glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
}