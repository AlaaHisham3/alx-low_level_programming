#include "main.h"

/**
 * times_table - a function that prints the alphabet, in lowercaset
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int h, m, x;

	for (h = 0; h < 10; h++)
	{
		for (m = 0; m < 10; m++)
		{
			x = h * m;
			if (x < 10)
			{
				if (m != 0)
				{
					_putchar(' ');
				}
			_putchar((x % 10) + '0');
			if (m != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				if (m != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			}
	_putchar('\n');
}
}

