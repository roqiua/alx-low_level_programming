#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: no return
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
