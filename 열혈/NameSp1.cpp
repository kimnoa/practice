#include <iostream>

/*
namespace BestCom
{
	void Simplefunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;

	}
}

namespace ProgCom
{
	void Simplefunc(void)
	{
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;

	}
}
*/

namespace BestCom
{
	void Simplefunc(void);
}

namespace BestCom
{
	void Prettyfunc(void);
}

namespace ProgCom
{
	void Simplefunc(void);
}


int main(void)
{
	BestCom::Simplefunc();
	return 0;
}

void BestCom::Simplefunc(void)
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	Prettyfunc();
	ProgCom::Simplefunc();

}

void BestCom::Prettyfunc(void)
{
	std::cout << "Pretty!" << std::endl;
}

void ProgCom::Simplefunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}