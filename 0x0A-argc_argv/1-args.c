#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: Counts the number of commandline arguments
 * @argv: Pointer of array of pointers of commandline arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
