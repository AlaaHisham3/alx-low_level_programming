#include "main.h"

/**
 * print_last_digit - a function that prints the alphabet, in lowercase
 * @n: The number of which the sign will be printed.
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (x);
}
