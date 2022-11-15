#include "main.h"

/**
 * print_times_table - a function that prints the alphabet, in lowercaset
 *@n: variable
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n > 15 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				x = i * j;
				if (x < 10)
				{
					if (j != 0)
					{
					_putchar(' ');
					_putchar(' ');
					}
					_putchar((x % 10) + '0');
				}
				else if (x > 99)
				{
					_putchar((x / 100) + '0');
					_putchar((x % 100) / 10 + '0');
					_putchar((x % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
