#include <stdio.h> 
#include "main.h"
/**
 * print_alphabet - print alphabet
 *
 * Return: no return
 */

void print_alphabet(void) 
{
	int i;
	for(i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_purchar('\n');
}
