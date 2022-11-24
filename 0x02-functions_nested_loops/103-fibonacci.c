#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long x, y, fib, sum;

	x = 0;
	y = 1;
	sum = 0;
	for (fib = 0 ; fib <= 4000000; fib++)
	{
		fib = x + y;
		if (fib % 2 == 0)
		{
			sum = sum + fib;
		}
		x = y;
		y = fib;
	}
	printf("%ld\n", sum);
	return (0);
}
