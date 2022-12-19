#include "main.h"
#include <stdio.h>

/**
 * _isupper - Prints a function that checks for uppercase
 * @c: Character to check
 *
 * Return: 1 or 0.
 */

int _isupper(int c)
{
	char uppercase = 'A';

	int isupper = 0;

	for (uppercase = 'Z'; uppercase++)
	{
	if (c == uppercase)
	{
	isupper = 1;
	break;
	}
	}
	return (isupper);	
}
