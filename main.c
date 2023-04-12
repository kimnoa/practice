#include "main.h"

int main(void) {

	int num = 0;	//�Է��� ���ڸ� �����ϴ� ����
	int size = 0;	//�Է��ϴ� ������ �ڸ����� �ǹ��ϴ� ���� ���� �� �ʱ�ȭ
	int count = 0;	//�׽�Ʈ Ƚ���� �ǹ��ϴ� ���� ���� �� �ʱ�ȭ

	scanf("%d", &count);	//�ַܼκ��� �׽�Ʈ Ƚ���� �Է¹޾� count�� ����

	int** result = (int**)malloc(count * sizeof(int*));	// �� �׽�Ʈ���� ���� ����� �����ϴ� 2���� �迭 ���� �Ҵ�
	if (result == NULL) //�迭�� �������� ������ ���� �޽��� ���
		printf("malloc error!");

	for (int r = 0; r < count; r++)
	{
		result[r] = (int*)calloc(10, sizeof(int));		//0~9�� ���� Ƚ���� �����ϴ� int�� �迭�� ���� �Ҵ� �� ��� ���Ҹ� 0���� �ʱ�ȭ 
		if (result[r] == NULL) //�迭�� �������� ������ ���� �޽��� ���
			printf("calloc error!");
	}


	for (int c = 0; c < count; c++)
	{
		scanf("%d", &num); // num�� ������ ���� ����
		size = size_of_num(num); //size�� num�� �ڸ��� ����

		numbers(result[c], num, size, size); //1~num������ ������ ��Ÿ���� 0~9�� ������ �迭�� ����
	}


	for (int c = 0; c < count; c++)
	{
		for (int i = 0; i < 10; i++)
			printf("%d ", result[c][i]); //�迭�� ����Ǿ� �ִ� �� �׽�Ʈ���� �迭�� ����� 0~9�� ������ ��� 
		printf("\n");
	}


	for (int r = 0; r < count; r++)
		free(result[r]); //2���� ���� �迭 �޸� ��ȯ
	free(result);

	return 0;
}