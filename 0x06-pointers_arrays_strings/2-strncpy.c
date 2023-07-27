#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @n: number of bytes to copy from src
 * @src: source string
 * @dest: destination string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

