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
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
