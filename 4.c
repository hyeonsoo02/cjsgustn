#include<stdio.h>
int main(){
	int num1, num2;
	int result;
	char sign;

	//while (1) 
	{
		printf("첫번째 값을 입력해주세요 ==> ");
		scanf_s("%d", &num1);

		printf("+, -, *, / 중 하나를 입력해주세요 ==>");
		scanf_s("%*c%c", &sign);

		printf("두번째 값을 입력해주세요 ==> ");
		scanf_s("%d", &num2);

		if (sign == '+') {
			result = num1 + num2;
			printf("%d + %d = %d \n", num1, num2, result);
		}
		if (sign == '-') {
			result = num1 - num2;
			printf("%d - %d = %d \n", num1, num2, result);
		}
		if (sign == '*') {
			result = num1 * num2;
			printf("%d * %d = %d \n", num1, num2, result);
		}
		if (sign == '/') 
		{
			if (num2 != 0) 
			{
				//0으로 나눌때 오류 방지
				result = num1 / num2;
				printf("%d / %d = %d\n", num1, num2, result);
			}
			else
			{
				printf("0으로 나누시면 안됌 \n");
			}
		
		}
		
		
	}
	if (sign == '%') {
		if (num2 != 0) {
			result = num1 % num2;
			printf("%d %% %d = %d \n", num1, num2, result);
		}
		else {
			printf("0으로 나누면 나머지 값이 안됩니다.\n");//주석
		}
	}
}