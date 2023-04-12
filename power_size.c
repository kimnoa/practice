#include "main.h"

//10의 e 거듭제곱을 출력해주는 함수
int power10(int e) {
	int result = 1;
	for (int i = 0; i < e; i++)
		result *= 10; //e만큼 result에 10을 곱하여 거듭제곱과 같은 결과를 구함
	return result;
}

//num의 숫자 자릿수를 측정하는 함수
int size_of_num(int num) {

	return ((num / 10) ? (1 + size_of_num(num / 10)) : 1);	//재귀함수를 이용하여 숫자를 10씩 나누면서 몫이 0이 될때까지 1을 더한 총합을 반환
}