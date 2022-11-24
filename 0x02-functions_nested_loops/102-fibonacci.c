#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long x, y, sum;
	int i;

	x = 0;
	y = 1;
	for (i = 1; i <= 50; i++)
	{
		sum = x + y;
		printf("%ld", sum);
		if (i != 50)
		{
			printf(", ");
		}
		x = y;
		y = sum;
	}
	printf("\n");
	return (0);
}
