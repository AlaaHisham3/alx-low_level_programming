#include "main.h"

/**
 * _puts - a function that prints the alphabet, in lowercase
 * @str : pointer
 * Return: Always 0.
 */

void _puts(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
