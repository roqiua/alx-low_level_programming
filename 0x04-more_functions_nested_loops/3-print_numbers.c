#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print num from 0 to 9
 *
 * Return: no return
 */
void print_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
