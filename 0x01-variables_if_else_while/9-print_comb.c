#include <stdio.h>

/**
  * main - Prints the combination of numbers since 0 to 9
  *
  * Return: Always (Success)
  */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar(' ');
	return (0);
}
