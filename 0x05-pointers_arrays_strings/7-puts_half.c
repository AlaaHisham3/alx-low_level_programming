#include "main.h"

/**
 * puts_half - a function that prints the alphabet, in lowercase
 * @str: pointer
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;
	int x;

	while (str[i] != '\0')
	{
		n = n + 1;
		i++;
	}
	if (n % 2 == 0)
	{
		x = n / 2;
		while (str[x] != '\0')
		{
			_putchar(str[x]);
			x++;
		}
	}
	else
	{
		x = (n - 1) / 2;
		while (str[x] != '\0')
		{
			_putchar(str[x]);
			x++;
		}
	}

	_putchar('\n');

}
