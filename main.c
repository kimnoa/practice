#include "main.h"

int main(void) {

	int num = 0;	//입력한 숫자를 저장하는 변수
	int size = 0;	//입력하는 숫자의 자릿수를 의미하는 변수 선언 및 초기화
	int count = 0;	//테스트 횟수를 의미하는 변수 선언 및 초기화

	scanf("%d", &count);	//콘솔로부터 테스트 횟수를 입력받아 count에 저장

	int** result = (int**)malloc(count * sizeof(int*));	// 각 테스트에서 구한 결과를 저장하는 2차원 배열 동적 할당
	if (result == NULL) //배열이 생성되지 않으면 오류 메시지 출력
		printf("malloc error!");

	for (int r = 0; r < count; r++)
	{
		result[r] = (int*)calloc(10, sizeof(int));		//0~9의 나온 횟수를 저장하는 int형 배열을 동적 할당 및 모든 원소를 0으로 초기화 
		if (result[r] == NULL) //배열이 생성되지 않으면 오류 메시지 출력
			printf("calloc error!");
	}


	for (int c = 0; c < count; c++)
	{
		scanf("%d", &num); // num에 페이지 숫자 저장
		size = size_of_num(num); //size에 num의 자릿수 저장

		numbers(result[c], num, size, size); //1~num까지의 수에서 나타나는 0~9의 개수를 배열에 저장
	}


	for (int c = 0; c < count; c++)
	{
		for (int i = 0; i < 10; i++)
			printf("%d ", result[c][i]); //배열에 저장되어 있는 각 테스트마다 배열에 저장된 0~9의 개수를 출력 
		printf("\n");
	}


	for (int r = 0; r < count; r++)
		free(result[r]); //2차원 동적 배열 메모리 반환
	free(result);

	return 0;
}