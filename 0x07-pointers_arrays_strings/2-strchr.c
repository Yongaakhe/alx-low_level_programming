#include "main.h"
#include <stddef.h>
/**
 * _strchr -  locates a character in a string
 * @c: pointer to the first occurrence of the character
 * @s: string
 * Return: c, NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
