#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * jack_bauer - function to print time
 *
 * Return: no return
 */

void jack_bauer(void)
{
	int i, j, k, h;

	for (i = 0 ; i <= 2 ; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (h = 0; h <= 9; h++)
				{
					printf("%d%d:%d%d\n", i, j, k, h);
					if (i == 2 && j == 3 && k == 5 && h == 9)
					{
						exit(0);
					}
				}
			}
		}
	}

}
