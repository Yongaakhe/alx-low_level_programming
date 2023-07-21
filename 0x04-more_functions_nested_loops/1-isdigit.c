#include "main.h"
/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: function parameter
 * Return: 1 on (success), 0 on (failure)
 */
int _isdigit(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
