#include <iostream>

int main(void)
{
	int cost;

	while (1)
	{
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> cost;

		if (cost == -1)
			break;

		std::cout << "�̹� �� �޿�: " << 50 + cost * 0.12 << "����\n";
	}
	return 0;
}