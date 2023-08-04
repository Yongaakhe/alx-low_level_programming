#include "main.h"
/**
 * _puts - a function that prints a string to a standard output
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
