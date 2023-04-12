#include <iostream>

/*
namespace BestCom
{
	void Simplefunc(void)
	{
		std::cout << "BestCom이 지정한 함수" << std::endl;

	}
}

namespace ProgCom
{
	void Simplefunc(void)
	{
		std::cout << "ProgCom이 지정한 함수" << std::endl;

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
	std::cout << "BestCom이 지정한 함수" << std::endl;
	Prettyfunc();
	ProgCom::Simplefunc();

}

void BestCom::Prettyfunc(void)
{
	std::cout << "Pretty!" << std::endl;
}

void ProgCom::Simplefunc(void)
{
	std::cout << "ProgCom이 지정한 함수" << std::endl;
}