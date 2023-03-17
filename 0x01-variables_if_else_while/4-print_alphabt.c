#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char n;

	n = 'a';
	while (n != '{')
	{
		if (n == 'e' || n == 'q')
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
