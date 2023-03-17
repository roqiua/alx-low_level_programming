#include <stdio.h>
/**
 * main - alphabet game
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 'a';
	while (n != 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);

}
