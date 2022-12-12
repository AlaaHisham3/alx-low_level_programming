#include "main.h"
#include <stdio.h>

/**
 * print_triangle - check the code
 * @size: variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int x;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (x = 1; x <= i; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
