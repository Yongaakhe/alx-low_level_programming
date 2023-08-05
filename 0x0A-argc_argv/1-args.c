#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: argument name and program
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
