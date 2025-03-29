// 표준 헤더 파일들의 선언
#include <cstdio>	// C 표준 입출력 헤더
#include <cstdlib>	// C 표준 라이브러리 헤더

// 그래픽스 API 헤더들의 선언
#include <glad/glad.h>	// "Multi-Language GL/GLES/EGL/GLX/WGL Loader-Generator based on the official specs"
#include <GLFW/glfw3.h>	// "Graphics Library Framework"; C로 작성된 OpenGL, OpenGL ES, Vulkan을 위한 오픈소스, 멀티플랫폼, 데스크탑 라이브러리

int main()
{
	glfwInit();										// GLFW 초기화
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);	// 호환되어야 하는 OpenGL major 버전 지정 x._
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);	// 호한되어야 하는 minor 버전 지정 _.x
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);	// 불필요한 하위호환 기능을 제외한 간소화된 OpenGL 기능 부분집합(subset)을 선택

	// Mac OS X 사용자의 경우에는 다음 문장을 추가할 것:
	//glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
}