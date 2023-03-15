#include <stdio.h>

/**
 * main - Prints all arguments
 * @argc: Argument count/number of argument inputed
 * @argv: Argument vector , array of pointers to the arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
