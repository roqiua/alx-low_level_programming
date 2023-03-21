#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: input
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int r;

	r = (n % 10);
	if (r < 0)
	{
		r = (-1 * r);
	}
	_putchar(r + '0');
	return (r);
}
