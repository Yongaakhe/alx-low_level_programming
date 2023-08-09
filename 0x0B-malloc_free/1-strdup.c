#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: NULL or pointer to the duplicate string
 */
char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;
	copy = malloc(sizeof(char) * count + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' ; i++)
		copy[i] = str[i];
	return (copy);
}
