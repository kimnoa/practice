#include <iostream>

//오버로딩으로 매개변수 디폴트 값 지정과 같은 결과 보이기 (defaultvalue3)

int BoxVolume(int length)
{
	return length;
}

int BoxVolume(int length, int width)
{
	return length * width;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}


int Simple(int a = 10)
{
	return a + 1;
}

int Simple(void)
{
	return 10;
}


int main(void)
{
	std::cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D] : " << BoxVolume(7) << std::endl;
	//std::cout << "[D,D,D] : " << BoxVolume() << std::endl;  - 컴파일 에러
	//Simple(); - 오버로딩이 겹침
	return 0;
}


