#include<stdio.h>    
/**
 * main - print
 *
 * Return: return 0
 */

int main(void)    
{
	int i;

	for (i = 0; i <=98; i++)
	{
		n3 = (n1 + n2);
		printf("%d", n3);
		if (n3 != 98)
		{
			printf(",");
			printf(" ");
		}
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
