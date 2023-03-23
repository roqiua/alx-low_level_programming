#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	int i;

	for (i = 2; num != 1; i++)
	{
		while (num % i == 0)
		{
			num = num / i;
		}
	}
	printf("%d", i);
	printf("\n");
	return (0);
}
