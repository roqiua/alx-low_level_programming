#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 *_isupper - fun for is upper
 *@c: input
 *
 * Return: return 1 or 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
