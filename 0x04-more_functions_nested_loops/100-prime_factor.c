#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	long div = 2;
	long f = 0;

	while ( num != 1)
	{
		if (num % div == 0)
		{
			num = num / div;
			f = div;
		}
		div++;
	}
	printf("%ld\n", f);
	return (0);
}
