#include <stdio.h>
/**
 * main - prints some alphabets
 * Return: is always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');
	return (0);
}
