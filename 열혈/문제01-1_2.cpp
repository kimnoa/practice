#include <iostream>

int main(void)
{
	char name[10];
	char phone[20];

	std::cout << "�̸� �Է�: ";
	std::cin >> name;

	std::cout << "��ȭ��ȣ �Է�";
	std::cin >> phone;

	std::cout << "�̸�: " << name << std::endl << "��ȭ��ȣ: " << phone;

	return 0;
}