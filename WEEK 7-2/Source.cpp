#include <stdio.h>

int main()
{
	int x;
	printf("Total People = ");
	scanf_s("%d", &x);
	int sum;
	sum = x * (x - 1) / 2;
	printf("Total Shakehand = %d", sum);
}