#include <iostream>

int main(void)
{
	int cost;

	while (1)
	{
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> cost;

		if (cost == -1)
			break;

		std::cout << "이번 달 급여: " << 50 + cost * 0.12 << "만원\n";
	}
	return 0;
}