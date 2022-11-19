#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, x, y, sum;
	
	x = 0;
	y = 1;
	sum = x + y;
	for (i = 1; i <= 50; i++)
	{
		printf("%d", sum);
		if (i != 50)
		{
			printf(", ");
		}	
		x = y;
		y = sum;
		sum = x + y;
	}
	printf("\n");
	return (0);
}
