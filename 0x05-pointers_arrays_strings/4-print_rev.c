#include "main.h"

/**
 * print_rev - a function that prints the alphabet, in lowercase
 * @s: pointer
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;
	int num;

	for (i = 0; s[i] != '\0';)
	{
		i = i + 1;
	}
	for (num = i - 1; num >= 0; num--)
	{
		_putchar(s[num]);
	}
	_putchar('\n');
}
