#include <stdio.h>
#include "main.h"
/**
 * main - print _putchar
 *
 * Return: return Always 0 (Success)
 */

int main(void)
{
	char *c = "_putchar";

	while(*c) 
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
