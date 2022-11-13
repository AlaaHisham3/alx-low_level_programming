#include "main.h"

/**
 * _abs - a function that prints the alphabet, in lowercase
 * @n : variable
 * Return: Always 0.
 */

int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}
