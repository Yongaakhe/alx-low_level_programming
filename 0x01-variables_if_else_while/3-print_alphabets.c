#include <stdio.h>
/**
 * main - main function
 * Return: always 0 (success)
 */
int main(void)
{
	char I;
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (I = 'A' ; I <= 'Z' ; I++)
		putchar(I);
	putchar('\n');
	return (0);
}
