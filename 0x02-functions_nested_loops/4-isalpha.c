#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - detect if it is letter
 * @c: input of func
 *
 * Return: return 1 if letter, 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
