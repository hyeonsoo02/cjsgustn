#include<stdio.h>

int number1 = 100;

void age_printf(int age, char blood)
{
	age = 20;

	printf("나이 : %d\n", age);
	printf("혈액 : %c\n", blood);
	printf("%d\n", number1);     //100
}



void main()
{
	int number1 = 200;
	int age = 40;

	age_printf(age, 'A');

	printf("%d\n", number1);  //200

	number1 = 300;

	printf("%d\n", number1);  //200

	{
		int number1 = 50;
		printf("%d\n", number1);
	}
	printf("%d\n", number1);
}*/


/*#include<stdio.h>

void main()
{
	int con = 0;
	for (int i = 1; i <= 25; i++)
	{
		printf("%d  ", i);
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}

}
