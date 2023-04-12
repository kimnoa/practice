#include "main.h"

//1~num까지의 수에서 0~9가 나타나는 횟수를 배열에 저장하는 함수
void numbers(int* arr, int num, int size, int max_size) {
	int a = 0; //a,b,c는 각 case마다 연산에 자주 쓰이는 값을 저장하는 변수다.
	int b = 0;
	int c = 0;


	if (size == 1) // 측정하려는 0~9이 한자리 숫자일 경우
	{ 
		a = num % 10;	//a는 num의 1의 자리 숫자
		for (int i = 0; i < 10; i++) {
			arr[i] += num / 10;
			if (i > 0 && i <= a)
				arr[i] += 1; // 0~9가 일의 자리에서 나타내는 횟수는 0< i <=a 일 때는 num/10 + 1 이고 그 이외에는 num/10이다.
		}
	}
	else if (size == max_size) { //측정하려는 0~9이 가장 큰 자릿수일 경우
		a = (num / power10(size - 1)) % 10; //a는 최고 자릿수의 숫자
		for (int i = 1; i < a; i++)
			arr[i] += power10(size - 1); // 1~(a-1)에 해당하는 숫자는 "그 뒤의 다른 자리에서 나올 수 있는 모든 경우의 수"만큼 나온다.
		arr[a] += ((num % power10(size-1)) + 1); //a는 num의 최고 자릿수를 제외한 나머지로 이루어진 수에 1을 더한 만큼 나온다.
		numbers(arr, num, (--size), max_size); //한 자리 낮은 위치에서 연산
	}

	else{ //앞의 두 경우를 제외한 나머지 중간 자리에서의 0~9의 개수
		a = (num / power10(size-1))%10; //a는 num의 현재 측정하는 자릿수 숫자이다.
		b = (num / power10(size));		//b는 num의 현재 측정하는 자릿수보다 높은 자리의 숫자들
		c = (num % power10(size-1));	//c는 num의 현재 측정하는 자릿수보다 낮은 자리의 숫자들

		if (a==0) 									//num의 해당 자리수가 0일 때(해당 자리수 = 현재 측정하는 자릿수)
		{
			for (int i = 0; i < 10; i++)
			{
				arr[i] += (b - 1) * power10(size - 1); // 해당 자리보다 높은 자리에 1~(b-1)이 오는 모든 경우의 수
				if (i==0)								//해당 자리에 0이 나온 횟수
					arr[i] += c+1;	//해당 자리보다 높은 자리에 b가 올 때 num의 해당 자리도 0이므로 낮은 자리에 (0~c)가 올 수 있다.
				else   //해당 자리에 0이 아닌 i가 나온 횟수
					arr[i] += power10(size - 1);	//해당 자리보다 높은 자리에 아무 것도 없는 경우(해당 자리가 최고 자리일 때)
			}
		}

		else                                       //num의 해당 자리수가 0이 아닐 때
		{
			for (int n = 0; n < 10; n++)
			{
				if (n==0) //해당 자리에 0이 나온 횟수
				{
					arr[n]+= b * power10(size - 1); //해당 자리보다 높은 자리가 (1~b)이고 해당 자리보다 낮은 자리에 모든 수가 올 수 있을 경우
				}

				else if (n == a) {	//해당 자리에 숫자 a가 나온 횟수
					arr[n] += b * power10(size - 1) + (c + 1); //해당 자리보다 높은 자리에 (0~(b-1))이 왔을 때의 경우와 b일 때 해당 자리보다 낮은 자리에 0~c가 올 경우의 합
				}

				else if (n > a) { //해당 자리에 숫자 a보다 큰 n이 나온 횟수
					arr[n] += b * power10(size - 1); //해당 자리에 0이 나올 수 있는 경우와 동일한 방식
				}

				else {			//해당 자리에 1~(a-1)이 나온 횟수
					arr[n] += (b + 1) * power10(size - 1); //해당 자리보다 높은 자리에 (0~b)가 오는 모든 경우의 수
				}
					
			}
		}
		numbers(arr, num, (--size), max_size); //한 자리 낮은 위치에서 연산

	}

}

