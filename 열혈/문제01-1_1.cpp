#include <iostream>

int main(void)
{
	int result = 0;
	int v1, v2, v3, v4, v5;

	using namespace std;

	cout << "1��° ���� �Է�: ";
	cin >> v1;
	cout << "2��° ���� �Է�: ";
	cin >> v2;
	cout << "3��° ���� �Է�: ";
	cin >> v3;
	cout << "4��° ���� �Է�: ";
	cin >> v4;
	cout << "5��° ���� �Է�: ";
	cin >> v5;
	
	result = v1 + v2 + v3 + v4 + v5;

	cout << "�հ�: " << result;
	return 0;
}