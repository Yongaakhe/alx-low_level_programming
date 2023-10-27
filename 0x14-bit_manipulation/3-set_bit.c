#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: starting from 0 of the bit you want to set
 * @n: number to be set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 7))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
