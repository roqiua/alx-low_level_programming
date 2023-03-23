#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isdigit - function
 * @c: input
 *
 * Return: return 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
