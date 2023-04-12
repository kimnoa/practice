#include <iostream>

int main(void)
{
	int result = 0;
	int v1, v2, v3, v4, v5;

	using namespace std;

	cout << "1번째 정수 입력: ";
	cin >> v1;
	cout << "2번째 정수 입력: ";
	cin >> v2;
	cout << "3번째 정수 입력: ";
	cin >> v3;
	cout << "4번째 정수 입력: ";
	cin >> v4;
	cout << "5번째 정수 입력: ";
	cin >> v5;
	
	result = v1 + v2 + v3 + v4 + v5;

	cout << "합계: " << result;
	return 0;
}