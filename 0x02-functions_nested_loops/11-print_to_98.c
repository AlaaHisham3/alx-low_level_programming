#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints the alphabet, in lowercaset
 * @n: variable
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
			printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
			printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
