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
	int n;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
		return (0);
	}
}
