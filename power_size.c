#include "main.h"

//10�� e �ŵ������� ������ִ� �Լ�
int power10(int e) {
	int result = 1;
	for (int i = 0; i < e; i++)
		result *= 10; //e��ŭ result�� 10�� ���Ͽ� �ŵ������� ���� ����� ����
	return result;
}

//num�� ���� �ڸ����� �����ϴ� �Լ�
int size_of_num(int num) {

	return ((num / 10) ? (1 + size_of_num(num / 10)) : 1);	//����Լ��� �̿��Ͽ� ���ڸ� 10�� �����鼭 ���� 0�� �ɶ����� 1�� ���� ������ ��ȯ
}