#include <stdio.h>
/**
 * main - alphabet game reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);

}
