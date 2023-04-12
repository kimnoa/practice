#include <iostream>

template <typename T> //나중에 배움
inline T SQUARE(T x)
{
	return x * x;
}

int main(void)
{
	using namespace std;

	cout << SQUARE(5.5) << endl;
	cout << SQUARE(12) << endl;

	return 0;
}