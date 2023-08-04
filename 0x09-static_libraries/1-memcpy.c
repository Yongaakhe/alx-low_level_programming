#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: bytes from memory area
 * @src: source memory area
 * @dest: destinstion memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
