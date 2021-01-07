#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int base(int num1, int  num2, int  num3, int  gnum1, int  gnum2, int  gnum3);
int Random();


void main()
{
srand(time(NULL));
int result = 0;
while (1)
{
	int ran1 = Random();
	int ran2 = Random();
	int ran3 = Random();
	while (1)
	{
		if (ran1 == ran2)
		{
			break;
		}
		if (ran2 == ran3)
		{
			break;
		}
		if (ran1 == ran3)
		{
			break;
		}
		if ((ran1 != ran2) && (ran2 != ran3) && (ran1 != ran3))
		{
			result = (ran1 * 100) + (ran2 * 10) + ran3;
			break;
		}
	}
	if((ran1 != ran2) && (ran2 != ran3) &&(ran1!=ran3))
	break;
}

	printf("%d", result);

	int n1 = result / 100;
	int n2 = (result % 100) / 10;
	int n3 = result % 10;
	int get = 0;

	while (1)
	{

		printf("숫자입력 : ");

		scanf("%d", &get);

		int c1 = get / 100;
		int c2 = (get % 100) / 10;
		int c3 = get % 10;

		int str = base(n1, n2, n3, c1, c2, c3);

		if (str == 3)
		{
			printf("성공하셨습니다\n");
			break;
		}
	}
}


int base(int num1, int  num2, int  num3, int  gnum1, int  gnum2, int  gnum3)
{
	int str = 0;
	int ball = 0;
	if (num1 == gnum1) str++;
	if (num2 == gnum2) str++;
	if (num3 == gnum3) str++;

	if (num1 == gnum2 || num1 == gnum3) ball++;
	if (num2 == gnum1 || num2 == gnum3) ball++;
	if (num3 == gnum1 || num3 == gnum2) ball++;
	printf("%dS, %dB\n", str, ball);
	return str;
}

int Random()
{
	int rd = rand();
	int result = (rd % 9) + 1;
	return result;
}

