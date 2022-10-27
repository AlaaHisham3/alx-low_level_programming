#include "main.h"

/**
 * swap_int - a function that prints the alphabet, in lowercase
 * @a : pointer
 * @b : pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
