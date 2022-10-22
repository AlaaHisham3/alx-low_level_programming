#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char x;
x = 'a';
while (x <= 'z')
{
	_putchar(x);
	x++;
}
_putchar('\n');
}
