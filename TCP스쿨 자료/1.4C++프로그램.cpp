#include <iostream>
#define TEXT "Welcome to C++ Programming!!\n"
using namespace std;

int main()
{
	int age;

	cout << TEXT;
	cout << "C++ 수업에 오신 것을 환영합니다!\n";
	
	cout << "나이를 입력하세요: ";
	cin >> age; 
	// 숫자가 아닌 문자열을 입력하면 0을 전달.

	cout << "당신의 나이는 " << age << "살 입니다." << endl;

	
	
	
	return 0;
}