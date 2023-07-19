#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @k: function parameter
 * Return: m
 */

int print_last_digit(int k)
{
	int m;

	m = k % 10;
	if (k < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}

