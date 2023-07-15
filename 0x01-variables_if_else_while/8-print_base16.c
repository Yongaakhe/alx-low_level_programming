#include <stdio.h>

/**
  * main - Prints the numbers since 0 to 15
  *
  * Return: Always (Success)
  */
int main(void)
{
	char i;
	char m;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	for (m = 'a' ; m <= 'f' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
