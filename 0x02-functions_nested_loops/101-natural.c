#include "main.h"
#include <stdio.h>

/**
 * natural_numbers - a function that prints the alphabet, in lowercaset
 *
 * Return: Always 0.
 */
void natural_numbers(void);
void natural_numbers(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}

/**
 * main - a function that prints the alphabet, in lowercaset
 *
 * Return: Always 0
 */
int main(void)
{
	natural_numbers();
	return (0);
}
