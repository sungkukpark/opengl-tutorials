// 표준 헤더 파일들의 선언
#include <iostream>	// C++ 표준 입출력 헤더

// 그래픽스 API 헤더들의 선언
#include <glad/glad.h>	// 함수 포인터 매니저 GLAD
#include <GLFW/glfw3.h>	// GLFW; Graphics Library Framework" C로 작성된 OpenGL, OpenGL ES, Vulkan을 위한 오픈소스, 멀티플랫폼, 데스크탑 라이브러리

int main()
{
	glfwInit();										// GLFW 초기화
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);	// 호환되어야 하는 OpenGL major 버전 지정 x._
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);	// 호한되어야 하는 minor 버전 지정 _.x
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);	// 불필요한 하위호환 기능을 제외한 간소화된 OpenGL 기능 부분집합(subset)을 선택

	// Mac OS X 사용자의 경우에는 다음 문장을 추가할 것:
	//glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	const int WIN_WIDTH = 800;
	const int WIN_HEIGHT = 600;
	const char* WIN_TITLE = "Sungkuk Park's OpenGL Study";

	// 윈도우 객체 인스턴스화
	GLFWwindow* window = glfwCreateWindow(WIN_WIDTH, WIN_HEIGHT, WIN_TITLE, NULL, NULL);
	if (window == NULL)
	{
		// 에러 처리
		std::cout << "GLFW 윈도우 생성에 실패했습니다" << std:: endl;
		return -1;
	}
	glfwMakeContextCurrent(window);

	// 함수 포인터 매니저 GLAD 초기화
	// glfwGetProcAddress() 함수는 현재 시스템의 OS에 맞는 함수 포인터를 돌려줌
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "GLAD 초기화에 실패했습니다" << std::endl;
		return -1;
	}

	while (!glfwWindowShouldClose(window))	// GLFW가 윈도우가 닫히는 명령이 발생했는지 확인하고 반환 값이 참(true)이면 while 루프를 탈출한다
	{
		glfwSwapBuffers(window);			// 이중 버퍼(Double buffer) 기법 적용. 후면(back) 버퍼가 그려지기 전까지는 전면(front) 버퍼를 보여준다
		glfwPollEvents();					// 키보드나 마우스 입력이 발생했는지를 확인하는 이벤트 폴링(Event polling)
	}

	glfwTerminate();	// 할당된 GLFW 자원들을 정리/삭제함
	return 0;			// 정상적으로 프로그램이 종료되었음을 알림
}