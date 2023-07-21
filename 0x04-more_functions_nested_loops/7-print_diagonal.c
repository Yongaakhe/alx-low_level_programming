#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: function parameter
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
		_putchar('\n');
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			if (i == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
