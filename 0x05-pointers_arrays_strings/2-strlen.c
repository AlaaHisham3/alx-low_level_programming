#include "main.h"

/**
 * _strlen - a function that prints the alphabet, in lowercase
 * @s : pointer
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int num;

	for (num = 0; s[num] != '\0';)
	{
		num++;
	}
	return (num);
}
