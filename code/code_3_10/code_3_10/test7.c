#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()

{
	float weight;//你的体重
	float value;//相等重量的白金价值

	printf("Are you worth your weight in platinum\n");
	printf("Let's check it out\n");
	printf("Please enter your weight in pounds\n");

	scanf("%f", &weight);
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("Your are easily worth that ! If platinum prices drop,\n");
	printf("Eat more to maintain your value.\n");

	return 0;
}