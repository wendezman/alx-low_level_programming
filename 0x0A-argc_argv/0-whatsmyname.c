#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _whats_myname - prints its name
 * @argc: Counts the number of commandline arguments
 * @argv: Pointer of array of commandline arguments
 * Return: Always 0 (Success)
 */

int _whats_myname(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
