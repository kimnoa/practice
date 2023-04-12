//Listing 2.2 using 키워드 사용하기

#include <iostream>
int main()
{
	using std::cout;
	using std::endl;

	cout << "Hello there. \n";
	cout << "Here is 5:" << 5 << "\n";
	cout << "The manipulator endl ";
	cout << "writes a new line to screen.";
	cout << endl;
	cout << "Here is very big number: \t" << 70000;
	cout << endl;
	cout << "Here is sum of 8 and 5: \t";
	cout << 8 + 5 << endl;
	cout << "here's a fraction:\t\t";
	cout << (float)5 / 8 << endl;
	cout << "And a very big number:\t";
	cout << (double)7000 * 7000 << endl;
	cout << "Don't forget to replace jesse liberty ";
	cout << "with your name...\n";
	cout << "Jesse Liberty is a C++ pragrammer! \n";
	return 0;
}