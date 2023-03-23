#include "main.h"
#include <stdio.h>
/**
 * print_triangle - function
 * @size: input
 *
 * Return: no return
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > (i + 1); j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < j; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
