#include "main.h"

/**
 * rev_string - a function that prints the alphabet, in lowercase
 * @s: pointer
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i;
	int num;
	int rev = s[0];

	for (i = 0; s[i] != '\0';)
	{
		i = i + 1;
	}
	for (num = 0; num < i; num++)
	{
		i--;
		rev = s[num];
		s[num] = s[i];
		s[i] = rev;
	}
}
