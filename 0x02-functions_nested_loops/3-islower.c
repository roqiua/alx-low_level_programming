#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - is lower
 *
 * @c: input for alphabet
 *
 * Return: 1 if capital, 0 if small, -1 if another
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
