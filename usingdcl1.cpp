#include <iostream>

namespace Hybrid
{
	void Hybfunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}

}

int main(void)
{
	using Hybrid::Hybfunc;
	Hybfunc();
	return 0;
}