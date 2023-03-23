#include "main.h"
#include <stdio.h>

/**
 * print_line - print line
 * @n: number to print
 *
 * Return: no return
 */

void print_line(int n)
{
	int i = 0;

	while (i != n)
	{
		if (n <= 0)
		{
			i = n;
			break;
		}
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
