#include <stdio.h>

int main(){

    int a = 88;

	int b = 70;

	int c = 100;

	float result = (a + b + c) / 3.0f;

	printf("==================\n");
	printf("국어   영어   수학\n");
	printf("==================\n");
	printf("%d      %d     %d\n",a, b, c);
	printf("==================\n");
	printf("총점 : %d점\n", a + b + c);
	printf("평균 : %f\n", result);
}