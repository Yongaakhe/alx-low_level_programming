#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: prints a string
 * Return: void
 */
void print_rev(char *s)
{
	int count  = 0;
	int i;

	for (i = 0; s[i] != '\0' ; i++)
		count++;
	for (i = count - 1 ; 1 >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
