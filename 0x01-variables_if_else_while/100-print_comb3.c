#include <stdio.h>

/**
  * main - Prints the combination of numbers between 0 to 9
  *
  * Return: Always (Success)
  */
int main(void)
{

	int i, m;

	for (i = '0'; i <= '9'; i++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			if (i < m)
			{
				putchar(i);
				putchar(m);

				if (i != '8' || (i == '8' && m != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);

}
