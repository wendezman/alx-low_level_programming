#include <stdio.h>

/**
 * main-Entry point
 *
 *Return: Always 0 (Success/Correct)
 */

int main(void)
{
	char base_16;

	for (base_16 = '0'; base_16 <= '9'; ++base_16)
		putchar(base_16);
	for (base_16 = 'a'; base_16 <= 'f'; ++base_16)
		putchar(base_16);

	putchar('\n');

	return (0);
}
