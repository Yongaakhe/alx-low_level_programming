#include "main.h"
#include <stdio.h>
/**
 * times_table - a function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			if  (j == 0)
				printf("%d, ", prod);
			else
			{
				printf("2d%", prod);
				if (j != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
