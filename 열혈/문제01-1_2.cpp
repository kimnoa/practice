#include <iostream>

int main(void)
{
	char name[10];
	char phone[20];

	std::cout << "이름 입력: ";
	std::cin >> name;

	std::cout << "전화번호 입력";
	std::cin >> phone;

	std::cout << "이름: " << name << std::endl << "전화번호: " << phone;

	return 0;
}