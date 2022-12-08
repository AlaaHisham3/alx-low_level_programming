#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code
 * Return: Always 0.
 */
void more_numbers(void)
{
	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
