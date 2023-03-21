#include<stdio.h>    
/**
 * main - print
 *
 * Return: return 0
 */

int main(void)
{
	int i, n1 = 0, n2 = 1, n3 = 0;

	for (i = 2; i <= 98; i++)
	{
		n3 = (n1 + n2);
		printf("%d", n3);
		printf(",");
		printf(" ");
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
