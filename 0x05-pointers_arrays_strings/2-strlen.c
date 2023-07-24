#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: string to be counted
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;
	int counting;

	for (i = 0 ; s[i] != '\0' ; i++)
		counting++;
	return (counting);
}
