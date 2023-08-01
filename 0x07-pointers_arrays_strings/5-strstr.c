#include "main.h"
/**
 * _strstr - locates a substring
 * @needle: substring
 * @haystack: string
 * Return: needle, NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if  (haystack[i] == neddle[i])
		{
			do 
			{
				if (needle [i + 1] == '\0')
					return (hystack);
				i++;
