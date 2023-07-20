#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * 
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			_putchar(prod);
			_putchar(i);
			_putchar(',');
			_putchar(' ');
			_putchar(j);
		}
	}
}
