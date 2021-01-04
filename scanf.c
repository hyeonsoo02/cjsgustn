#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num1;
	int num2;
	int result = 0;

	printf("정수 입력:");
	scanf("%d", &num1);

	printf("2번째 정수 입력");
	scanf("%d", &num2);

	result = num1 + num2;

	printf("%d  +  %d : %d\n", num1, num2, result);
}